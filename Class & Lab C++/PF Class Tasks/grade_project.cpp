#include <iostream>
using namespace std;
int main()
{
    int averg, grad, totalstudent = 0;
    int const limit = 5;
    int rollnum[limit] = {0};
    int csmarks[limit] = {0};
    int mathmarks[limit] = {0};
    char grade[limit] = {0};
    int percent[limit] = {0};
    char option = 'y';

    for (int i = 0; i < limit; i++)
    {

        cout << "Enter roll number of student " << i + 1 << " : ";
        cin >> rollnum[i];

        do
        {
            cout << "Enter computer science marks : ";
            cin >> csmarks[i];
            if (csmarks[i] <= 100)
            {
                break;
            }
        } while (csmarks[i] > 100);

        do
        {

            cout << "Enter math marks : ";
            cin >> mathmarks[i];
            if (mathmarks[i] <= 100)
            {
                break;
            }
        } while (mathmarks[i] > 100);
        // work for percentage and grading
        averg = static_cast<float>(csmarks[i] + mathmarks[i]) / 2;

        percent[i] = averg;

        if (averg < 50)
            grade[i] = 'F';

        else if (averg >= 50 && averg < 60)
            grade[i] = 'D';

        else if (averg >= 60 && averg < 75)
            grade[i] = 'C';

        else if (averg >= 75 && averg < 90)
            grade[i] = 'B';

        else
            grade[i] = 'A';
        // finish working of grades
        cout << "percentage : " << percent[i] << "  ,Grade : " << grade[i] << endl;
        totalstudent++;
        cout << "Do you want to continue enrolling student ?(y/n)";
        cin >> option;
        if (option == 'n' || option == 'N')
            break;
    }

    cout << "Student data : \n";
    for (int x = 0; x < totalstudent; x++)
        cout << " Roll number : " << rollnum[x] << " ,CsMARKS : " << csmarks[x] << "  ,Math Marks : " << mathmarks[x] << "  ,Percentage : " << percent[x] << " ,Grade : " << grade[x] << endl;
    int choice = 0;
    while (choice != 8)
    {

        cout << "Advanced Options:" << endl;
        cout << "1. Press 1 to update Roll Number of a particular Student." << endl;
        cout << "2. Press 2 to update marks of a particular student for CS." << endl;
        cout << "3. Press 3 to update marks of CS for all students who are already enrolled." << endl;
        cout << "4. Press 4 to update marks for Mathematics." << endl;
        cout << "5. Press 5 to update marks of Mathematics for all students who are already enrolled." << endl;
        cout << "6. Press 6 to sort the data on the basis of generated percentages in ascending order" << endl;
        cout << "7. Press 7 to delete the record of a particular student." << endl;
        cout << "8. Press 8 to exit." << endl;

        // Coding for next 7 option
        int choice;
        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1)
        {
            int rolnum;
            cout << "Enter roll number of student to be updated : " << endl;
            cin >> rolnum;
            for (int p = 0; p < limit; p++)
            {
                if (rollnum[p] == rolnum)
                {
                    cout << "Enter new roll number : ";
                    cin >> rollnum[p];
                }
            }
        }

        else if (choice == 2)
        {
            int rolnum;
            cout << "Enter roll number of student to change his/her computer science number: ";
            cin >> rolnum;
            for (int l = 0; l < limit; l++)
            {
                if (rollnum[l] == rolnum)
                {
                    do
                    {

                        cout << "Enter new computer science number : ";
                        cin >> csmarks[l];
                        if (csmarks[l] > 100)
                            cout << "Please enter marks less than 100" << endl;
                    } while (csmarks[l] > 100);
                }
            }
        }

        else if (choice == 3)
        {
            cout << "Re-enter new computer marks of all the students : ";
            for (int j = 0; j < limit; j++)
            {
                cout << "Roll number : " << rollnum << " Enter new marks of cs : ";
                do
                {
                    cin >> csmarks[j];
                    if (csmarks[j] > 100)
                        cout << "Enter marks below or equal to 100";
                } while (csmarks[j] > 100);
            }
        }

        else if (choice == 4)
        {
            int rolnum;
            cout << "Enter roll number of student to change his/her Math number: ";
            cin >> rolnum;
            for (int l = 0; l < limit; l++)
            {
                if (rollnum[l] == rolnum)
                {
                    do
                    {

                        cout << "Enter new Math number : ";
                        cin >> mathmarks[l];
                        if (mathmarks[l] > 100)
                            cout << "Please enter marks less than 100" << endl;
                    } while (mathmarks[l] > 100);
                }
            }
        }

        else if (choice == 5)
        {
            cout << "Re-enter new math marks of all the students : ";
            for (int j = 0; j < limit; j++)
            {
                cout << "Roll number : " << rollnum << " Enter new marks of math : ";
                do
                {
                    cin >> mathmarks[j];
                    if (mathmarks[j] > 100)
                        cout << "Enter marks below or equal to 100";
                } while (mathmarks[j] > 100);
            }
        }

        else if (choice == 6)
        {
            for (int h = 0; h < limit; h++)
            {
                for (int j = h + 1; j < limit; j++)
                {
                    if (percent[h] > percent[j])
                    {

                        swap(percent[h], percent[j]);
                        swap(rollnum[h], rollnum[j]);
                        swap(csmarks[h], csmarks[j]);
                        swap(mathmarks[h], mathmarks[j]);
                        swap(grade[h], grade[j]);
                    }
                }
            }
            cout << "Sorted data : \n";
            for (int x = 0; x < limit; x++)
                cout << " Roll number : " << rollnum[x] << " ,CsMARKS : " << csmarks[x] << "  ,Math Marks : " << mathmarks[x] << "  ,Percentage : " << percent[x] << " ,Grade : " << grade[x] << endl;
        }

        else if (choice == 7)
        {
            int rolnum;
            cout << "Enter Roll number of student to delete record : ";
            cin >> rolnum;

            for (int r = 0; r < limit; r++)
            {
                if (rollnum[r] == rolnum)
                {
                    rollnum[r] = -2;
                    /*	csmarks[r]=-2;
                        mathmarks[r]=-2;
                        percent[r]=-2;*/
                }
            }
        }

        else if (choice == 8)
        {
            cout << "You Have exited from software succefully " << endl;
            cout << "Student data : " << endl;
            for (int b = 0; b < limit; b++)
            {
                if (rollnum[b] == -2)
                    cout << "Record was deleted" << endl;
                //	else if(rollnum[b]==0||csmarks[b]==0)
                else
                    cout << " Roll number : " << rollnum[b] << " ,CsMARKS : " << csmarks[b] << "  ,Math Marks : " << mathmarks[b] << "  ,Percentage : " << percent[b] << " ,Grade : " << grade[b] << endl;
            }
        }
    }

    return 0;
}