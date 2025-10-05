// Q = 1791G1
// https://codeforces.com/problemset/problem/1791/G1

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a[i] += (i + 1);
        }
        sort(a.begin(),a.end());
        ll sum = 0;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            sum += a[i];
            if(sum > c) break;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}