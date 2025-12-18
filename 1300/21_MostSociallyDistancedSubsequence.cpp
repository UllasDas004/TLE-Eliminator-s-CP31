// Q = 1364B
// https://codeforces.com/problemset/problem/1364/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<ll> ans;
        ans.push_back(a[0]);
        for(int i=1;i<n-1;i++)
        {
            if((a[i]>a[i-1] && a[i]>a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1]))
            ans.push_back(a[i]);
        }
        ans.push_back(a[n-1]);
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}