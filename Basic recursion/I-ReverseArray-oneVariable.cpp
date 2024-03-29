#include<bits/stdc++.h>
using namespace std;
void reverseArray(int i,int n,int arr[])
{
    if(i>n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverseArray(i+1,n,arr);

}

int main()
{
    cout<<"Size of Array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Elements of array"<<endl;
        cin>>arr[i];
    }
    reverseArray(0,n,arr);//remember,array is passed by reference
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}