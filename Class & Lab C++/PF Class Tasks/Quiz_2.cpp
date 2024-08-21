#include <iostream>
using namespace std;
void incrementedarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        array[i]++;
    }
}
void decrementedarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        array[i] - 2;
    }
}
void display(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{
    int A[5];
    cout << "Enter the Elements of Array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    incrementedarray(A, 5);
    cout << "Array Elements after increment: " << endl;
    display(A, 5);
    decrementedarray(A, 5);
    cout << "Array Elements after decrement: " << endl;
    display(A, 5);
    return 0;
}