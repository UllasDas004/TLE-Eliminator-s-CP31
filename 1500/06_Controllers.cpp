// Q = 1776L
// https://codeforces.com/problemset/problem/1776/L

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n,pc = 0,nc = 0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '+') pc++;
            else nc++;
        }
        if(pc > nc) swap(pc,nc);
        ll k = nc - pc;
        ll q;
        cin>>q;
        while(q--)
        {
            ll a,b;
            cin>>a>>b;
            if(a > b) swap(a,b);
            ll p = b*k;
            if(b == a)
            {
                if(k == 0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                continue;
            }
            if(p%(b-a) != 0) cout<<"NO"<<endl;
            else
            {
                if(p/(b-a) >= -(pc) && p/(b-a) <= nc) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}