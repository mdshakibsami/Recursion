#include<bits/stdc++.h>
using namespace std;
void reverseArray(int l,int r,int arr[])
{
    if(l>r) return;
    swap(arr[l],arr[r]);
    reverseArray(l+1,r-1,arr);

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
    int l=0,r=n-1;
    reverseArray(l,r,arr);//remember,array is passed by reference
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}