// Q = 1498B
// https://codeforces.com/problemset/problem/1498/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,w;
        cin>>n>>w;
        ll bits = 0,ww = w;
        while(ww > 0)
        {
            bits++;
            ww /= 2;
        }
        vector<ll> bitCount(bits,0);
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            bitCount[log2(x)]++;
        }
        ll ans = 0,count = 0;
        while(count < n)
        {
            ll temp = w;
            for(int i=bits-1;i>=0;i--)
            {
                while(bitCount[i] > 0 && (1LL << i) <= temp)
                {
                    temp -= (1LL << i);
                    bitCount[i]--;
                    count++;
                }
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}