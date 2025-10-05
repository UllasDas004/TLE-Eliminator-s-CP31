// Q = 1820B
// https://codeforces.com/problemset/problem/1820/B

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n = s.length();
        ll i = 0,j = n-1;
        while(i < n && s[i] == '1') i++;
        while(j>=0 && s[j] == '1') j--;
        if(j < i)
        {
            cout<<n*n<<endl;
            continue;
        }
        ll maxLen = n - 1 - j + i;
        ll len = 0;
        for(int k=i;k<=j;k++)
        {
            if(s[k] == '1') len++;
            else len = 0;
            maxLen = max(maxLen,len);
        }
        if(maxLen%2 == 0) cout<<(maxLen/2)*(maxLen/2+1)<<endl;
        else cout<<((maxLen+1)/2)*((maxLen+1)/2)<<endl;
    }
    return 0;
}