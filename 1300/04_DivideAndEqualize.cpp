// Q = 1915E
// https://codeforces.com/problemset/problem/1915/E

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
        vector<ll> a(n);
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            for(int j=2;j*j<=a[i];j++)
            {
                while(a[i]%j == 0)
                {
                    mp[j]++;
                    a[i] /= j;
                }
            }
            if(a[i] > 1) mp[a[i]]++;
        }
        bool flag = true;
        for(auto p : mp)
        {
            if(p.second%n != 0)
            {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}