// Q = 1842B
// https://codeforces.com/problemset/problem/1842/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<int> a(n),b(n),c(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++) cin>>c[i];
        int d = 0;
        for(int y : {0,1,2})
        {
            auto &v = (y == 0 ? a : (y == 1 ? b : c));
            for(int i=0;i<n;i++)
            {
                int next = d | v[i];
                if((next | x) != x) break;
                d = next;
            }
        }
        if(d == x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}