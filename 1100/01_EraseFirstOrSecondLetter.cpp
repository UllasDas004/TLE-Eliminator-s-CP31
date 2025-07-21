// Q = 1917B
// https://codeforces.com/problemset/problem/1917/B

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
        int count = 1;
        unordered_set<char> st;
        st.insert(s[0]);
        for(int i=1;i<n;i++)
        {
            st.insert(s[i]);
            count += st.size();
        }
        cout<<count<<endl;
    }
    return 0;
}