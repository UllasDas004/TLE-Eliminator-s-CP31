// Q = 1513B
// https://codeforces.com/problemset/problem/1513/B

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
        ll n;
        cin>>n;
        vector<ll> bits(31,0),a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ll x = a[i];
            for(int b=0;b<31;b++)
            {
                if(x%2 == 1) bits[b]++;
                x /= 2;
            }
        }
        ll  num = 0;
        for(int i=0;i<31;i++)
        {
            if(bits[i] == n)
            num += (1LL << i);
        }
        ll count = 0;
        for(int i=0;i<n;i++) if(a[i] == num) count++;
        if(count <= 1) cout<<0<<endl;
        else
        {
            ll ans = (count-1)*count;
            ans %= MOD;
            ans = (ans * fact[n-2]) % MOD;
            cout<<ans<<endl;
        }
    }
    return 0;
}