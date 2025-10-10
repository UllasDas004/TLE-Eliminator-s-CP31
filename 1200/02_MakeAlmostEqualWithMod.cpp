// Q = 1909B
// https://codeforces.com/problemset/problem/1909/B

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
        int i;
        for(i=1;i<=60;i++)
        {
            ll k = 1LL << i;
            unordered_set<ll> st;
            for(int i=0;i<n;i++)
            st.insert(a[i]%k);
            if(st.size() == 2) break;
        }
        cout<<(1LL<<i)<<endl;
    }
    return 0;
}