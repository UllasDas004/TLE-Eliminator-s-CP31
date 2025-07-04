// Q = 1471A
// https://codeforces.com/problemset/problem/1471/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        vector<long long> a(n);
        long long mnSum = 0,mxSum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            // cout<<((a[i] / x) + (a[i] % x != 0))<<endl;
            mxSum += ((a[i] / x) + (a[i] % x != 0));
            mnSum += a[i];
        }
        mnSum = (mnSum / x) + (mnSum % x != 0);
        cout<<mnSum<<" "<<mxSum<<endl;
    }
    return 0;
}