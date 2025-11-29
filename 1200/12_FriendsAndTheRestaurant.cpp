// Q = 1729D
// https://codeforces.com/problemset/problem/1729/D

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
        cin>>n;
        vector<ll> x(n),pos,neg;
        ll zero = 0;
        for(int i=0;i<n;i++) cin>>x[i];
        for(int i=0;i<n;i++)
        {
            ll y;
            cin>>y;
            x[i] = y - x[i];
            if(x[i] > 0) pos.push_back(x[i]);
            else if(x[i] < 0) neg.push_back(x[i]);
            else zero++;
        }
        sort(pos.begin(),pos.end());
        sort(neg.rbegin(),neg.rend());
        ll np = pos.size(),nn = neg.size();
        ll ans = 0,posCount = pos.size() + zero;
        int i = 0,j = 0;
        while(i < nn && j < np)
        {
            int nx = abs(neg[i]),px = pos[j];
            if(nx > px) j++;
            else
            {
                i++;
                j++;
                ans++;
                posCount--;
            }
        }
        posCount /= 2;
        cout<<ans + posCount<<endl;
    }
    return 0;
}