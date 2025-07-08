// Q = 1374C
// https://codeforces.com/problemset/problem/1374/C

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
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(') st.push(s[i]);
            else
            {
                if(st.size() && st.top())
                st.pop();
            }
        }
        cout<<st.size()<<endl;
    }
    return 0;
}