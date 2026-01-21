// Q = 1915F
// https://codeforces.com/problemset/problem/1915/F

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;
#define Oset tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
        sort(a.begin(),a.end());
        Oset st;
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            ans += i - st.order_of_key(a[i].second);
            st.insert(a[i].second);
        }
        cout<<ans<<endl;
    }
    return 0;
}