// Q = 1901A
// https://codeforces.com/problemset/problem/1901/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int prev = 0;
        int mx = INT_MIN;
        for(int i=0;i<n;i++) 
        {
            int curr;
            cin>>curr;
            int diff = curr - prev;
            mx = max(mx , diff);
            prev = curr;
        }
        int diff = 2*(x - prev);
        mx = max(mx , diff);
        cout<<mx<<endl;
    }
    return 0;
}