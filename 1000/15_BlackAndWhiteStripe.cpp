// Q = 1690D
// https://codeforces.com/problemset/problem/1690/D

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int j = 0;
        int count = 0;
        for(;j<k;j++)
        {
            if(s[j] == 'W')
            count++;
        }
        int mn = count;
        for(int i=1;j<n;i++,j++)
        {
            if(s[i-1] == 'W') count--;
            if(s[j] == 'W') count++;
            mn = min(mn,count);
        }
        cout<<mn<<endl;
    }
    return 0;
}