// Q = 1475C
// https://codeforces.com/problemset/problem/1475/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t;
    cin>>t;
    vector<ll> fact(200001,1);
    for(int i=2;i<200001;i++)
    fact[i] = (i*fact[i-1]) % MOD;
    while(t--)
    {
        ll a,b,k;
        cin>>a>>b>>k;
        vector<ll> bo(k),gi(k);
        vector<ll> boys(a+1,0),girls(b+1,0);
        for(int i=0;i<k;i++)
        {
            cin>>bo[i];
            boys[bo[i]]++;
        }
        for(int i=0;i<k;i++)
        {
            cin>>gi[i];
            girls[gi[i]]++;
        }
        ll ans = 0;
        for(int i=0;i<k;i++)
        {
            ll boy = bo[i],girl = gi[i];
            ll nb = boys[boy],ng = girls[girl];
            ans += k - (nb + ng - 1);
        }
        cout<<ans/2<<endl;
    }
    return 0;
}