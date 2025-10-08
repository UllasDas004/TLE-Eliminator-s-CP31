// Q = 1656E
// https://codeforces.com/problemset/problem/1656/E

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9 + 7)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        map<ll,bool> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]] = true;
        }
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            if(mp.find(a[i] - k) != mp.end())
            {
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}