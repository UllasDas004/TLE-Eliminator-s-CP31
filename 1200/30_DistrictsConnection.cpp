// Q = 1433D
// https://codeforces.com/problemset/problem/1433/D

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
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        if(mp.size() == 1) cout<<"NO"<<endl;
        else
        {
            ll mn = INT_MAX,minCount = INT_MAX;
            for(auto p : mp)
            {
                ll count = p.second;
                if(minCount > count)
                {
                    mn = p.first;
                    minCount = count;
                }
            }
            vector<vector<ll>> ans;
            ll minCountIndex = -1,otherIndex = -1;;
            for(int i=n-1;i>=0;i--)
            {
                if(a[i] == mn) minCountIndex = i;
                else otherIndex = i;
            }
            vector<ll> minCountIndices;
            for(int i=0;i<n;i++)
            {
                if(a[i] == mn && i != minCountIndex) minCountIndices.push_back(i);
                else if(a[i] != mn) ans.push_back({minCountIndex,i});
            }
            for(int i=0;i<minCountIndices.size();i++)
            ans.push_back({otherIndex,minCountIndices[i]});
            cout<<"YES"<<endl;
            for(int i=0;i<ans.size();i++) cout<<ans[i][0]+1<<" "<<ans[i][1]+1<<endl;
        }
    }
    return 0;
}