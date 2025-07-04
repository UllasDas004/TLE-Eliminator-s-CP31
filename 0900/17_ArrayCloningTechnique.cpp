// Q = 1665B
// https://codeforces.com/problemset/problem/1665/B

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
        vector<int> a(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        if(n == 1 || mp.size() == 1) cout<<0<<endl;
        else
        {
            int mx = 0;
            for(auto p : mp) mx = max(mx,p.second);
            int count = 0;
            while(mx < n)
            {
                int need = n - mx;
                count += (1 + min(need,mx));
                mx += mx;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}