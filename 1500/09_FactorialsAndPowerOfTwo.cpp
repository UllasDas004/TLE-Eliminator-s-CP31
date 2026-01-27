// Q = 1646C
// https://codeforces.com/problemset/problem/1646/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
ll rec(vector<ll>& a,int i,ll s,ll n)
{
    if(i == a.size())
    {
        if(s > n) return INT_MAX;
        ll k = n-s;
        ll count = 0;
        while(k > 0)
        {
            if(k%2 == 1) count++;
            k /= 2;
        }
        return count;
    }
    ll ans = INT_MAX;
    ans = min(ans,rec(a,i+1,s,n));
    ans = min(ans,1+rec(a,i+1,s+a[i],n));
    return ans;
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a;
        ll p = 6;
        for(int i=4;p<=n;i++)
        {
            a.push_back(p);
            p *= i;
        }
        ll ans = rec(a,0,0,n);
        cout<<(ans == INT_MAX ? -1 : ans)<<endl;
    }
    return 0;
}