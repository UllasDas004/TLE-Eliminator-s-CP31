// Q = 1900A
// https://codeforces.com/problemset/problem/1900/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int empty = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '.')
            empty++;
        }
        if(n < 3) cout<<empty<<endl;
        else
        {
            bool flag = false;
            for(int i=2;i<n;i++)
            {
                if(s[i] == '.' && s[i-1] == '.' && s[i-2] == '.')
                {
                    flag = true;
                    break;
                }
            }
            if(flag) cout<<2<<endl;
            else cout<<empty<<endl;
        }
    }
    return 0;
}