// Q = 665C
// https://codeforces.com/problemset/problem/665/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n = s.length();
        int i = 0;
        while(i < n)
        {
            int j = i+1;
            while(j<n && s[i] == s[j]) j++;
            char ch = 'a';
            if(s[i] == 'a')
            {
                ch = 'b';
                if(s[j] == 'b') ch = 'c';
            }
            else if(s[j] == 'a')
            {
                ch = 'b';
                if(s[i] == 'b') ch = 'c';
            }
            for(int k=i+1;k<j;k+=2) s[k] = ch;
            i = j;
        }
        cout<<s<<endl;
    }
    return 0;
}