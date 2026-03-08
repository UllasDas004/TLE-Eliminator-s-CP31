// Q = 1332C
// https://codeforces.com/problemset/problem/1332/C

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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<vector<char>> a(n/k,vector<char>(k));
        for(int i=0;i<k;i++)
        {
            for(int j=i;j<n;j+=k)
            a[j/k][i] = s[j];
        }
        ll d = n/k,ans = 0;
        // for(int i=0;i<d;i++)
        // {
        //     for(int j=0;j<k;j++) cout<<a[i][j]<<" ";
        //     cout<<endl;
        // }
        for(int i=0,j=k-1;i<=j;i++,j--)
        {
            vector<ll> freq(26,0);
            for(int l=0;l<d;l++)
            {
                freq[a[l][i]-'a']++;
                freq[a[l][j]-'a']++;
            }
            ll mx = 0;
            for(int l=0;l<26;l++) mx = max(mx,freq[l]);
            if(i == j) ans += (d*2 - mx)/2;
            else ans += (d*2 - mx);
        }
        cout<<ans<<endl;
    }
    return 0;
}