//==============================================================//
//             RAILWAY RESERVATION SYSTEM IN C++                //
//--------------------------------------------------------------//
// Developed By : HIMANSHU SINGH                                //
// IDE          : VS CODE                                       //
// Description  : Railway Reservation System using              //
//                Classes, File Handling and Menu System        //
//==============================================================//

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdio>
#include<cstring>

using namespace std;

//--------------------------------------------------------------//
//                    PASSENGER CLASS                           //
//--------------------------------------------------------------//

class Passenger
{
private:

    long long pnrNumber;
    int trainNumber;
    int age;
    int seatNumber;
    float fare;

    char passengerName[60];
    char gender[10];
    char trainName[50];
    char source[40];
    char destination[40];
    char travelClass[20];

public:

    void bookTicket();
    void displayTicket() const;
    void modifyTicket();

    long long getPNR() const
    {
        return pnrNumber;
    }

    int getTrainNumber() const
    {
        return trainNumber;
    }

    int getSeatNumber() const
    {
        return seatNumber;
    }

    float getFare() const
    {
        return fare;
    }
};

//--------------------------------------------------------------//
//                    BOOK TICKET                               //
//--------------------------------------------------------------//

void Passenger::bookTicket()
{
    cout<<"\nEnter PNR Number : ";
    cin>>pnrNumber;

    cout<<"Enter Train Number : ";
    cin>>trainNumber;

    cin.ignore();

    cout<<"Enter Train Name : ";
    cin.getline(trainName,50);

    cout<<"Enter Passenger Name : ";
    cin.getline(passengerName,60);

    cout<<"Enter Age : ";
    cin>>age;

    cin.ignore();

    cout<<"Enter Gender : ";
    cin.getline(gender,10);

    cout<<"Enter Source Station : ";
    cin.getline(source,40);

    cout<<"Enter Destination Station : ";
    cin.getline(destination,40);

    cout<<"Enter Travel Class (Sleeper/AC/General) : ";
    cin.getline(travelClass,20);

    cout<<"Enter Seat Number : ";
    cin>>seatNumber;

    cout<<"Enter Fare : ";
    cin>>fare;
}

//--------------------------------------------------------------//
//                  DISPLAY TICKET                              //
//--------------------------------------------------------------//

void Passenger::displayTicket() const
{
    cout<<"\n======================================================";
    cout<<"\nPNR Number      : "<<pnrNumber;
    cout<<"\nTrain Number    : "<<trainNumber;
    cout<<"\nTrain Name      : "<<trainName;
    cout<<"\nPassenger Name  : "<<passengerName;
    cout<<"\nAge             : "<<age;
    cout<<"\nGender          : "<<gender;
    cout<<"\nSource          : "<<source;
    cout<<"\nDestination     : "<<destination;
    cout<<"\nTravel Class    : "<<travelClass;
    cout<<"\nSeat Number     : "<<seatNumber;
    cout<<"\nTicket Fare     : Rs. "<<fixed<<setprecision(2)<<fare;
    cout<<"\n======================================================";
}

//--------------------------------------------------------------//
//                 MODIFY TICKET DETAILS                        //
//--------------------------------------------------------------//

void Passenger::modifyTicket()
{
    cin.ignore();

    cout<<"\nEnter New Passenger Name : ";
    cin.getline(passengerName,60);

    cout<<"Enter New Age : ";
    cin>>age;

    cin.ignore();

    cout<<"Enter New Gender : ";
    cin.getline(gender,10);

    cout<<"Enter New Source : ";
    cin.getline(source,40);

    cout<<"Enter New Destination : ";
    cin.getline(destination,40);

    cout<<"Enter New Travel Class : ";
    cin.getline(travelClass,20);

    cout<<"Enter New Seat Number : ";
    cin>>seatNumber;

    cout<<"Enter Updated Fare : ";
    cin>>fare;
}

//--------------------------------------------------------------//
//                FUNCTION DECLARATIONS                         //
//--------------------------------------------------------------//

void bookNewTicket();
void displayAllTickets();
void searchTicket();
void updateTicket();
void cancelTicket();
void menu();

//--------------------------------------------------------------//
//                  BOOK NEW TICKET                             //
//--------------------------------------------------------------//

void bookNewTicket()
{
    Passenger passenger;

    ofstream fout("railway.dat", ios::binary | ios::app);

    if(!fout)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\n========== BOOK NEW TICKET ==========\n";

    passenger.bookTicket();

    fout.write((char*)&passenger,sizeof(Passenger));

    fout.close();

    cout<<"\nTicket Booked Successfully.";
}

//--------------------------------------------------------------//
//                DISPLAY ALL TICKETS                           //
//--------------------------------------------------------------//

void displayAllTickets()
{
    Passenger passenger;

    ifstream fin("railway.dat", ios::binary);

    if(!fin)
    {
        cout<<"\nNo Reservation Records Found.";
        return;
    }

    cout<<"\n========================================================";
    cout<<"\n           RAILWAY RESERVATION DATABASE";
    cout<<"\n========================================================";

    while(fin.read((char*)&passenger,sizeof(Passenger)))
    {
        passenger.displayTicket();
    }

    fin.close();

    cout<<"\n\nAll Reservation Records Displayed Successfully.";
}

//--------------------------------------------------------------//
//                 SEARCH TICKET BY PNR                         //
//--------------------------------------------------------------//

void searchTicket()
{
    Passenger passenger;

    long long pnr;

    bool found=false;

    ifstream fin("railway.dat", ios::binary);

    if(!fin)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter PNR Number : ";
    cin>>pnr;

    while(fin.read((char*)&passenger,sizeof(Passenger)))
    {
        if(passenger.getPNR()==pnr)
        {
            cout<<"\nTicket Found Successfully.";

            passenger.displayTicket();

            found=true;

            break;
        }
    }

    fin.close();

    if(!found)
    {
        cout<<"\nTicket Not Found.";
    }
}

//--------------------------------------------------------------//
//               UPDATE TICKET DETAILS                          //
//--------------------------------------------------------------//

void updateTicket()
{
    Passenger passenger;

    long long pnr;
    bool found=false;

    fstream file("railway.dat", ios::binary | ios::in | ios::out);

    if(!file)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter PNR Number to Update : ";
    cin>>pnr;

    while(file.read((char*)&passenger,sizeof(Passenger)))
    {
        if(passenger.getPNR()==pnr)
        {
            cout<<"\nCurrent Ticket Details";

            passenger.displayTicket();

            cout<<"\n\nEnter Updated Passenger Details\n";

            passenger.modifyTicket();

            file.seekp(file.tellg()-streamoff(sizeof(Passenger)));

            file.write((char*)&passenger,sizeof(Passenger));

            cout<<"\nTicket Updated Successfully.";

            found=true;

            break;
        }
    }

    file.close();

    if(!found)
    {
        cout<<"\nTicket Not Found.";
    }
}

//--------------------------------------------------------------//
//                  CANCEL TICKET                               //
//--------------------------------------------------------------//

void cancelTicket()
{
    Passenger passenger;

    long long pnr;

    bool found=false;

    ifstream fin("railway.dat", ios::binary);

    ofstream fout("temp.dat", ios::binary);

    if(!fin || !fout)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter PNR Number to Cancel : ";
    cin>>pnr;

    while(fin.read((char*)&passenger,sizeof(Passenger)))
    {
        if(passenger.getPNR()==pnr)
        {
            found=true;
        }
        else
        {
            fout.write((char*)&passenger,sizeof(Passenger));
        }
    }

    fin.close();
    fout.close();

    remove("railway.dat");
    rename("temp.dat","railway.dat");

    if(found)
        cout<<"\nTicket Cancelled Successfully.";

    else
        cout<<"\nTicket Not Found.";
}

//--------------------------------------------------------------//
//            DISPLAY TICKET BY TRAIN NUMBER                    //
//--------------------------------------------------------------//

void displayTrainReservations()
{
    Passenger passenger;

    int trainNo;

    bool found=false;

    ifstream fin("railway.dat", ios::binary);

    if(!fin)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Train Number : ";
    cin>>trainNo;

    cout<<"\n============= PASSENGER LIST =============\n";

    while(fin.read((char*)&passenger,sizeof(Passenger)))
    {
        if(passenger.getTrainNumber()==trainNo)
        {
            passenger.displayTicket();

            found=true;
        }
    }

    fin.close();

    if(!found)
    {
        cout<<"\nNo Reservations Found for this Train.";
    }
}

//--------------------------------------------------------------//
//                     MENU FUNCTION                            //
//--------------------------------------------------------------//

void menu()
{
    cout<<"\n";
    cout<<"===========================================================\n";
    cout<<"            RAILWAY RESERVATION SYSTEM\n";
    cout<<"===========================================================\n";
    cout<<"1. Book New Ticket\n";
    cout<<"2. Display All Tickets\n";
    cout<<"3. Search Ticket by PNR\n";
    cout<<"4. Update Ticket Details\n";
    cout<<"5. Cancel Ticket\n";
    cout<<"6. Display Reservations by Train Number\n";
    cout<<"7. Exit\n";
    cout<<"===========================================================\n";
    cout<<"Enter Your Choice : ";
}

//--------------------------------------------------------------//
//                      MAIN FUNCTION                           //
//--------------------------------------------------------------//

int main()
{
    int choice;

    do
    {
        menu();

        cin>>choice;

        switch(choice)
        {
            case 1:
                bookNewTicket();
                break;

            case 2:
                displayAllTickets();
                break;

            case 3:
                searchTicket();
                break;

            case 4:
                updateTicket();
                break;

            case 5:
                cancelTicket();
                break;

            case 6:
                displayTrainReservations();
                break;

            case 7:
                cout<<"\nThank You for Using Railway Reservation System.\n";
                cout<<"Program Developed By HIMANSHU SINGH\n";
                break;

            default:
                cout<<"\nInvalid Choice! Please Try Again.\n";
        }

        if(choice!=7)
        {
            cout<<"\n\nPress Enter to Continue...";
            cin.ignore();
            cin.get();
        }

    }while(choice!=7);

    return 0;
}

