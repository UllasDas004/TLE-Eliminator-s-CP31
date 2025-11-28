// Q = 1734C
// https://codeforces.com/problemset/problem/1734/C

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
        string s;
        cin>>n>>s;
        s = '0' + s;
        ll ans = 0;
        for(int i=1;i<=n;i++)
        {
            if(s[i] == '0' || s[i] == '2')
            {
                for(int j=i;j<=n;j+=i)
                {
                    if(s[j] == '0')
                    {
                        ans += i;
                        s[j] = '2';
                    }
                    else if(s[j] == '2') continue;
                    else break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}