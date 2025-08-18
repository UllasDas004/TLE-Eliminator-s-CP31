// Q = 1914C
// https://codeforces.com/problemset

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        ll ans = 0,sum = 0;
        int bmax = 0;
        for(int i=0;i<n;i++)
        {
            bmax = max(bmax,b[i]);
            k--;
            sum += a[i];
            ans = max(ans,sum + (k*bmax));
            if(k == 0) break;
        }
        cout<<ans<<endl;
    }
    return 0;
}