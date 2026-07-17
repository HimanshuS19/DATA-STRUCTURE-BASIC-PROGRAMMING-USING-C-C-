//==============================================================//
//               BANK MANAGEMENT SYSTEM IN C++                  //
//--------------------------------------------------------------//
// Developed By : HIMANSHU SINGH                                //
// IDE          : VS CODE                                       //
// Description  : Bank Record Management using                  //
//                Classes, File Handling and Menu System        //
//==============================================================//

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdio>
#include<cstring>

using namespace std;

//--------------------------------------------------------------//
//                    BANK ACCOUNT CLASS                        //
//--------------------------------------------------------------//

class BankAccount
{
private:

    int accountNumber;
    char accountHolder[50];
    char accountType[20];
    float balance;

public:

    void createAccount();
    void displayAccount() const;
    void modifyAccount();

    int getAccountNumber() const
    {
        return accountNumber;
    }

    float getBalance() const
    {
        return balance;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    bool withdraw(float amount)
    {
        if(amount > balance)
            return false;

        balance -= amount;
        return true;
    }
};

//--------------------------------------------------------------//
//                CREATE NEW ACCOUNT                            //
//--------------------------------------------------------------//

void BankAccount::createAccount()
{
    cout<<"\nEnter Account Number : ";
    cin>>accountNumber;

    cin.ignore();

    cout<<"Enter Account Holder Name : ";
    cin.getline(accountHolder,50);

    cout<<"Enter Account Type (Saving/Current) : ";
    cin.getline(accountType,20);

    cout<<"Enter Initial Deposit : ";
    cin>>balance;
}

//--------------------------------------------------------------//
//                 DISPLAY ACCOUNT DETAILS                      //
//--------------------------------------------------------------//

void BankAccount::displayAccount() const
{
    cout<<"\n========================================";
    cout<<"\nAccount Number : "<<accountNumber;
    cout<<"\nAccount Holder : "<<accountHolder;
    cout<<"\nAccount Type   : "<<accountType;
    cout<<"\nBalance        : Rs. "<<fixed<<setprecision(2)<<balance;
    cout<<"\n========================================";
}

//--------------------------------------------------------------//
//                  MODIFY ACCOUNT DETAILS                      //
//--------------------------------------------------------------//

void BankAccount::modifyAccount()
{
    cin.ignore();

    cout<<"\nEnter New Account Holder Name : ";
    cin.getline(accountHolder,50);

    cout<<"Enter New Account Type : ";
    cin.getline(accountType,20);
}

//--------------------------------------------------------------//
//            FUNCTION DECLARATIONS                             //
//--------------------------------------------------------------//

void createNewAccount();
void displayAllAccounts();
void searchAccount();
void depositMoney();
void withdrawMoney();
void updateAccount();
void deleteAccount();
void menu();

//--------------------------------------------------------------//
//                  CREATE NEW ACCOUNT                          //
//--------------------------------------------------------------//

void createNewAccount()
{
    BankAccount account;

    ofstream fout("accounts.dat", ios::binary | ios::app);

    if(!fout)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\n========== CREATE NEW ACCOUNT ==========\n";

    account.createAccount();

    fout.write((char*)&account,sizeof(BankAccount));

    fout.close();

    cout<<"\nAccount Created Successfully.\n";
}

//--------------------------------------------------------------//
//                DISPLAY ALL ACCOUNTS                          //
//--------------------------------------------------------------//

void displayAllAccounts()
{
    BankAccount account;

    ifstream fin("accounts.dat", ios::binary);

    if(!fin)
    {
        cout<<"\nNo Account Records Found.";
        return;
    }

    cout<<"\n==============================================";
    cout<<"\n          BANK ACCOUNT DATABASE";
    cout<<"\n==============================================";

    while(fin.read((char*)&account,sizeof(BankAccount)))
    {
        account.displayAccount();
    }

    fin.close();

    cout<<"\n\nAll Records Displayed Successfully.\n";
}

//--------------------------------------------------------------//
//                     DEPOSIT MONEY                            //
//--------------------------------------------------------------//

void depositMoney()
{
    BankAccount account;

    int accNo;
    float amount;
    bool found=false;

    fstream file("accounts.dat", ios::binary | ios::in | ios::out);

    if(!file)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Account Number : ";
    cin>>accNo;

    while(file.read((char*)&account,sizeof(BankAccount)))
    {
        if(account.getAccountNumber()==accNo)
        {
            cout<<"\nCurrent Account Details";
            account.displayAccount();

            cout<<"\n\nEnter Deposit Amount : ";
            cin>>amount;

            account.deposit(amount);

            file.seekp(file.tellg()-streamoff(sizeof(BankAccount)));

            file.write((char*)&account,sizeof(BankAccount));

            cout<<"\nAmount Deposited Successfully.";

            found=true;

            break;
        }
    }

    file.close();

    if(!found)
    {
        cout<<"\nAccount Not Found.";
    }
}

//--------------------------------------------------------------//
//                    SEARCH ACCOUNT                            //
//--------------------------------------------------------------//

void searchAccount()
{
    BankAccount account;

    int accNo;
    bool found=false;

    ifstream fin("accounts.dat", ios::binary);

    if(!fin)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Account Number : ";
    cin>>accNo;

    while(fin.read((char*)&account,sizeof(BankAccount)))
    {
        if(account.getAccountNumber()==accNo)
        {
            cout<<"\nAccount Found Successfully.\n";
            account.displayAccount();

            found=true;
            break;
        }
    }

    fin.close();

    if(!found)
    {
        cout<<"\nAccount Not Found.";
    }
}

//--------------------------------------------------------------//
//                    WITHDRAW MONEY                            //
//--------------------------------------------------------------//

void withdrawMoney()
{
    BankAccount account;

    int accNo;
    float amount;
    bool found=false;

    fstream file("accounts.dat", ios::binary | ios::in | ios::out);

    if(!file)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Account Number : ";
    cin>>accNo;

    while(file.read((char*)&account,sizeof(BankAccount)))
    {
        if(account.getAccountNumber()==accNo)
        {
            cout<<"\nCurrent Account Details";
            account.displayAccount();

            cout<<"\n\nEnter Withdrawal Amount : ";
            cin>>amount;

            if(account.withdraw(amount))
            {
                file.seekp(file.tellg()-streamoff(sizeof(BankAccount)));

                file.write((char*)&account,sizeof(BankAccount));

                cout<<"\nAmount Withdrawn Successfully.";
            }
            else
            {
                cout<<"\nInsufficient Balance.";
            }

            found=true;
            break;
        }
    }

    file.close();

    if(!found)
    {
        cout<<"\nAccount Not Found.";
    }
}

//--------------------------------------------------------------//
//                 UPDATE ACCOUNT DETAILS                       //
//--------------------------------------------------------------//

void updateAccount()
{
    BankAccount account;

    int accNo;
    bool found=false;

    fstream file("accounts.dat", ios::binary | ios::in | ios::out);

    if(!file)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Account Number to Update : ";
    cin>>accNo;

    while(file.read((char*)&account,sizeof(BankAccount)))
    {
        if(account.getAccountNumber()==accNo)
        {
            cout<<"\nCurrent Account Details";
            account.displayAccount();

            cout<<"\n\nEnter Updated Details\n";

            account.modifyAccount();

            file.seekp(file.tellg()-streamoff(sizeof(BankAccount)));

            file.write((char*)&account,sizeof(BankAccount));

            cout<<"\nAccount Updated Successfully.";

            found=true;
            break;
        }
    }

    file.close();

    if(!found)
    {
        cout<<"\nAccount Not Found.";
    }
}

//--------------------------------------------------------------//
//                   DELETE ACCOUNT                             //
//--------------------------------------------------------------//

void deleteAccount()
{
    BankAccount account;

    int accNo;
    bool found=false;

    ifstream fin("accounts.dat", ios::binary);

    ofstream fout("temp.dat", ios::binary);

    if(!fin || !fout)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Account Number to Delete : ";
    cin>>accNo;

    while(fin.read((char*)&account,sizeof(BankAccount)))
    {
        if(account.getAccountNumber()==accNo)
        {
            found=true;
        }
        else
        {
            fout.write((char*)&account,sizeof(BankAccount));
        }
    }

    fin.close();
    fout.close();

    remove("accounts.dat");
    rename("temp.dat","accounts.dat");

    if(found)
        cout<<"\nAccount Deleted Successfully.";

    else
        cout<<"\nAccount Not Found.";
}


//--------------------------------------------------------------//
//                      MENU FUNCTION                           //
//--------------------------------------------------------------//

void menu()
{
    cout<<"\n";
    cout<<"========================================================\n";
    cout<<"              BANK MANAGEMENT SYSTEM\n";
    cout<<"========================================================\n";
    cout<<"1. Create New Account\n";
    cout<<"2. Display All Accounts\n";
    cout<<"3. Search Account\n";
    cout<<"4. Deposit Money\n";
    cout<<"5. Withdraw Money\n";
    cout<<"6. Update Account Details\n";
    cout<<"7. Delete Account\n";
    cout<<"8. Exit\n";
    cout<<"========================================================\n";
    cout<<"Enter Your Choice : ";
}

//--------------------------------------------------------------//
//                       MAIN FUNCTION                          //
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
                createNewAccount();
                break;

            case 2:
                displayAllAccounts();
                break;

            case 3:
                searchAccount();
                break;

            case 4:
                depositMoney();
                break;

            case 5:
                withdrawMoney();
                break;

            case 6:
                updateAccount();
                break;

            case 7:
                deleteAccount();
                break;

            case 8:
                cout<<"\nThank You for Using Bank Management System.\n";
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