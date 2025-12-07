// Q = 1931D
// https://codeforces.com/problemset/problem/1931/D

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        vector<int> a(n);
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]%y].push_back(a[i]);
        }
        ll ans = 0;
        for(auto it : mp)
        {
            vector<int> v = it.second;
            map<int,ll> mp1;
            for(int i=0;i<v.size();i++) mp1[v[i]%x]++;
            for(auto it : mp1)
            {
                if(it.first == 0 || 2*it.first == x)
                {
                    ll freq = it.second;
                    ans += (freq*(freq-1))/2;
                    it.second = 0;
                }
                else
                {
                    ll freq1 = it.second;
                    ll freq2 = mp1[x-it.first];
                    ans += (freq1*freq2);
                    mp1[x-it.first] = 0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}