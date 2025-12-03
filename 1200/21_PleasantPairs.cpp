// Q = 1541B
// https://codeforces.com/problemset/problem/1541/B

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
        vector<pair<ll,int>> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second = i+1;
        }
        sort(a.begin(),a.end());
        ll count = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ll product = a[i].first * a[j].first;
                if(product >= 2*n) break;
                ll indexSum = a[i].second + a[j].second;
                if(product == indexSum) count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}