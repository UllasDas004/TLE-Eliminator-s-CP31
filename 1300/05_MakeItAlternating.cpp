// Q = 1879C
// https://codeforces.com/problemset/problem/1879/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 998244353
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n = s.length();
        ll ans = 1;
        int ansLen = 1,curr = 1;
        for(int i=1;i<n;i++)
        {
            if(s[i] != s[i-1])
            {
                ansLen++;
                ans = (ans*curr) % MOD;
                curr = 1;
            }
            else curr++;
        }
        ans = (ans*curr) % MOD;
        for(int i=1;i<=n-ansLen;i++) ans = (ans * i) % MOD;
        cout<<n-ansLen<<" "<<ans<<endl;
    }
    return 0;
}