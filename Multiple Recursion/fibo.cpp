#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fibo(int n)
{
    if(n<=1) return n;
    ll last = fibo(n-1);
    ll sLast = fibo(n-2);
    return  last+sLast;
}
int main()
{
    ll n;
    cout<<"Nth fibo number, enter N= ? "<<endl;
    cout<<"Note: N<40 : " <<endl;
    cin>>n;
    int x =fibo(n);
    cout<<x<<endl;
}