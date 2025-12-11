// Q = 1794C
// https://codeforces.com/problemset/problem/1794/C

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
        for(int i=0;i<n;i++) cin>>a[i];
        vector<ll> ans(n);
        ll j = n-1,count = 1;
        for(int i=n-1;i>=0;i--)
        {
            while(j >= 0)
            {
                if(a[j] < count) break;
                j--;
                count++;
            }
            ans[i] = count;
            count--;
        }
        for(int i=0;i<n;i++) cout<<ans[i]-1<<" ";
        cout<<endl;
    }
    return 0;
}