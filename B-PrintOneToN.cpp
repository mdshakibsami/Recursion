#include <bits/stdc++.h>
using namespace std;
void printNumber(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    printNumber(i + 1, n);
}

int main()
{
    cout << "Enter a the number N= ";
    int n;
    cin >> n;
    printNumber(1, n);
}