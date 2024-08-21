#include <iostream>
using namespace std;

void check(string A)
{
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++) // Fixed loop condition
        {
            if (A[i] == A[j]) // Added condition to check for duplicate characters
            {
                count++;
            }
        }
    }
    cout << "Number of duplicate characters: " << count << endl;
}

int main()
{
    string name= {"malaik"}; // Removed array brackets to pass a single string
    check(name);
    return 0;
}
