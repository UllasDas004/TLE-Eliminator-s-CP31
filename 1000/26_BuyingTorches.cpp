// Q = 1418A
// https://codeforces.com/problemset/problem/1418/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,k;
        cin>>x>>y>>k;
        long long ans = k + ((y * k - 1) + k) / (x - 1) + (((y * k - 1) + k) % (x - 1) != 0);
        cout<<ans<<endl;
    }
    return 0;
}