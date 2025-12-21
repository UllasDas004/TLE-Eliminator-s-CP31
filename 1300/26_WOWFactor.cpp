// Q = 1237B
// https://codeforces.com/problemset/problem/1237/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n = s.length();
        vector<vector<ll>> dp(n+1,vector<ll>(4,0));
        for(int i=0;i<n;i++) dp[i][0] = 1;
        for(int i=1;i<n;i++)
        {
            if(s[i] == 'v' && s[i-1] == 'v')
            {
                dp[i+1][1] += dp[i-1][0];
                dp[i+1][3] += dp[i-1][2];
            }
            else if(s[i] == 'o') dp[i+1][2] += dp[i][1];
            for(int j=1;j<=3;j++) dp[i+1][j] += dp[i][j];
        }
        cout<<dp[n][3]<<endl;
    }
    return 0;
}