// Q = 1516B
// https://codeforces.com/problemset/problem/1516/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i] ^= a[i-1];
        }
        if(a[n] == 0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        bool flag = false;
        for(int i=1;i<n-1;i++)
        {
            for(int j=n-1;j>i;j--)
            {
                if((a[i] == (a[n]^a[j])) && (a[i] == (a[j]^a[i])))
                {
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}