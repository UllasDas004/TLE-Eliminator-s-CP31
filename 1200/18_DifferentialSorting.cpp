// Q = 1635C
// https://codeforces.com/problemset/problem/1635/C

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
        if(a[n-1] < a[n-2])
        {
            cout<<-1<<endl;
            continue;
        }
        ll minIdx = n-1,maxIdx = n-1;
        if(a[n-2] <= a[minIdx]) minIdx = n-2;
        if(a[n-2] > a[maxIdx]) maxIdx = n-2;
        bool flag = true;
        vector<vector<ll>> ans;
        for(int i=n-3;i>=0;i--)
        {
            ll diff = a[minIdx] - a[maxIdx];
            a[i] = min(a[i],diff);
            if(a[i] == diff) ans.push_back({i+1,minIdx+1,maxIdx+1});
            if(a[i] <= a[minIdx]) minIdx = i;
            if(a[i] > a[maxIdx]) maxIdx = i;
            if(a[i] > a[i+1])
            {
                flag = false;
                break;
            }
        }
        if(flag == false) cout<<-1<<endl;
        else
        {
            cout<<ans.size()<<endl;
            for(int i=0;i<ans.size();i++)
            cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
        }
    }
    return 0;
}