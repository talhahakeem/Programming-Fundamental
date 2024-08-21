#include <iostream>
using namespace std;

int main()
{
    int in_list[10];
    cout << "In_List:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "ID of Vehicle " << i + 1 << " = ";
        cin >> in_list[i];
    }
    cout << endl;

    int out_list[10];
    cout << "Out_List:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "ID of Vehicle " << i + 1 << " = ";
        cin >> out_list[i];
    }
    cout << endl;

    cout << "In_List = ";
    for (int i = 0; i < 10; i++)
        cout << in_list[i] << ",";
    cout << "\b " << endl;

    cout << "Out_List = ";
    for (int i = 0; i < 10; i++)
        cout << out_list[i] << ",";
    cout << "\b " << endl
         << endl;

    int id;
    do
    {
        cout << "Enter Car ID you want to Delete (0 to exit): ";
        cin >> id;

        if (id != 0)
        {
            bool found = false;
            for (int i = 0; i < 10; i++)
            {
                if (id == in_list[i])
                {
                    found = true;
                    for (int j = i; j < 9; j++)
                        in_list[j] = in_list[j + 1];
                    in_list[9] = out_list[0];

                    for (int j = 0; j < 9; j++)
                        out_list[j] = out_list[j + 1];
                    out_list[9] = 0;
                    break;
                }
            }
            if (!found)
                cout << "Car ID not found. Please enter a valid ID." << endl;
            else
            {
                cout << "In_List = ";
                for (int i = 0; i < 10; i++)
                    cout << in_list[i] << ",";
                cout << "\b " << endl;

                cout << "Out_List = ";
                for (int i = 0; i < 10; i++)
                    cout << out_list[i] << ",";
                cout << "\b " << endl
                     << endl;
            }
        }
    } while (id != 0);
    return 0;
}
