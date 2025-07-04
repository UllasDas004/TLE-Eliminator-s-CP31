// Q = 1606A
// https://codeforces.com/problemset/problem/1606/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        if(s[0] != s[n-1])
        {
            if(s[0] == 'a') s[0] = 'b';
            else s[0] = 'a';
        }
        cout<<s<<endl;
    }
    return 0;
}