// Q = 1486B
// https://codeforces.com/problemset/problem/1486/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
ll solve(vector<ll>& v)
{
    ll n = v.size();
    sort(v.begin(),v.end());
    return v[n/2]-v[(n-1)/2]+1;
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> x(n),y(n);
        for(int i=0;i<n;i++) cin>>x[i]>>y[i];
        cout<<solve(x)*solve(y)<<endl;
    }
    return 0;
}