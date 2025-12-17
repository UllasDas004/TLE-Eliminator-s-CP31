// Q = 1459B
// https://codeforces.com/problemset/problem/1459/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll k = n/2;
        if(n%2 == 0) cout<<(k+1)*(k+1)<<endl;
        else cout<<2*(k+1)*(k+2)<<endl;
    }
    return 0;
}