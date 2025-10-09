// Q = 1511C
// https://codeforces.com/problemset/problem/1511/C

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9 + 7)
using namespace std;
int main()
{
    int t = 1;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<int> a(n),fp(51,-1);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(fp[a[i]] == -1)
            fp[a[i]] = i + 1;
        }
        for(int i=0;i<q;i++)
        {
            int t;
            cin>>t;
            cout<<fp[t]<<" ";
            for(int i=0;i<51;i++)
            {
                if(fp[i] < fp[t])
                fp[i]++;
            }
            fp[t] = 1;
        }
        cout<<endl;
    }
    return 0;
}