#include<bits/stdc++.h>
using namespace std;

void printName(int i,int n)
{
    if(i>n) return;
    else 
    {
        cout<<"Shakib"<<endl;
        printName(i+1,n);//recursion
    }
}
int main(){
    cout<<"How many time you want to print your name: ";
    int n;
    cin>>n;
    printName(1,n);

}