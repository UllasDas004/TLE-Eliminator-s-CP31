// Q = 1466D
// https://codeforces.com/problemset/problem/1466/D

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n),freq(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            ll u,v;
            cin>>u>>v;
            u--;
            v--;
            freq[u]++;
            freq[v]++;
        }
        vector<ll> v;
        ll sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += a[i];
            for(int j=0;j<freq[i]-1;j++)
            v.push_back(a[i]);
        }
        sort(v.rbegin(),v.rend());
        cout<<sum<<" ";
        for(int i=0;i<v.size();i++)
        {
            sum += v[i];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}