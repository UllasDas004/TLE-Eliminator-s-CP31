// Q = 1620B
// https://codeforces.com/problemset/problem/1620/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long w,h;
        cin>>w>>h;
        long long mx = INT_MIN;
        long long a = -1,b = -1;
        int k;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            if(a == -1) cin>>a;
            else cin>>b;
        }
        long long area = h * (b - a);
        mx = max(mx,area);
        a = -1,b = -1;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            if(a == -1) cin>>a;
            else cin>>b;
        }
        area = h * (b - a);
        mx = max(mx,area);
        a = -1,b = -1;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            if(a == -1) cin>>a;
            else cin>>b;
        }
        area = w * (b - a);
        mx = max(mx,area);
        a = -1,b = -1;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            if(a == -1) cin>>a;
            else cin>>b;
        }
        area = w * (b - a);
        mx = max(mx,area);
        cout<<mx<<endl;
    }
    return 0;
}