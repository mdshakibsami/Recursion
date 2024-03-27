#include<bits/stdc++.h>
using namespace std;
//recursion usig functional form
int SUM(int i)
{
    if(i==0) return 0;
    return i+SUM(i-1);//sum statement will excute one after another after base case execution


}
int main()
{
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    int sum = SUM(n);
    cout<<"The sum is: "<<sum<<endl;
    
}