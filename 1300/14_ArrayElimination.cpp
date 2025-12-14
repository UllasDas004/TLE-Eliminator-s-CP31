// Q = 1601A
// https://codeforces.com/problemset/problem/1601/A

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
        vector<ll> bitCount(31,0);
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            for(int i=0;i<31;i++)
            {
                if(x%2 == 1) bitCount[i]++;
                x /= 2;
            }
        }
        ll k = bitCount[0];
        for(int i=1;i<31;i++) if(bitCount[i] != 0) k = gcd(k,bitCount[i]);
        if(k == 0)
        {
            for(int i=0;i<n;i++) cout<<i+1<<" ";
            cout<<endl;
            continue;
        }
        vector<ll> factor;
        for(int i=1;i*i<=k;i++)
        {
            if(k%i == 0)
            {
                factor.push_back(i);
                if(i != k/i) factor.push_back(k/i);
            }
        }
        sort(factor.begin(),factor.end());
        for(int i=0;i<factor.size();i++) cout<<factor[i]<<" ";
        cout<<endl;
    }
    return 0;
}