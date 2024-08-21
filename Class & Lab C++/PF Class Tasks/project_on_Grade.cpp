#include <iostream>
using namespace std;
int main()
{
    int obtained, students = 0;
    char choice;
    int percent[5];
    char grade[5]; 
    int rollnumber[5];
    int csmarks[5];
    int mathmarks[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Roll number,CS Marks,and Math Marks for Student " << i + 1 << ":";
        cin >> rollnumber[i];
        cin >> csmarks[i];
        if (csmarks[i] > 100)
        {
            cout << "Invalid marks. Please Enter the marks from 0 to 100. ";
            cin >> csmarks[i];
        }
        cin >> mathmarks[i];
        if (mathmarks[i] > 100)
        {
            cout << "Invalid marks. Please Enter the marks from 0 to 100. ";
            cin >> mathmarks[i];
        }
        obtained = csmarks[i] + mathmarks[i];
        percent[i] = obtained * 100 / 200;
        cout << "Percentage: " << percent[i] << "%"
             << " ,  ";
        if (percent[i] < 50)
            grade[i] = 'F';

        else if (percent[i] >= 50 && percent[i] < 60)
            grade[i] = 'D';

        else if (percent[i] >= 60 && percent[i] < 75)
            grade[i] = 'C';

        else if (percent[i] >= 75 && percent[i] < 90)
            grade[i] = 'B';

        else
            grade[i] = 'A';
        cout << "Grade: " << grade[i] << endl;
        students++;
        cout << "DO You Want to Continue Enrolling Students? (Y/N):";
        cin >> choice;
        if (choice == 'N' || choice == 'n')
        {
            break;
        }
        else if (choice == 'Y' || choice == 'y')
        {
            continue;
        }
        else
        {
            cout << "Please! Enter the Valid Character (Y/N).\n";
            cin >> choice;
        }
    }
    cout << "Student data : \n";
    for (int i = 0; i < students; i++)
    {
        cout << " Roll number : " << rollnumber[i] << " ,CS MARKS : " << csmarks[i] << "  ,Math Marks : " << mathmarks[i] << "  ,Percentage : " << percent[i] << " ,Grade : " << grade[i] << endl;
    }
    int select;
    cout << "Advanced Options:" << endl;
    cout << "1. Press 1 to update Roll Number of a particular Student." << endl;
    cout << "2. Press 2 to update marks of a particular student for CS." << endl;
    cout << "3. Press 3 to update marks of CS for all students who are already enrolled." << endl;
    cout << "4. Press 4 to update marks for Mathematics." << endl;
    cout << "5. Press 5 to update marks of Mathematics for all students who are already enrolled." << endl;
    cout << "6. Press 6 to sort the data on the basis of generated percentages in ascending order" << endl;
    cout << "7. Press 7 to delete the record of a particular student." << endl;
    cout << "8. Press 8 to exit." << endl;
    cin >> select;
    switch (select)
    {
    case 1:
    {
        int rollnum;
        cout << "Enter Roll Number of Particular student you want to update : " << endl;
        cin >> rollnum;
        for (int i = 0; i < 5; i++)
        {
            if (rollnumber[i] == rollnum)
            {
                cout << "Enter new Roll  number : ";
                cin >> rollnumber[i];
                cout << "Successfully Updated.";
                cout << "\nNew Roll Number is: " << rollnumber[i];
                break;
            }
            else
            {
                cout << "Sorry!Your Entered Roll Number Does not Exist.";
                break;
            }
        }
        break;
    }
    case 2:
    {
        int rollnum;
        cout << "Enter the Roll Number of Student To change CS Marks: ";
        cin >> rollnum;
        for (int i = 0; i < 5; i++)
        {
            if (rollnumber[i] == rollnum)
            {
                cout << "Enter new computer science marks (0-100) : ";
                cin >> csmarks[i];
                if (csmarks[i] > 100)
                {
                    cout << "Invalid marks. Please Enter the marks from 0 to 100. ";
                    cin >> csmarks[i];
                }
            }
        }
    }
    case 3:
    {
        cout << "Enter New Computer Science Marks of All Students :\n ";
        for (int i = 0; i < students; i++)
        {
            cout << "Roll number " << rollnumber[i] << " Enter your new Computer Science Marks(0-100):";
            cin >> csmarks[i];
            if (csmarks[i] > 100)
            {
                cout << "Invalid marks. Please Enter the marks from 0 to 100. ";
                cin >> csmarks[i];
            }
        }
    }
    case 4:
    {
        int rollnum;
        cout << "Enter the Roll Number of Student To change Mathematics Marks: ";
        cin >> rollnum;
        for (int i = 0; i < 5; i++)
        {
            if (rollnumber[i] == rollnum)
            {
                cout << "Enter new Mathematics marks (0-100) : ";
                cin >> mathmarks[i];
                if (mathmarks[i] > 100)
                {
                    cout << "Invalid marks. Please Enter the marks from 0 to 100. ";
                    cin >> mathmarks[i];
                }
            }
        }
    }
    case 5:
    {
        cout << "Enter New Mathematics Marks of All Students :\n ";
        for (int i = 0; i < students; i++)
        {
            cout << "Roll number " << rollnumber[i] << " Enter your new Mathematics Marks(0-100):";
            cin >> mathmarks[i];
            if (mathmarks[i] > 100)
            {
                cout << "Invalid marks. Please Enter the marks from 0 to 100. ";
                cin >> mathmarks[i];
            }
        }
    }
    case 6:
    {
        for (int i = 0; i < students; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (percent[i] > percent[j])
                {

                    swap(percent[i], percent[j]);
                    swap(rollnumber[i], rollnumber[j]);
                    swap(csmarks[i], csmarks[j]);
                    swap(mathmarks[i], mathmarks[j]);
                    swap(grade[i], grade[j]);
                }
            }
        }
        cout << "Sorted data : \n";
        for (int i = 0; i < students; i++)
            cout << " Roll number : " << rollnumber[i] << " ,Computer Science MARKS : " << csmarks[i] << "  ,Math Marks : " << mathmarks[i] << "  ,Percentage : " << percent[i] << " ,Grade : " << grade[i] << endl;
        break;
    }
    case 7:
    {
        int rollnum;
        cout << "Enter Roll number of student to delete record : ";
        cin >> rollnum;

        for (int i = 0; i < 5; i++)
        {
            if (rollnumber[i] == rollnum)
            {
                rollnumber[i] = -2;
            }
        }
    }
    case 8:
    {
        cout << "You Have Selected exit" << endl;
        cout << "You Exited Sucessfully." << endl;
        cout << "Student data : " << endl;
        for (int i = 0; i < students; i++)
        {
            if (rollnumber[i] == -2)
            {
                cout << "Record was deleted" << endl;
            }
            else
            {
                cout << " Roll number : " << rollnumber[i] << " ,Computer Science MARKS : " << csmarks[i] << "  ,Math Marks : " << mathmarks[i] << "  ,Percentage : " << percent[i] << " ,Grade : " << grade[i] << endl;
            }
        }
    }
    }
    return 0;
}
