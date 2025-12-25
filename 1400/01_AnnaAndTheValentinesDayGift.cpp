// Q = 1931E
// https://codeforces.com/problemset/problem/1931/E

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> a(n,vector<ll>(2));
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            ll zeroes = 0,digits = 0;
            while(x>0 && x%10 == 0)
            {
                zeroes++;
                x /= 10;
                digits++;
            }
            while(x > 0)
            {
                digits++;
                x /= 10;
            }
            a[i][1] = digits;
            a[i][0] = zeroes;
        }
        sort(a.begin(),a.end());
        ll count = 0;
        int i = 0;
        while(i<n && a[i][0] == 0)
        {
            count += a[i][1];
            i++;
        }
        bool flag = true;
        for(int j=n-1;j>=i;j--)
        {
            if(flag)
            count += (a[j][1] - a[j][0]);
            else
            count += a[j][1];
            flag = !flag;
        }
        if(count <= m) cout<<"Anna"<<endl;
        else cout<<"Sasha"<<endl;
    }
    return 0;
}