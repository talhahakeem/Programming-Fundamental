#include<iostream>
#include<string>
using namespace std;
int main()
{
    //Library data
    string books[5] = { "    Thomas Caculus","Electric circuit",
                       "Introduction to c++", "Political Science",
                       " Pakistan Studies " };
    string author[5] = { "Goroge Thomas","    Floyd","   Dietal","   Andrew","Mohi-ud-din" };
    int iban[5] = { 112233,112234,112235,112236,112237 };
    int edition[5] = { 3,4,9,1,2 };
    int publish[5] = { 2001,2007,2003,1997,1998 };
    int price[5] = { 200,300,400,100,500 };
    int quantity[5] = { 5,5,5,5,5 };

    //student data	
    int age[5] = { 18,19,17,20,21 };
    string gender[5] = { "M","M","M","M","f" };
    int rollnumber[5] = { 6251,6262,6273,6284,6295 };
    string names[5] = { "Ali ","Saif ","Ahmed","Bilal","Fatima" };

    int n, x = 5, option = 1;
    //This while loop is use to exit from library  
    while (option != 5) {
        cout << endl;
        cout << endl;
        cout << "Library Management System Menu\n1. Issue a book\n2.Return a book\n3.Display All Books Sorted by price";
        cout << "\n4.Display All students Sorted by age\n5.Exit\n";
        cout << "Enter your choice(1-5): ";
        cin >> option;
        //First we will sort array of book name and iban number to output correct book name and iban
        for (int q = 0; q < x; q++)
        {
            for (int w = q + 1; w < x; w++)
            {
                if (iban[q] > iban[w]) {

                    swap(iban[q], iban[w]);
                    swap(books[q], books[w]);

                }
            }
        }
        if (option == 1)
        {

            int rollnum;
            cout << "     Books                  Iban         Roll number" << endl;
            cout << "   Thomas Caculus           112233         6251" << endl;
            cout << "   Electric circuit         112234         6262" << endl;
            cout << "Introduction to c++         112235         6273" << endl;
            cout << " Political Science          112236         6284" << endl;
            cout << " Pakistan Studies           112237         6295" << endl;
            //This while loop is to get correct Iban and roll number 
            while (1) {
                int	inc = 0;
                cout << "Enter Iban number : ";
                cin >> n;
                cout << "Enter Roll number : ";
                cin >> rollnum;
                for (int c = 0; c < 5; c++)
                {
                    if (iban[c] == n)                      //inc variable is used to get correct roll number and iban number of book
                        inc++;

                    if (rollnumber[c] == rollnum)
                        inc++;
                }
                if (inc >= 2)
                    break;
                else
                    cout << "Please enter valid roll number and Iban number" << endl;

            }



            for (int i = 0; i < x; i++)
            {
                if (iban[i] == n)
                {
                    if (quantity[i] > 1) {

                        quantity[i]--;
                        cout << books[i] << " has been issued to " << rollnum << " . Remaining quantity is " << quantity[i];
                    }
                    else
                        cout << "Only one book is left, so cannot be issued ";
                }
            }
        }


        else if (option == 2)
        {
            cout << "     Books                  Iban         Roll number" << endl;
            cout << "   Thomas Caculus           112233         6251" << endl;
            cout << "   Electric circuit         112234         6262" << endl;
            cout << "Introduction to c++         112235         6273" << endl;
            cout << " Political Science          112236         6284" << endl;
            cout << " Pakistan Studies           112237         6295" << endl;
            //This wile loop is to get correct Iban number from user		
            while (1) {
                int inc = 0;
                cout << "Enter Iban number:";
                cin >> n;
                for (int v = 0; v < x; v++)
                {
                    if (iban[v] == n)
                        inc++;
                }
                if (inc++ >= 1)
                    break;
                else
                    cout << "Please enter correct iban : " << endl;
            }
            for (int i = 0; i < x; i++)
            {
                if (iban[i] == n)
                {

                    quantity[i]++;
                    cout << books[i] << " has been returned to library" << ". Remaining quantity is " << quantity[i];

                }
            }
        }

        //code for sorting book by price 
        else if (option == 3)
        {
            for (int q = 0; q < x; q++)
            {
                for (int w = q + 1; w < x; w++)
                {

                    if (price[q] > price[w]) {

                        swap(price[q], price[w]);
                        swap(iban[q], iban[w]);
                        swap(quantity[q], quantity[w]);
                        swap(books[q], books[w]);
                        swap(author[q], author[w]);
                        swap(edition[q], edition[w]);
                        swap(publish[q], publish[w]);
                    }
                }
            }
            cout << "_______________________________________________________________________________________________________________" << endl;
            cout << "Book names\t\t\tBook authors\t\t\tprice\t\tIban\t\tQuantity" << endl;
            cout << "_______________________________________________________________________________________________________________" << endl;
            for (int r = 0; r < x; r++)
                cout << books[r] << "\t|\t " << author[r] << "\t\t|\t" << price[r] << "\t|\t" << iban[r] << "\t|\t " << quantity[r] << endl;

            cout << "________________________________________________________________________________________________________________" << endl;

            cout << "___________________________________" << endl;
            cout << "Publishing year\t\tEdition" << endl;
            cout << "___________________________________" << endl;
            for (int r = 0; r < x; r++)
                cout << publish[r] << "\t\t|\t" << edition[r] << endl;
            cout << "___________________________________" << endl;

        }
        //End of sorting book

        //code for sorting student by age
        else if (option == 4)
        {

            for (int sort = 1; sort < x; sort++)
            {
                int key = age[sort], key3 = rollnumber[sort];
                string key4 = gender[sort];
                string key2 = names[sort];
                int j = sort - 1;
                while (j >= 0 && age[j] > key)
                {
                    age[j + 1] = age[j];
                    names[j + 1] = names[j];
                    rollnumber[j + 1] = rollnumber[j];
                    gender[j + 1] = gender[j];
                    j--;
                }
                age[j + 1] = key;
                names[j + 1] = key2;
                rollnumber[j + 1] = key3;
                gender[j + 1] = key4;
            }
            cout << " Name\t|\tAge\t|\tRoll Number\t|\tGender" << endl;
            cout << "_________________________________________________________________________" << endl;
            for (int display = 0; display < 5; display++)
                cout << names[display] << "\t|\t" << age[display] << "\t|\t" << rollnumber[display] << "\t\t|\t" << gender[display] << endl;

        }

        if (option == 5)
            cout << "You have exited from library";



    }




    system("pause");
    return 0;
}