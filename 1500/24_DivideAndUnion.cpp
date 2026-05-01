// Q = 1101C
// https://codeforces.com/problemset/problem/1101/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<vector<ll>> a(n,vector<ll>(3));
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1];
            a[i][2] = i;
        }
        sort(a.begin(),a.end());
        vector<int> ans(n);
        int group = 1;
        ll mx = a[0][0];
        for(int i=0;i<n;i++)
        {
            if(group == 1 && a[i][0] > mx) group++;
            mx = max(mx,a[i][1]);
            ans[a[i][2]] = group;
        }
        if(group == 1)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}