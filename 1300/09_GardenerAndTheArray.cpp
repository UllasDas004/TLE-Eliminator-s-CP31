// Q = 1794C
// https://codeforces.com/problemset/problem/1794/C

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
        vector<vector<ll>> a(n);
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            ll k;
            cin>>k;
            vector<ll> v(k);
            for(int j=0;j<k;j++)
            {
                cin>>v[j];
                mp[v[j]]++;
            }
            a[i] = v;
        }
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            bool ok = true;
            for(int j=0;j<a[i].size();j++)
            {
                if(mp[a[i][j]] == 1)
                {
                    ok = false;
                    break;
                }
            }
            if(ok)
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