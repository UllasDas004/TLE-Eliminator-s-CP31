// Q = 1673B
// https://codeforces.com/problemset/problem/1673/B

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9 + 7)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        unordered_set<char> st;
        bool flag = true;
        int k;
        for(k=0;k<n;k++)
        {
            if(st.find(s[k]) != st.end())
            break;
            st.insert(s[k]);
        }
        for(int i=k;i<n;i++)
        {
            if(s[i] != s[i-k])
            {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}