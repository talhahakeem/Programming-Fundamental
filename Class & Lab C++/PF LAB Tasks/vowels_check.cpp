#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    if (ch=='a','e','i','o','u')
    {
      cout<<"Your entered character is vowel.";
    }
    else 
    {
       cout<<"Your entered character is  not vowel."; 
    }
    
    return 0;
}