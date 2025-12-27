// Q = 1907D
// https://codeforces.com/problemset/problem/1907/D

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
        vector<vector<ll>> a(n,vector<ll>(2));
        for(int i=0;i<n;i++) cin>>a[i][0]>>a[i][1];
        ll lo = 0,hi = 1000000000;
        while(lo <= hi)
        {
            ll k = lo + (hi - lo) / 2;
            ll currMin = 0,currMax = 0;
            bool flag = true;
            for(int i=0;i<n;i++)
            {
                currMax += k;
                currMin -= k;
                ll start = max(currMin,a[i][0]);
                ll end = min(currMax,a[i][1]);
                if(start > end)
                {
                    flag = false;
                    break;
                }
                currMin = start;
                currMax = end;
            }
            if(!flag) lo = k + 1;
            else
            hi = k - 1;
        }
        cout<<lo<<endl;
    }
    return 0;
}