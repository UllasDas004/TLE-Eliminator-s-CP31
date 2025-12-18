// Q = 1360D
// https://codeforces.com/problemset/problem/1360/D

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> factors;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i == 0)
            {
                if(i<=k) factors.push_back(i);
                if(i != (n/i) && n/i <= k)
                factors.push_back(n/i);
            }
        }
        sort(factors.begin(),factors.end());
        cout<<n/factors[factors.size()-1]<<endl;
    }
    return 0;
}