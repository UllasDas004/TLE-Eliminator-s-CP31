// Q = 1790D
// https://codeforces.com/problemset/problem/1790/D

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
        map<ll,ll> freq;
        for(int i=0;i<n;i++) freq[a[i]]++;
        ll count = 0;
        for(auto q : freq)
        {
            ll p = q.first;
            count += max((ll)0,freq[p] - freq[p-1]);
        }
        cout<<count<<endl;
    }
    return 0;
}