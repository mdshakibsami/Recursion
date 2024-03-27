#include<bits/stdc++.h>
using namespace std;
//recursion usig parameter form
void SUM(int i,int sum)
{
    if(i<1) 
    {
        cout<<sum<<endl;
        return;
    }

    SUM(i-1,sum+i);
}
int main()
{
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    SUM(n,0);
}