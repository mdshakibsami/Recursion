#include <bits/stdc++.h>
using namespace std;
// print 1 to N number using backtraking
// do not use f(i+1,n);
void printNumber(int i)
{
    if (i < 1)
        return;

    printNumber(i - 1); // functions are storing in stack
    cout << i << endl;  // this line will execute(as form of return) after base condition is executed.
}

int main()
{
    cout << "Enter a the number N= ";
    int n;
    cin >> n;
    printNumber(n);
}