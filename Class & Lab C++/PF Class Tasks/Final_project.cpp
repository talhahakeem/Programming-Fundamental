// MUHAMMAD TALHA HAKEEM
//  SU-BSCSM-F23-193
//  SECTION: 1-F
#include <iostream>
using namespace std;
int main()
{
    cout << "\t\t\t\t\t  =====================  \t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t (Students Grade Report) \t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t  =====================  \t\t\t\t\t" << endl;
    int obtained, students = 0;
    char choice;
    int percent[5];
    char grade[5];
    int rollnumber[5];
    int csmarks[5];
    int mathmarks[5];
    for (int i = 0; i < 5; i++)
    {
        int rollnum, count = 0;
        cout << "Enter Roll number of student " << i + 1 << ":";
        cin >> rollnum;
        for (int j = 0; j <= i; j++)
        {
            if (rollnumber[j] == rollnum)
            {
                cout << "Roll Number Already Exist.Please Enter a Different Roll number.\n";
                count++;
                break;
            }
        }
        if (count != 0)
        {
            i--;
            continue;
        }
        rollnumber[i] = rollnum;
        cout << "Enter CS marks: ";
        cin >> csmarks[i];
        if (csmarks[i] > 100)
        {
            cout << "Invalid marks. Please Enter the marks from 0 to 100 :";
            cin >> csmarks[i];
        }
        cout << "Enter Math marks: ";
        cin >> mathmarks[i];
        if (mathmarks[i] > 100)
        {
            cout << "Invalid marks. Please Enter the marks from 0 to 100 : ";
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
    cout << "\n==============================================================================" << endl;
    cout << "Student data : \n";
    for (int i = 0; i < students; i++)
    {
        cout << " Roll number of student " << i + 1 << ": " << rollnumber[i] << " ,CS MARKS : " << csmarks[i] << "  ,Math Marks : " << mathmarks[i] << "  ,Percentage : " << percent[i] << " ,Grade : " << grade[i] << endl;
    }
    int select;
    do
    {
        cout << "\n==============================================================================" << endl;
        cout << "Advanced Options:" << endl;
        cout << "1. Press 1 to update Roll Number of a particular Student." << endl;
        cout << "2. Press 2 to update marks of a particular student for CS." << endl;
        cout << "3. Press 3 to update marks of CS for all students who are already enrolled." << endl;
        cout << "4. Press 4 to update marks of a particular student for Mathematics ." << endl;
        cout << "5. Press 5 to update marks of Mathematics for all students who are already enrolled." << endl;
        cout << "6. Press 6 to sort the data on the basis of generated percentages in ascending order" << endl;
        cout << "7. Press 7 to exit." << endl;
        cout << "==============================================================================" << endl;
        cout << "SELECT ANY OPTION IF YOU WANT :";
        cin >> select;
        switch (select)
        {
        case 1:
        {
            int rollnum, j = 0;
            cout << "Enter Roll Number of Particular student you want to update : " << endl;
            cin >> rollnum;
            for (int i = 0; i < 5; i++)
            {
                if (rollnumber[i] == rollnum)
                {

                    cout << "Enter new Roll  number : ";
                    cin >> rollnumber[i];
                    cout << "Successfully Updated.";
                    cout << "\nNew Roll Number is: " << rollnumber[i] << endl;
                    j++;
                    break;
                }
            }
            if (j == 0)
            {
                cout << "Sorry!Your Entered Roll Number Does not Exist." << endl;
            }
            break;
        }
        case 2:
        {
            int rollnum, j = 0;
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
                    cout << "Successfuly updated.New Marks are " << csmarks[i];
                    j++;
                }
            }
            if (j == 0)
            {
                cout << "Sorry!Your Entered Roll Number Does not Exist." << endl;
            }
            break;
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
            cout << "Successfully Updated.\n";
            break;
        }
        case 4:
        {
            int rollnum, j = 0;
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
                    cout << "successfully updated.New Math Marks are " << mathmarks[i];
                    j++;
                }
            }
            if (j == 0)
            {
                cout << "Sorry!Your Entered Roll Number Does not Exist." << endl;
            }
            break;
        }
        case 5:
        {
            cout << "Enter New Mathematics Marks of All Students.\n ";
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
            cout << "Successfully updated.";
            break;
        }
        case 6:
        {
            for (int i = 0; i < students - 1; i++)
            {
                for (int j = i + 1; j < students; j++)
                {
                    if (percent[i] > percent[j])
                    {
                        int temp_percent = percent[i];
                        percent[i] = percent[j];
                        percent[j] = temp_percent;

                        int temp_rollnumber = rollnumber[i];
                        rollnumber[i] = rollnumber[j];
                        rollnumber[j] = temp_rollnumber;

                        int temp_csmarks = csmarks[i];
                        csmarks[i] = csmarks[j];
                        csmarks[j] = temp_csmarks;

                        int temp_mathmarks = mathmarks[i];
                        mathmarks[i] = mathmarks[j];
                        mathmarks[j] = temp_mathmarks;

                        char temp_grade = grade[i];
                        grade[i] = grade[j];
                        grade[j] = temp_grade;
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
            cout << "You Have Selected exit" << endl;
            cout << "You Exited Sucessfully." << endl;
            cout << "Student data : " << endl;
            for (int i = 0; i < students; i++)
            {
                cout << " Roll number : " << rollnumber[i] << " ,Computer Science MARKS : " << csmarks[i] << "  ,Math Marks : " << mathmarks[i] << "  ,Percentage : " << percent[i] << " ,Grade : " << grade[i] << endl;
            }
        }
        }
    } while (select != 7);
    return 0;
}