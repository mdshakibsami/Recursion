#include <bits/stdc++.h>
using namespace std;
// print N to 1 number using backtraking
// do not use f(i-1,n);
void printNumber(int i, int n)
{
    if (i > n)
        return;

    printNumber(i + 1, n); // functions are storing in stack
    cout << i << endl;     // this line will execute(as form of return) after base condition is executed.
}

int main()
{
    cout << "Enter a the number N= ";
    int n;
    cin >> n;
    printNumber(1, n);
}