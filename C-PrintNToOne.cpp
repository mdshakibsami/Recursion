#include <bits/stdc++.h>
using namespace std;

void printNumber(int i)
{
    if (i < 1)
        return;
    cout << i << endl;
    printNumber(i - 1);
}
int main()
{
    cout << "Enter the value of N: ";
    int n;
    cin >> n;
    printNumber(n);
}