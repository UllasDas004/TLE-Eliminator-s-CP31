// Q = 1791E
// https://codeforces.com/problemset/problem/1791/E

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll nc = 0,sum = 0;
        ll mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] < 0) nc++;
            sum += abs(a[i]);
            mn = min(mn,abs(a[i]));
        }
        if(nc%2 == 0) cout<<sum<<endl;
        else cout<<sum - 2*mn<<endl;
    }
    return 0;
}