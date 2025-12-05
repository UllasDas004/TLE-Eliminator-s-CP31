// Q = 1514B
// https://codeforces.com/problemset/problem/1514/B

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ans = n;
        for(int i=2;i<=k;i++) ans = (ans*n)%MOD;
        cout<<ans<<endl;
    }
    return 0;
}