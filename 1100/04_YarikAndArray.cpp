// Q = 1899C
// https://codeforces.com/problemset/problem/1899/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll ans = INT_MIN;
        int i = 0,j = 0;
        ll sum = 0;
        while(j < n)
        {
            if(sum < 0)
            {
                sum = 0;
                i = j;
            }
            if(i < j)
            {
                if((a[j]^a[j-1]) & 1) sum += a[j];
                else
                {
                    sum = a[j];
                    i = j;
                }
            }
            else sum = a[j];
            ans = max(ans,sum);
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}