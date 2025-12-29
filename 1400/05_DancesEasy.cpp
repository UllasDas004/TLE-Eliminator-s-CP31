// Q = 1883G1
// https://codeforces.com/problemset/problem/1883/G1

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
        vector<ll> a(n),b(n);
        a[0] = m;
        for(int i=1;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll count = 0;
        int i = 0,j = 0;
        while(j < n)
        {
            if(a[i] >= b[j]) count++;
            else i++;
            j++;
        }
        cout<<count<<endl;
    }
    return 0;
}