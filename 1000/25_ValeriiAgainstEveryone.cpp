// Q = 1438B
// https://codeforces.com/problemset/problem/1438/B

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
        unordered_set<int> st;
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(st.find(x) != st.end())
            flag = true;
            st.insert(x);
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}