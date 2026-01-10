// Q = 1167B
// https://codeforces.com/problemset/problem/1167/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        vector<ll> a = {4,8,15,16,23,42};
        map<ll,pair<ll,ll>> mp;
        for(int i=0;i<6;i++)
        {
            for(int j=i+1;j<6;j++)
            mp[a[i]*a[j]] = {a[i],a[j]};
        }
        vector<ll> ans(6);
        for(int i=1;i<=2;i++)
        {
            ll m1,m2;
            cout<<"? "<<i*i<<" "<<i*i+1<<endl;
            cin>>m1;
            cout<<"? "<<i*i+1<<" "<<i*i+2<<endl;
            cin>>m2;
            ll a1 = mp[m1].first,b1 = mp[m1].second;
            ll a2 = mp[m2].first,b2 = mp[m2].second;
            if(a1 == a2) swap(a1,b1);
            else if(a1 == b2)
            {
                swap(a1,b1);
                swap(a2,b2);
            }
            else if(b1 == b2) swap(a2,b2);
            ans[i*i-1] = a1;
            ans[i*i] = a2;
            ans[i*i+1] = b2;
        }
        cout<<"! ";
        for(int i=0;i<6;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}