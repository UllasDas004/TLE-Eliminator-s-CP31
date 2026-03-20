// Q = 1325C
// https://codeforces.com/problemset/problem/1325/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<vector<ll>> edges(n-1,vector<ll>(2));
        vector<ll> freq(n+1,0);
        for(int i=0;i<n-1;i++)
        {
            cin>>edges[i][0]>>edges[i][1];
            freq[edges[i][0]]++;
            freq[edges[i][1]]++;
        }
        ll count = 0;
        for(int i=1;i<=n;i++) if(freq[i] == 1) count++;
        ll k = 0,l = count;
        for(int i=0;i<n-1;i++)
        {
            if(freq[edges[i][0]] == 1 || freq[edges[i][1]] == 1) cout<<k++<<endl;
            else cout<<l++<<endl;
        }
    }
    return 0;
}