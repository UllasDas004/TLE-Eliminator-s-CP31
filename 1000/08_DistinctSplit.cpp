// Q = 1791D;
// https://codeforces.com/problemset/problem/1791/D

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
        string s;
        cin>>s;
        unordered_set<char> st;
        vector<int> p(n),ss(n);
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
            p[i] = st.size();
        }
        st.clear();
        for(int i=n-1;i>=0;i--)
        {
            st.insert(s[i]);
            ss[i] += st.size();
        }
        int mx = 0;
        for(int i=0;i<n-1;i++)
        mx = max(mx,p[i] + ss[i + 1]);
        cout<<mx<<endl;
    }
    return 0;
}