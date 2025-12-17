// Q = 1372B
// https://codeforces.com/problemset/problem/1372/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll x,ll y)
{
    ll min = x,max = y;
    if(y<x) 
    {
        min  = y;
        max = x;
    }
    while(min>0)
    {
        ll temp = max % min;
        max = min;
        min = temp;
    }
    return max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> factors;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i == 0)
            {
                factors.push_back(i);
                if(i != n/i) factors.push_back(n/i);
            }
        }
        sort(factors.begin(),factors.end());
        ll lcm = INT_MAX,ansA,ansB;
        for(int i=0;i<factors.size();i++)
        {
            if(factors[i] == n) continue;
            ll a = factors[i];
            ll b = n - factors[i];
            ll g = gcd(a,b);
            ll k = (a*b) / g;
            if(lcm > k)
            {
                ansA = a;
                ansB = b;
            }
        }
        cout<<ansA<<" "<<ansB<<endl;
    }
    return 0;
}