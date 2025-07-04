// Q = 1840C
// https://codeforces.com/problemset/problem/1840/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<long long> fact(n+1,1);
        for(int i=2;i<=n;i++) fact[i] *= fact[i-1];
        int i = 0,count = 0;
        long long ans = 0;
        while(i <= n)
        {
            if(i<n && a[i] <= q)
            count++;
            else
            {
                if(count >= k)
                ans += (long long)(count - k + 1)*((long long)(count - k + 2)) / 2;
                count = 0;
            }
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}