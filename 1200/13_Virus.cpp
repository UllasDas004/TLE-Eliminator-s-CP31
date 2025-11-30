// Q = 1704C
// https://codeforces.com/problemset/problem/1704/C

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
        vector<ll> a(m);
        for(int i=0;i<m;i++) cin>>a[i];
        sort(a.begin(),a.end());
        vector<ll> gaps(m);
        for(int i=0;i<m-1;i++) gaps[i] = a[i+1] - a[i] - 1;
        gaps[m-1] = a[0] - 1 + n - a[m-1];
        sort(gaps.rbegin(),gaps.rend());
        ll days = 0,ans = n;
        for(int i=0;i<m;i++)
        {
            ll length = max((ll)0,gaps[i] - 2*days);
            if(length == 1)
            {
                days++;
                gaps[i] = length;
            }
            else if(length >= 2)
            {
                days += 2;
                gaps[i] = length - 1;
            }
            else gaps[i] = 0;
            ans -= gaps[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}