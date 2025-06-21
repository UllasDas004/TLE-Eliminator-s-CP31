// Q = 1726A
// https://codeforces.com/problemset/problem/1726/A

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
        for(int i=0;i<n;i++) cin>>a[i];
        int mx = 0;
        for(int i=1;i<n;i++)
        mx = max(mx,a[i] - a[0]);
        for(int i=0;i<n-1;i++)
        mx = max(mx,a[n-1] - a[i]);
        for(int i=0;i<n-1;i++)
        mx = max(mx,a[i] - a[i+1]);
        cout<<mx<<endl;
    }
}