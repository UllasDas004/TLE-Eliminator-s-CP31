// Q = 1167C
// https://codeforces.com/problemset/problem/1167/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
ll find(vector<ll>& par,ll n)
{
    // returns the leader of the group in which n belongs to
    if(par[n] == n) return par[n];
    return par[n] = find(par,par[n]);
}
void Union(vector<ll>& par,vector<ll>& rank,ll a,ll b)
{
    // adds the groups in which a and b belongs to
    a = find(par,a);
    b = find(par,b);
    if(a == b) return;
    if(rank[a] < rank[b]) swap(a,b);
    par[b] = a;
    rank[a] += rank[b];
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> par(n),rank(n,1);
        for(int i=0;i<n;i++) par[i] = i;
        for(int i=0;i<m;i++)
        {
            ll k;
            cin>>k;
            if(k > 0)
            {
                ll first;
                cin>>first;
                first--;
                for(int j=1;j<k;j++)
                {
                    ll x;
                    cin>>x;
                    x--;
                    Union(par,rank,first,x);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            ll parent = find(par,i);
            cout<<rank[parent]<<" ";
        }
        cout<<endl;
    }
    return 0;
}