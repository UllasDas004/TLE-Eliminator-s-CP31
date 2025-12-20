// Q = 1285B
// https://codeforces.com/problemset/problem/1285/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,sum = 0;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        ll sum2 = 0,maxSum = INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            sum2 += a[i];
            maxSum = max(maxSum,sum2);
            if(sum2 < 0) sum2 = 0;
        }
        sum2 = 0;
        for(int i=1;i<n;i++)
        {
            sum2 += a[i];
            maxSum = max(maxSum,sum2);
            if(sum2 < 0) sum2 = 0;
        }
        if(sum > maxSum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}