// Q = 1487B
// https://codeforces.com/problemset/problem/1487/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n%2 == 0)
        {
            ll r = k % n;
            if(r == 0) cout<<n<<endl;
            else cout<<r<<endl;
        }
        else
        {
            ll val = n/2;
            ll ans = (k + (k-1)/val) % n;
            cout<<((ans == 0) ? n : ans)<<endl;
        }
    }
    return 0;
}