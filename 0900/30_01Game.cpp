// Q = 1373B
// https://codeforces.com/problemset/problem/1373/B

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
        int oc = 0,zc = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0') zc++;
            else oc++;
        }
        int count = 1 + min(oc,zc);
        if(count%2 == 0) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
    return 0;
}