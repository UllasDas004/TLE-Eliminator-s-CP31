// Q = 1692G
// https://codeforces.com/problemset/problem/1692/G

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
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll ans = 0,count = 0;
        for(int i=1;i<n;i++)
        {
            if(a[i-1] < 2*a[i])
            {
                if(count < k) count++;
                if(count == k) ans++;
            }
            else count = 0;
        }
        cout<<ans<<endl;
    }
    return 0;
}