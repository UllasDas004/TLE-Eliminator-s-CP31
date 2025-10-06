// Q = 1708B
// https://codeforces.com/problemset/problem/1708/B

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
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> a(n,-1);
        bool flag = true;
        for(ll i=1;i<=n;i++)
        {
            ll k = l/i;
            ll j;
            if(l%i != 0) j = (k + 1) * i;
            else j = k * i;
            if(j <= r) a[i-1] = j;
            else
            {
                flag = false;
                break;
            }
        }
        if(flag == false) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}