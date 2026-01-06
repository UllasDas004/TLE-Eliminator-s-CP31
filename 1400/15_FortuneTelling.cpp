// Q = 1634B
// https://codeforces.com/problemset/problem/1634/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> a(n);
        ll odds = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2 == 1) odds++;
        }
        int aliceStart = 0;
        if(x%2 == 1) aliceStart = 1;
        int bobStart = 1 - aliceStart;
        int aliceEnd = aliceStart,bobEnd = bobStart;
        if(odds%2 == 1)
        {
            aliceEnd = 1 - aliceStart;
            bobEnd = 1 - bobStart;
        }
        if(y%2 == aliceEnd) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}