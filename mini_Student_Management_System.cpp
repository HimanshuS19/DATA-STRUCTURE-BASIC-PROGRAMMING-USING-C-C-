//==============================================================//
//             STUDENT MANAGEMENT SYSTEM IN C++                 //
//--------------------------------------------------------------//
// Developed By : HIMANSHU SINGH                                //
// IDE          : VS CODE                                       //
// Description  : Student Record Management using               //
//                Classes, File Handling and Menu Driven System //
//==============================================================//

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdio>
#include<cstring>

using namespace std;

class Student
{
private:
    int rollNo;
    char name[50];
    char course[50];
    float marks;

public:

    void inputStudent();
    void displayStudent() const;

    int getRollNo() const
    {
        return rollNo;
    }

    float getMarks() const
    {
        return marks;
    }

    void modifyStudent();
};

//--------------------------------------------------------------//
//                    INPUT STUDENT DETAILS                     //
//--------------------------------------------------------------//

void Student::inputStudent()
{
    cout<<"\nEnter Roll Number : ";
    cin>>rollNo;

    cin.ignore();

    cout<<"Enter Student Name : ";
    cin.getline(name,50);

    cout<<"Enter Course : ";
    cin.getline(course,50);

    cout<<"Enter Marks : ";
    cin>>marks;
}

//--------------------------------------------------------------//
//                  DISPLAY STUDENT DETAILS                     //
//--------------------------------------------------------------//

void Student::displayStudent() const
{
    cout<<"\n---------------------------------------------";
    cout<<"\nRoll Number : "<<rollNo;
    cout<<"\nStudent Name: "<<name;
    cout<<"\nCourse      : "<<course;
    cout<<"\nMarks       : "<<marks;
    cout<<"\n---------------------------------------------";
}

//--------------------------------------------------------------//
//                  MODIFY STUDENT DETAILS                      //
//--------------------------------------------------------------//

void Student::modifyStudent()
{
    cin.ignore();

    cout<<"\nEnter New Student Name : ";
    cin.getline(name,50);

    cout<<"Enter New Course : ";
    cin.getline(course,50);

    cout<<"Enter New Marks : ";
    cin>>marks;
}

//--------------------------------------------------------------//
//              GLOBAL FUNCTION DECLARATIONS                    //
//--------------------------------------------------------------//

void addStudent();
void displayAllStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void menu();

//--------------------------------------------------------------//
//                 ADD STUDENT RECORD                           //
//--------------------------------------------------------------//

void addStudent()
{
    Student stu;

    ofstream fout;

    fout.open("students.dat", ios::binary | ios::app);

    if(!fout)
    {
        cout<<"\nError Opening File!";
        return;
    }

    cout<<"\n========== ADD NEW STUDENT ==========\n";

    stu.inputStudent();

    fout.write((char*)&stu,sizeof(Student));

    fout.close();

    cout<<"\nStudent Record Added Successfully.\n";
}

//--------------------------------------------------------------//
//               DISPLAY ALL STUDENT RECORDS                    //
//--------------------------------------------------------------//

void displayAllStudents()
{
    Student stu;

    ifstream fin;

    fin.open("students.dat", ios::binary);

    if(!fin)
    {
        cout<<"\nNo Student Records Found.\n";
        return;
    }

    cout<<"\n============================================";
    cout<<"\n        STUDENT RECORD DATABASE";
    cout<<"\n============================================\n";

    while(fin.read((char*)&stu,sizeof(Student)))
    {
        stu.displayStudent();
    }

    fin.close();

    cout<<"\n\nAll Records Displayed Successfully.\n";
}

//--------------------------------------------------------------//
//            SEARCH STUDENT FUNCTION (DECLARED NEXT)           //
//--------------------------------------------------------------//

//--------------------------------------------------------------//
//              SEARCH STUDENT BY ROLL NUMBER                   //
//--------------------------------------------------------------//

void searchStudent()
{
    Student stu;
    bool found=false;
    int roll;

    ifstream fin("students.dat", ios::binary);

    if(!fin)
    {
        cout<<"\nFile Not Found.";
        return;
    }

    cout<<"\nEnter Roll Number to Search : ";
    cin>>roll;

    while(fin.read((char*)&stu,sizeof(Student)))
    {
        if(stu.getRollNo()==roll)
        {
            cout<<"\nStudent Record Found\n";
            stu.displayStudent();
            found=true;
            break;
        }
    }

    fin.close();

    if(!found)
    {
        cout<<"\nStudent Record Not Found.";
    }
}

//--------------------------------------------------------------//
//                 UPDATE STUDENT RECORD                        //
//--------------------------------------------------------------//

void updateStudent()
{
    Student stu;
    bool found=false;
    int roll;

    fstream file("students.dat", ios::binary | ios::in | ios::out);

    if(!file)
    {
        cout<<"\nFile Not Found.";
        return;
    }

    cout<<"\nEnter Roll Number to Update : ";
    cin>>roll;

    while(file.read((char*)&stu,sizeof(Student)))
    {
        if(stu.getRollNo()==roll)
        {
            cout<<"\nCurrent Student Details";
            stu.displayStudent();

            cout<<"\n\nEnter New Details\n";

            stu.modifyStudent();

            file.seekp(file.tellg()-streamoff(sizeof(Student)));

            file.write((char*)&stu,sizeof(Student));

            found=true;

            cout<<"\nRecord Updated Successfully.";

            break;
        }
    }

    file.close();

    if(!found)
    {
        cout<<"\nStudent Record Not Found.";
    }
}

//--------------------------------------------------------------//
//                 DELETE STUDENT RECORD                        //
//--------------------------------------------------------------//

void deleteStudent()
{
    Student stu;

    bool found=false;

    int roll;

    ifstream fin("students.dat", ios::binary);

    ofstream fout("temp.dat", ios::binary);

    if(!fin || !fout)
    {
        cout<<"\nUnable to Open File.";
        return;
    }

    cout<<"\nEnter Roll Number to Delete : ";
    cin>>roll;

    while(fin.read((char*)&stu,sizeof(Student)))
    {
        if(stu.getRollNo()==roll)
        {
            found=true;
        }
        else
        {
            fout.write((char*)&stu,sizeof(Student));
        }
    }

    fin.close();
    fout.close();

    remove("students.dat");
    rename("temp.dat","students.dat");

    if(found)
        cout<<"\nStudent Record Deleted Successfully.";

    else
        cout<<"\nStudent Record Not Found.";
}

//--------------------------------------------------------------//
//                    MENU FUNCTION                             //
//--------------------------------------------------------------//

void menu()
{
    cout<<"\n";
    cout<<"=====================================================\n";
    cout<<"          STUDENT MANAGEMENT SYSTEM\n";
    cout<<"=====================================================\n";
    cout<<"1. Add Student Record\n";
    cout<<"2. Display All Student Records\n";
    cout<<"3. Search Student Record\n";
    cout<<"4. Update Student Record\n";
    cout<<"5. Delete Student Record\n";
    cout<<"6. Exit\n";
    cout<<"=====================================================\n";
    cout<<"Enter Your Choice : ";
}

//--------------------------------------------------------------//
//                        MAIN FUNCTION                         //
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
                addStudent();
                break;

            case 2:
                displayAllStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout<<"\nThank You for Using Student Management System.\n";
                cout<<"Program Developed By HIMANSHU SINGH\n";
                break;

            default:
                cout<<"\nInvalid Choice! Please Try Again.\n";
        }

        if(choice!=6)
        {
            cout<<"\n\nPress Enter to Continue...";
            cin.ignore();
            cin.get();
        }

    }while(choice!=6);

    return 0;
}