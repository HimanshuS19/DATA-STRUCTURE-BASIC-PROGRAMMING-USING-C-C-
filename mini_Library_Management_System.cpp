//==============================================================//
//             LIBRARY MANAGEMENT SYSTEM IN C++                 //
//--------------------------------------------------------------//
// Developed By : HIMANSHU SINGH                                //
// IDE          : VS CODE                                       //
// Description  : Library Record Management using               //
//                Classes, File Handling and Menu System        //
//==============================================================//

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdio>
#include<cstring>

using namespace std;

//--------------------------------------------------------------//
//                     BOOK CLASS                               //
//--------------------------------------------------------------//

class Book
{
private:

    int bookID;
    char bookName[100];
    char author[60];
    char publisher[60];
    int quantity;

public:

    void addBook();
    void displayBook() const;
    void modifyBook();

    int getBookID() const
    {
        return bookID;
    }

    int getQuantity() const
    {
        return quantity;
    }

    void issueBook()
    {
        if(quantity>0)
            quantity--;
    }

    void returnBook()
    {
        quantity++;
    }
};

//--------------------------------------------------------------//
//                  ADD BOOK DETAILS                            //
//--------------------------------------------------------------//

void Book::addBook()
{
    cout<<"\nEnter Book ID : ";
    cin>>bookID;

    cin.ignore();

    cout<<"Enter Book Name : ";
    cin.getline(bookName,100);

    cout<<"Enter Author Name : ";
    cin.getline(author,60);

    cout<<"Enter Publisher Name : ";
    cin.getline(publisher,60);

    cout<<"Enter Number of Copies : ";
    cin>>quantity;
}

//--------------------------------------------------------------//
//                DISPLAY BOOK DETAILS                          //
//--------------------------------------------------------------//

void Book::displayBook() const
{
    cout<<"\n================================================";
    cout<<"\nBook ID        : "<<bookID;
    cout<<"\nBook Name      : "<<bookName;
    cout<<"\nAuthor         : "<<author;
    cout<<"\nPublisher      : "<<publisher;
    cout<<"\nAvailable Copy : "<<quantity;
    cout<<"\n================================================";
}

//--------------------------------------------------------------//
//                 MODIFY BOOK DETAILS                          //
//--------------------------------------------------------------//

void Book::modifyBook()
{
    cin.ignore();

    cout<<"\nEnter New Book Name : ";
    cin.getline(bookName,100);

    cout<<"Enter New Author Name : ";
    cin.getline(author,60);

    cout<<"Enter New Publisher Name : ";
    cin.getline(publisher,60);

    cout<<"Enter Updated Quantity : ";
    cin>>quantity;
}

//--------------------------------------------------------------//
//               FUNCTION DECLARATIONS                          //
//--------------------------------------------------------------//

void addNewBook();
void displayAllBooks();
void searchBook();
void issueBook();
void returnBook();
void updateBook();
void deleteBook();
void menu();


//--------------------------------------------------------------//
//                    ADD NEW BOOK                              //
//--------------------------------------------------------------//

void addNewBook()
{
    Book book;

    ofstream fout("library.dat", ios::binary | ios::app);

    if(!fout)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\n========== ADD NEW BOOK ==========\n";

    book.addBook();

    fout.write((char*)&book,sizeof(Book));

    fout.close();

    cout<<"\nBook Added Successfully.\n";
}

//--------------------------------------------------------------//
//                  DISPLAY ALL BOOKS                           //
//--------------------------------------------------------------//

void displayAllBooks()
{
    Book book;

    ifstream fin("library.dat", ios::binary);

    if(!fin)
    {
        cout<<"\nNo Book Records Found.";
        return;
    }

    cout<<"\n==============================================";
    cout<<"\n            LIBRARY DATABASE";
    cout<<"\n==============================================";

    while(fin.read((char*)&book,sizeof(Book)))
    {
        book.displayBook();
    }

    fin.close();

    cout<<"\n\nAll Records Displayed Successfully.\n";
}

//--------------------------------------------------------------//
//                     ISSUE BOOK                               //
//--------------------------------------------------------------//

void issueBook()
{
    Book book;

    int id;
    bool found=false;

    fstream file("library.dat", ios::binary | ios::in | ios::out);

    if(!file)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Book ID to Issue : ";
    cin>>id;

    while(file.read((char*)&book,sizeof(Book)))
    {
        if(book.getBookID()==id)
        {
            cout<<"\nBook Found";
            book.displayBook();

            if(book.getQuantity()>0)
            {
                book.issueBook();

                file.seekp(file.tellg()-streamoff(sizeof(Book)));

                file.write((char*)&book,sizeof(Book));

                cout<<"\n\nBook Issued Successfully.";
            }
            else
            {
                cout<<"\nBook is Currently Out of Stock.";
            }

            found=true;
            break;
        }
    }

    file.close();

    if(!found)
    {
        cout<<"\nBook Not Found.";
    }
}

//--------------------------------------------------------------//
//                    SEARCH BOOK                               //
//--------------------------------------------------------------//

void searchBook()
{
    Book book;

    int id;
    bool found=false;

    ifstream fin("library.dat", ios::binary);

    if(!fin)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Book ID to Search : ";
    cin>>id;

    while(fin.read((char*)&book,sizeof(Book)))
    {
        if(book.getBookID()==id)
        {
            cout<<"\nBook Found Successfully.\n";

            book.displayBook();

            found=true;
            break;
        }
    }

    fin.close();

    if(!found)
    {
        cout<<"\nBook Not Found.";
    }
}

//--------------------------------------------------------------//
//                    RETURN BOOK                               //
//--------------------------------------------------------------//

void returnBook()
{
    Book book;

    int id;
    bool found=false;

    fstream file("library.dat", ios::binary | ios::in | ios::out);

    if(!file)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Book ID to Return : ";
    cin>>id;

    while(file.read((char*)&book,sizeof(Book)))
    {
        if(book.getBookID()==id)
        {
            book.returnBook();

            file.seekp(file.tellg()-streamoff(sizeof(Book)));

            file.write((char*)&book,sizeof(Book));

            cout<<"\nBook Returned Successfully.";

            found=true;

            break;
        }
    }

    file.close();

    if(!found)
    {
        cout<<"\nBook Not Found.";
    }
}

//--------------------------------------------------------------//
//                  UPDATE BOOK DETAILS                         //
//--------------------------------------------------------------//

void updateBook()
{
    Book book;

    int id;
    bool found=false;

    fstream file("library.dat", ios::binary | ios::in | ios::out);

    if(!file)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Book ID to Update : ";
    cin>>id;

    while(file.read((char*)&book,sizeof(Book)))
    {
        if(book.getBookID()==id)
        {
            cout<<"\nCurrent Book Details";

            book.displayBook();

            cout<<"\n\nEnter Updated Details\n";

            book.modifyBook();

            file.seekp(file.tellg()-streamoff(sizeof(Book)));

            file.write((char*)&book,sizeof(Book));

            cout<<"\nBook Record Updated Successfully.";

            found=true;

            break;
        }
    }

    file.close();

    if(!found)
    {
        cout<<"\nBook Not Found.";
    }
}

//--------------------------------------------------------------//
//                    DELETE BOOK                               //
//--------------------------------------------------------------//

void deleteBook()
{
    Book book;

    int id;
    bool found=false;

    ifstream fin("library.dat", ios::binary);

    ofstream fout("temp.dat", ios::binary);

    if(!fin || !fout)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Book ID to Delete : ";
    cin>>id;

    while(fin.read((char*)&book,sizeof(Book)))
    {
        if(book.getBookID()==id)
        {
            found=true;
        }
        else
        {
            fout.write((char*)&book,sizeof(Book));
        }
    }

    fin.close();
    fout.close();

    remove("library.dat");
    rename("temp.dat","library.dat");

    if(found)
        cout<<"\nBook Deleted Successfully.";

    else
        cout<<"\nBook Not Found.";
}

//--------------------------------------------------------------//
//                     MENU FUNCTION                            //
//--------------------------------------------------------------//

void menu()
{
    cout<<"\n";
    cout<<"=========================================================\n";
    cout<<"              LIBRARY MANAGEMENT SYSTEM\n";
    cout<<"=========================================================\n";
    cout<<"1. Add New Book\n";
    cout<<"2. Display All Books\n";
    cout<<"3. Search Book\n";
    cout<<"4. Issue Book\n";
    cout<<"5. Return Book\n";
    cout<<"6. Update Book Details\n";
    cout<<"7. Delete Book\n";
    cout<<"8. Exit\n";
    cout<<"=========================================================\n";
    cout<<"Enter Your Choice : ";
}

//--------------------------------------------------------------//
//                     MAIN FUNCTION                            //
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
                addNewBook();
                break;

            case 2:
                displayAllBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                updateBook();
                break;

            case 7:
                deleteBook();
                break;

            case 8:
                cout<<"\nThank You for Using Library Management System.\n";
                cout<<"Program Developed By HIMANSHU SINGH\n";
                break;

            default:
                cout<<"\nInvalid Choice! Please Try Again.\n";
        }

        if(choice!=8)
        {
            cout<<"\n\nPress Enter to Continue...";
            cin.ignore();
            cin.get();
        }

    }while(choice!=8);

    return 0;
}
