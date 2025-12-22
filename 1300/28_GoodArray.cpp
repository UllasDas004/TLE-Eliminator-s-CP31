// Q = 1077C
// https://codeforces.com/problemset/problem/1077/C

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
        ll n,sum = 0,mx1 = 0,mx2 = 0;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
            if(a[i] > mx1)
            {
                mx2 = mx1;
                mx1 = a[i];
            }
            else if(a[i] > mx2) mx2 = a[i];
        }
        vector<ll> ans;
        for(int i=0;i<n;i++)
        {
            if(a[i] == mx1)
            {
                ll s = sum - a[i];
                if(2*mx2 == s)
                ans.push_back(i);
            }
            else
            {
                ll s = sum - a[i];
                if(2*mx1 == s)
                ans.push_back(i);
            }
        }
        cout<<ans.size()<<endl;
        for(int x : ans) cout<<x+1<<" ";
        cout<<endl;
    }
    return 0;
}