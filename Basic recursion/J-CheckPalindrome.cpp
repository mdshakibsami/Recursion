#include <bits/stdc++.h>
using namespace std;
string palindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return "YES,this is palindrome";
    if (s[i] != s[s.size() - i - 1])
        return "NO,this is not palindrome";
    return palindrome(i + 1, s);
    //when a function has return type, all statement must be return type i think

}
int main()
{
    cout << "Enter a string: ";
    string s;
    cin >> s;
    
    cout << palindrome(0,s)<< endl;
}