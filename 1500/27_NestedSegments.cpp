// Q = 976C
// https://codeforces.com/problemset/problem/976/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
bool cmp(vector<ll>& a,vector<ll>& b)
{
    if(a[0] != b[0]) return a[0] < b[0];
    else return a[1] > b[1];
}
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<vector<ll>> a(n,vector<ll>(3));
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1];
            a[i][2] = i+1;
        }
        sort(a.begin(),a.end(),cmp);
        ll maxIdx = -1,mx = 0;
        bool flag = false;
        ll ans = -1;
        for(int i=0;i<n;i++)
        {
            if(a[i][1] <= mx)
            {
                ans = i;
                flag = true;
                break;
            }
            else
            {
                mx = a[i][1];
                maxIdx = i;
            }
        }
        if(flag) cout<<a[ans][2]<<" "<<a[maxIdx][2]<<endl;
        else cout<<"-1 -1"<<endl;
    }
    return 0;
}