#include <iostream>
using namespace std;
void towerofhanoi(int n, char source, char destination, char helper)
{
    if (n == 0)
    {
        return;
    }

    towerofhanoi(n - 1, source, helper, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerofhanoi(n - 1, helper, destination, source);
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    towerofhanoi(n, 'A', 'B', 'C');
    return 0;
}