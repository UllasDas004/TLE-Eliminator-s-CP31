// Q = 1883B
// https://codeforces.com/problemset/problem/1883/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++) mp[s[i]]++;
        int odd = 0;
        for(auto p : mp) if(p.second%2 == 1) odd++;
        if(odd > k + 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}