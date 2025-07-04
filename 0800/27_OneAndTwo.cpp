// Q = 1788A
// https://codeforces.com/problemset/problem/1788/A

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
        vector<int> a(n);
        vector<int> prefix(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            prefix[i+1] = prefix[i] + ((a[i] == 2) ? 1 : 0);
        }
        int idx = -1;
        for(int i=1;i<n;i++)
        {
            if(prefix[n] - prefix[i] == prefix[i])
            {
                idx = i;
                break;
            }
        }
        cout<<idx<<endl;
    }
    return 0;
}