#include <iostream>
using namespace std;

struct Student
{
int rollNo;
string name;
string course;
float marks;
};

int main()
{
Student s[100];
int count = 0;
int choice, roll, index;

while (true)  
{  
    cout << "\n===== STUDENT MANAGEMENT SYSTEM =====" << endl;  
    cout << "1. Add Student" << endl;  
    cout << "2. Display Students" << endl;  
    cout << "3. Update Student" << endl;  
    cout << "4. Delete Student" << endl;  
    cout << "5. Exit" << endl;  

    cout << "\nEnter your choice: ";  
    cin >> choice;  

    // Add Student  
    if (choice == 1)  
    {  
        cout << "\nEnter Roll No: ";  
        cin >> s[count].rollNo;  

        cout << "Enter Name: ";  
        cin >> s[count].name;  

        cout << "Enter Course: ";  
        cin >> s[count].course;  

        cout << "Enter Marks: ";  
        cin >> s[count].marks;  

        count++;  

        cout << "\nStudent Added Successfully!" << endl;  
    }  

    // Display Students  
    else if (choice == 2)  
    {  
        if (count == 0)  
        {  
            cout << "\nNo Student Found!" << endl;  
        }  
        else  
        {  
            cout << "\n===== STUDENT DETAILS =====" << endl;  

            for (int i = 0; i < count; i++)  
            {  
                cout << "\nStudent " << i + 1 << endl;  
                cout << "Roll No: " << s[i].rollNo << endl;  
                cout << "Name: " << s[i].name << endl;  
                cout << "Course: " << s[i].course << endl;  
                cout << "Marks: " << s[i].marks << endl;  
            }  
        }  
    }  

    // Update Student  
    else if (choice == 3)  
    {  
        cout << "\nEnter Roll No to Update: ";  
        cin >> roll;  

        index = -1;  

        for (int i = 0; i < count; i++)  
        {  
            if (s[i].rollNo == roll)  
            {  
                index = i;  
                break;  
            }  
        }  

        if (index == -1)  
        {  
            cout << "\nStudent Not Found!" << endl;  
        }  
        else  
        {  
            cout << "Enter New Name: ";  
            cin >> s[index].name;  

            cout << "Enter New Course: ";  
            cin >> s[index].course;  

            cout << "Enter New Marks: ";  
            cin >> s[index].marks;  

            cout << "\nStudent Updated Successfully!" << endl;  
        }  
    }  

    // Delete Student  
    else if (choice == 4)  
    {  
        cout << "\nEnter Roll No to Delete: ";  
        cin >> roll;  

        index = -1;  

        for (int i = 0; i < count; i++)  
        {  
            if (s[i].rollNo == roll)  
            {  
                index = i;  
                break;  
            }  
        }  

        if (index == -1)  
        {  
            cout << "\nStudent Not Found!" << endl;  
        }  
        else  
        {  
            for (int i = index; i < count - 1; i++)  
            {  #include <iostream>
using namespace std;

struct Student
{
int rollNo;
string name;
string course;
float marks;
};

int main()
{
Student s[100];
int count = 0;
int choice, roll, index;

while (true)  
{  
    cout << "\n===== STUDENT MANAGEMENT SYSTEM =====" << endl;  
    cout << "1. Add Student" << endl;  
    cout << "2. Display Students" << endl;  
    cout << "3. Update Student" << endl;  
    cout << "4. Delete Student" << endl;  
    cout << "5. Exit" << endl;  

    cout << "\nEnter your choice: ";  
    cin >> choice;  

    // Add Student  
    if (choice == 1)  
    {  
        cout << "\nEnter Roll No: ";  
        cin >> s[count].rollNo;  

        cout << "Enter Name: ";  
        cin >> s[count].name;  

        cout << "Enter Course: ";  
        cin >> s[count].course;  

        cout << "Enter Marks: ";  
        cin >> s[count].marks;  

        count++;  

        cout << "\nStudent Added Successfully!" << endl;  
    }  

    // Display Students  
    else if (choice == 2)  
    {  
        if (count == 0)  
        {  
            cout << "\nNo Student Found!" << endl;  
        }  
        else  
        {  
            cout << "\n===== STUDENT DETAILS =====" << endl;  

            for (int i = 0; i < count; i++)  
            {  
                cout << "\nStudent " << i + 1 << endl;  
                cout << "Roll No: " << s[i].rollNo << endl;  
                cout << "Name: " << s[i].name << endl;  
                cout << "Course: " << s[i].course << endl;  
                cout << "Marks: " << s[i].marks << endl;  
            }  
        }  
    }  

    // Update Student  
    else if (choice == 3)  
    {  
        cout << "\nEnter Roll No to Update: ";  
        cin >> roll;  

        index = -1;  

        for (int i = 0; i < count; i++)  
        {  
            if (s[i].rollNo == roll)  
            {  
                index = i;  
                break;  
            }  
        }  

        if (index == -1)  
        {  
            cout << "\nStudent Not Found!" << endl;  
        }  
        else  
        {  
            cout << "Enter New Name: ";  
            cin >> s[index].name;  

            cout << "Enter New Course: ";  
            cin >> s[index].course;  

            cout << "Enter New Marks: ";  
            cin >> s[index].marks;  

            cout << "\nStudent Updated Successfully!" << endl;  
        }  
    }  

    // Delete Student  
    else if (choice == 4)  
    {  
        cout << "\nEnter Roll No to Delete: ";  
        cin >> roll;  

        index = -1;  

        for (int i = 0; i < count; i++)  
        {  
            if (s[i].rollNo == roll)  
            {  
                index = i;  
                break;  
            }  
        }  

        if (index == -1)  
        {  
            cout << "\nStudent Not Found!" << endl;  
        }  
        else  
        {  
            for (int i = index; i < count - 1; i++)  
            {  
                s[i] = s[i + 1];  
            }  

            count--;  

            cout << "\nStudent Deleted Successfully!" << endl;  
        }  
    }  

    // Exit  
    else if (choice == 5)  
    {  
        cout << "\nThank You!" << endl;  
        break;  
    }  

    else  
    {  
        cout << "\nInvalid Choice!" << endl;  
    }  
}  

return 0;

}
                s[i] = s[i + 1];  
            }  

            count--;  

            cout << "\nStudent Deleted Successfully!" << endl;  
        }  
    }  

    // Exit  
    else if (choice == 5)  
    {  
        cout << "\nThank You!" << endl;  
        break;  
    }  

    else  
    {  
        cout << "\nInvalid Choice!" << endl;  
    }  
}  

return 0;

}
