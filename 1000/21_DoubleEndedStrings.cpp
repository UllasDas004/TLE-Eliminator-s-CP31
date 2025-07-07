// Q = 1506C
// https://codeforces.com/problemset/problem/1506/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int na = a.length(),nb = b.length(),maxLen = 0;
        for(int i=0;i<na;i++)
        {
            for(int j=0;j<nb;j++)
            {
                int len = 0;
                for(int x=i,y=j;x<na && y<nb && a[x] == b[y];x++,y++)
                len++;
                maxLen = max(maxLen,len);
            }
        }
        cout<<na + nb - 2 * maxLen<<endl;
    }
    return 0;
}