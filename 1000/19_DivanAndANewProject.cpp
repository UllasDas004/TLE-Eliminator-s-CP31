// Q = 1614B
// https://codeforces.com/problemset/problem/1614/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(2));
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0];
            a[i][1] = i;
        }
        sort(a.begin(),a.end());
        vector<int> ans(n + 1);
        ans[0] = 0;
        int k = 1;
        long long cost = 0;
        for(int i=n-1;i>=0;i-=2)
        {
            ans[a[i][1] + 1] = (-k);
            cost += (long long)2 * (long long)k * (long long)a[i][0];
            if(i > 0)
            {
                ans[a[i-1][1] + 1] = k;
                cost += (long long)2 * (long long)k * (long long)a[i-1][0];
            }
            k++;
        }
        cout<<cost<<endl;
        for(int i=0;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}