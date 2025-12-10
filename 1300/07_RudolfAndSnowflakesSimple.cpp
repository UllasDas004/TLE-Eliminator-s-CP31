// Q = 1846E1
// https://codeforces.com/problemset/problem/1846/E1

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 998244353
int main()
{
    int t;
    cin>>t;
    vector<bool> isPossible(1000001,false);
    for(ll i=2;i<=10000;i++)
    {
        ll curr = i*i*i;
        ll a = (curr - 1) / (i - 1);
        while(a <= 1000000)
        {
            isPossible[a] = true;
            curr *= i;
            a = (curr - 1) / (i - 1);
        }
    }
    while(t--)
    {
        ll n;
        cin>>n;
        if(isPossible[n]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}