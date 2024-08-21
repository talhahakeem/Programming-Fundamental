#include<iostream>
using namespace std;
void towerofhanoi(int start,int end,char source,char aux,char destination)
{
    if (start>end)
    {
        return;
    }
    towerofhanoi(start,end-1,source,destination,aux)
    {
        cout<<" Move disk "<<end<<" from "<<source<<" to "<<destination;
    }
    
}
int main()
{
    return 0;
}