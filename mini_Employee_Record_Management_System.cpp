//==============================================================//
//          EMPLOYEE RECORD MANAGEMENT SYSTEM IN C++            //
//--------------------------------------------------------------//
// Developed By : HIMANSHU SINGH                                //
// IDE          : VS CODE                                       //
// Description  : Employee Record Management using              //
//                Classes, File Handling and Menu System        //
//==============================================================//

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdio>
#include<cstring>

using namespace std;

//--------------------------------------------------------------//
//                     EMPLOYEE CLASS                           //
//--------------------------------------------------------------//

class Employee
{
private:

    int employeeID;
    char employeeName[50];
    char department[40];
    char designation[40];
    float salary;

public:

    void addEmployee();
    void displayEmployee() const;
    void modifyEmployee();

    int getEmployeeID() const
    {
        return employeeID;
    }

    float getSalary() const
    {
        return salary;
    }

    void increaseSalary(float amount)
    {
        salary += amount;
    }

    void decreaseSalary(float amount)
    {
        if(amount<=salary)
            salary-=amount;
    }
};

//--------------------------------------------------------------//
//                ADD EMPLOYEE DETAILS                          //
//--------------------------------------------------------------//

void Employee::addEmployee()
{
    cout<<"\nEnter Employee ID : ";
    cin>>employeeID;

    cin.ignore();

    cout<<"Enter Employee Name : ";
    cin.getline(employeeName,50);

    cout<<"Enter Department : ";
    cin.getline(department,40);

    cout<<"Enter Designation : ";
    cin.getline(designation,40);

    cout<<"Enter Salary : ";
    cin>>salary;
}

//--------------------------------------------------------------//
//              DISPLAY EMPLOYEE DETAILS                        //
//--------------------------------------------------------------//

void Employee::displayEmployee() const
{
    cout<<"\n==============================================";
    cout<<"\nEmployee ID   : "<<employeeID;
    cout<<"\nEmployee Name : "<<employeeName;
    cout<<"\nDepartment    : "<<department;
    cout<<"\nDesignation   : "<<designation;
    cout<<"\nSalary        : Rs. "<<fixed<<setprecision(2)<<salary;
    cout<<"\n==============================================";
}

//--------------------------------------------------------------//
//              MODIFY EMPLOYEE DETAILS                         //
//--------------------------------------------------------------//

void Employee::modifyEmployee()
{
    cin.ignore();

    cout<<"\nEnter New Employee Name : ";
    cin.getline(employeeName,50);

    cout<<"Enter New Department : ";
    cin.getline(department,40);

    cout<<"Enter New Designation : ";
    cin.getline(designation,40);

    cout<<"Enter New Salary : ";
    cin>>salary;
}

//--------------------------------------------------------------//
//                FUNCTION DECLARATIONS                         //
//--------------------------------------------------------------//

void addEmployeeRecord();
void displayAllEmployees();
void searchEmployee();
void increaseEmployeeSalary();
void decreaseEmployeeSalary();
void updateEmployee();
void deleteEmployee();
void menu();

//--------------------------------------------------------------//
//                 ADD EMPLOYEE RECORD                          //
//--------------------------------------------------------------//

void addEmployeeRecord()
{
    Employee emp;

    ofstream fout("employee.dat", ios::binary | ios::app);

    if(!fout)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\n========== ADD NEW EMPLOYEE ==========\n";

    emp.addEmployee();

    fout.write((char*)&emp,sizeof(Employee));

    fout.close();

    cout<<"\nEmployee Record Added Successfully.";
}

//--------------------------------------------------------------//
//              DISPLAY ALL EMPLOYEE RECORDS                    //
//--------------------------------------------------------------//

void displayAllEmployees()
{
    Employee emp;

    ifstream fin("employee.dat", ios::binary);

    if(!fin)
    {
        cout<<"\nNo Employee Records Found.";
        return;
    }

    cout<<"\n==============================================";
    cout<<"\n          EMPLOYEE DATABASE";
    cout<<"\n==============================================";

    while(fin.read((char*)&emp,sizeof(Employee)))
    {
        emp.displayEmployee();
    }

    fin.close();

    cout<<"\n\nAll Employee Records Displayed Successfully.";
}

//--------------------------------------------------------------//
//              INCREASE EMPLOYEE SALARY                        //
//--------------------------------------------------------------//

void increaseEmployeeSalary()
{
    Employee emp;

    int id;
    float amount;
    bool found=false;

    fstream file("employee.dat", ios::binary | ios::in | ios::out);

    if(!file)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Employee ID : ";
    cin>>id;

    while(file.read((char*)&emp,sizeof(Employee)))
    {
        if(emp.getEmployeeID()==id)
        {
            cout<<"\nCurrent Employee Details";

            emp.displayEmployee();

            cout<<"\n\nEnter Increment Amount : ";
            cin>>amount;

            emp.increaseSalary(amount);

            file.seekp(file.tellg()-streamoff(sizeof(Employee)));

            file.write((char*)&emp,sizeof(Employee));

            cout<<"\nSalary Updated Successfully.";

            found=true;

            break;
        }
    }

    file.close();

    if(!found)
    {
        cout<<"\nEmployee Record Not Found.";
    }
}

//--------------------------------------------------------------//
//                 SEARCH EMPLOYEE RECORD                       //
//--------------------------------------------------------------//

void searchEmployee()
{
    Employee emp;

    int id;
    bool found=false;

    ifstream fin("employee.dat", ios::binary);

    if(!fin)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Employee ID : ";
    cin>>id;

    while(fin.read((char*)&emp,sizeof(Employee)))
    {
        if(emp.getEmployeeID()==id)
        {
            cout<<"\nEmployee Record Found Successfully.";

            emp.displayEmployee();

            found=true;

            break;
        }
    }

    fin.close();

    if(!found)
    {
        cout<<"\nEmployee Record Not Found.";
    }
}

//--------------------------------------------------------------//
//              DECREASE EMPLOYEE SALARY                        //
//--------------------------------------------------------------//

void decreaseEmployeeSalary()
{
    Employee emp;

    int id;
    float amount;
    bool found=false;

    fstream file("employee.dat", ios::binary | ios::in | ios::out);

    if(!file)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Employee ID : ";
    cin>>id;

    while(file.read((char*)&emp,sizeof(Employee)))
    {
        if(emp.getEmployeeID()==id)
        {
            cout<<"\nCurrent Employee Details";

            emp.displayEmployee();

            cout<<"\n\nEnter Deduction Amount : ";
            cin>>amount;

            if(amount<=emp.getSalary())
            {
                emp.decreaseSalary(amount);

                file.seekp(file.tellg()-streamoff(sizeof(Employee)));

                file.write((char*)&emp,sizeof(Employee));

                cout<<"\nSalary Updated Successfully.";
            }
            else
            {
                cout<<"\nDeduction Amount Exceeds Current Salary.";
            }

            found=true;

            break;
        }
    }

    file.close();

    if(!found)
    {
        cout<<"\nEmployee Record Not Found.";
    }
}

//--------------------------------------------------------------//
//                 UPDATE EMPLOYEE RECORD                       //
//--------------------------------------------------------------//

void updateEmployee()
{
    Employee emp;

    int id;
    bool found=false;

    fstream file("employee.dat", ios::binary | ios::in | ios::out);

    if(!file)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Employee ID to Update : ";
    cin>>id;

    while(file.read((char*)&emp,sizeof(Employee)))
    {
        if(emp.getEmployeeID()==id)
        {
            cout<<"\nCurrent Employee Details";

            emp.displayEmployee();

            cout<<"\n\nEnter Updated Details\n";

            emp.modifyEmployee();

            file.seekp(file.tellg()-streamoff(sizeof(Employee)));

            file.write((char*)&emp,sizeof(Employee));

            cout<<"\nEmployee Record Updated Successfully.";

            found=true;

            break;
        }
    }

    file.close();

    if(!found)
    {
        cout<<"\nEmployee Record Not Found.";
    }
}

//--------------------------------------------------------------//
//                 DELETE EMPLOYEE RECORD                       //
//--------------------------------------------------------------//

void deleteEmployee()
{
    Employee emp;

    int id;
    bool found=false;

    ifstream fin("employee.dat", ios::binary);

    ofstream fout("temp.dat", ios::binary);

    if(!fin || !fout)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Employee ID to Delete : ";
    cin>>id;

    while(fin.read((char*)&emp,sizeof(Employee)))
    {
        if(emp.getEmployeeID()==id)
        {
            found=true;
        }
        else
        {
            fout.write((char*)&emp,sizeof(Employee));
        }
    }

    fin.close();
    fout.close();

    remove("employee.dat");
    rename("temp.dat","employee.dat");

    if(found)
        cout<<"\nEmployee Record Deleted Successfully.";

    else
        cout<<"\nEmployee Record Not Found.";
}

//--------------------------------------------------------------//
//                     MENU FUNCTION                            //
//--------------------------------------------------------------//

void menu()
{
    cout<<"\n";
    cout<<"=========================================================\n";
    cout<<"         EMPLOYEE RECORD MANAGEMENT SYSTEM\n";
    cout<<"=========================================================\n";
    cout<<"1. Add Employee Record\n";
    cout<<"2. Display All Employee Records\n";
    cout<<"3. Search Employee Record\n";
    cout<<"4. Increase Employee Salary\n";
    cout<<"5. Decrease Employee Salary\n";
    cout<<"6. Update Employee Record\n";
    cout<<"7. Delete Employee Record\n";
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
                addEmployeeRecord();
                break;

            case 2:
                displayAllEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                increaseEmployeeSalary();
                break;

            case 5:
                decreaseEmployeeSalary();
                break;

            case 6:
                updateEmployee();
                break;

            case 7:
                deleteEmployee();
                break;

            case 8:
                cout<<"\nThank You for Using Employee Record Management System.\n";
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