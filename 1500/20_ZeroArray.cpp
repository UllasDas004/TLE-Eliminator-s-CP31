// Q = 1323B
// https://codeforces.com/problemset/problem/1323/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n,mx = 0,sum = 0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            sum += a;
            mx = max(mx,a);
        }
        if(sum%2 || mx > sum/2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}