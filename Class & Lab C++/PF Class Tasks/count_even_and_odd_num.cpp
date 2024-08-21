#include<iostream>
using namespace std;
int main(){
    int e = 0;
    int o = 0;
    for (int i=1;i<=10;i++){
        if(i%2==0)
        e = e+1;
        else
            o = o+1;
    }
    cout<<e<<endl;
    cout<<o<<endl;
}