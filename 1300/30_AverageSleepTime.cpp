// Q = 808B
// https://codeforces.com/problemset/problem/808/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        ll sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i < k) sum += a[i];
        }
        double ans = sum;
        for(int i=1,j=k;j<n;i++,j++)
        {
            sum += (a[j] - a[i-1]);
            ans += sum;
        }
        long double d = n-k+1;
        cout<<fixed<<setprecision(10)<<ans/d<<endl;
    }
    return 0;
}