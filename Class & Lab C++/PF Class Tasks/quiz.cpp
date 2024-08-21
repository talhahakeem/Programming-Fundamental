
// M TALHA HAKEEM 193

#include <iostream>
using namespace std;
int incrementedarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        array[i]++;
    }
    return 0;
}
int decrementedarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        array[i] -= 2;
    }
    return 0;
}
void display(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] <<" ";
    }
}

int main()
{
    int A[5];
    cout << "Enter the Elements of Array:";
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    incrementedarray(A, 5);
    cout << "Elements After the increment are: ";
    display(A, 5);
    decrementedarray(A, 5);
    cout << "\nElements After the decrement are: " ;
    display(A, 5);
    return 0;
}