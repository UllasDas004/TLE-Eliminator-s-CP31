// Q = 1539C
// https://codeforces.com/problemset/problem/1539/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>>n>>k>>x;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        vector<ll> diff;
        for(int i=0;i<n-1;i++)
        {
            ll d = a[i+1] - a[i];
            if(d > x)
            diff.push_back(d);
        }
        sort(diff.begin(),diff.end());
        int nd = diff.size();
        ll count = 0;
        for(int i=0;i<nd;i++)
        {
            ll used = diff[i] / x;
            k -= used;
            if(diff[i]%x == 0) k++;
            count++;
            if(k < 0) break;
        }
        if(k < 0) count--;
        ll groups = nd - count + 1;
        cout<<groups<<endl;
    }
    return 0;
}