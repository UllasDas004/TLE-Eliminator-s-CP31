// Q = 1470A
// https://codeforces.com/problemset/problem/1470/A

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a.begin(),a.end());
        ll i = 0,j = n-1,ans = 0;
        for(ll k=1;k<=m;k++)
        {
            while(i<j && k==a[i])
            {
                ans += b[k-1];
                i++;
            }
            if(i <= j)
            {
                ans += b[k-1];
                j--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}