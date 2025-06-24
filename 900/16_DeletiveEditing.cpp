// Q = 1666D
// https://codeforces.com/problemset/problem/1666/D

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s,t;
        cin>>s>>t;
        int ns = s.length();
        int nt = t.length();
        unordered_map<char,int> mp;
        for(int i=0;i<nt;i++) mp[t[i]]++;
        string ans = "";
        for(int i=ns-1;i>=0;i--)
        {
            if(mp.find(s[i]) != mp.end())
            {
                ans += s[i];
                mp[s[i]]--;
                if(mp[s[i]] == 0)
                mp.erase(s[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        if(ans == t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}