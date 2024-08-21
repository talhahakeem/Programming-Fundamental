// Program to Display English Alphabets from  A-Z.
#include<iostream>
using namespace std;
int main()
{
    char character='A';
    do
    {
      cout<<character<<" ";
      character++;
    } while (character<='Z');
    return 0;
}