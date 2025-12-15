// Q = 1561C
// https://codeforces.com/problemset/problem/1561/C

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
        vector<pair<ll,ll>> difficulty(n);
        for(int i=0;i<n;i++)
        {
            ll k,mx = INT_MIN;
            cin>>k;
            vector<ll> v(k);
            for(int j=0;j<k;j++)
            {
                cin>>v[j];
                mx = max(mx,v[j]-j+1);
            }
            difficulty[i] = {mx,k};
        }
        sort(difficulty.begin(),difficulty.end());
        ll ans = difficulty[0].first;
        ll increase = difficulty[0].second;
        for(int i=1;i<n;i++)
        {
            ans = max(ans,difficulty[i].first-increase);
            increase += difficulty[i].second;
        }
        cout<<ans<<endl;
    }
    return 0;
}