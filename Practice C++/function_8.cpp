#include <iostream>
using namespace std;
void display(int n, char m)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << m;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    char m;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter the character : ";
    cin >> m;
    display(n, m);
    return 0;
}