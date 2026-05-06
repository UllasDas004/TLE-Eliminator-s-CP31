// Q = 960B
// https://codeforces.com/problemset/problem/960/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n,k1,k2,sum = 0;
        cin>>n>>k1>>k2;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++)
        {
            ll b;
            cin>>b;
            a[i] = abs(a[i] - b);
            sum += a[i];
        }
        ll k = k1 + k2;
        if(n == 1)
        {
            if(k >= sum) cout<<(k-sum)%2<<endl;
            else cout<<(sum-k)*(sum-k)<<endl;
            continue;
        }
        if(k >= sum)
        {
            k -= sum;
            cout<<(k%2)<<endl;
        }
        else
        {
            priority_queue<ll> maxHeap;
            for(int i=0;i<n;i++) maxHeap.push(a[i]);
            while(k)
            {
                ll mx = maxHeap.top();
                maxHeap.pop();
                mx--;
                maxHeap.push(mx);
                k--;
            }
            ll ans = 0;
            while(maxHeap.size())
            {
                ll mx = maxHeap.top();
                ans += mx*mx;
                maxHeap.pop();
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}