// Q = 1362C
// https://codeforces.com/problemset/problem/1362/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans = n*2LL;
        while(n > 0)
        {
            if(n%2 == 1) ans--;
            n /= 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}