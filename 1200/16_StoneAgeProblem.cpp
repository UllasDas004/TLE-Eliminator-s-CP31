// Q = 1679B
// https://codeforces.com/problemset/problem/1679/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tt = 1;
    while(tt--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n);
        set<int> st;
        ll sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
            st.insert(i);
        }
        ll two = 0;
        for(int i=0;i<q;i++)
        {
            int t;
            cin>>t;
            if(t == 1)
            {
                ll idx,x;
                cin>>idx>>x;
                idx--;
                if(st.find(idx) != st.end())
                {
                    sum -= a[idx];
                    a[idx] = x;
                    sum += x;
                }
                else
                {
                    sum -= two;
                    a[idx] = x;
                    sum += x;
                    st.insert(idx);
                }
                cout<<sum<<endl;
            }
            else
            {
                cin>>two;
                sum = n*two;
                cout<<sum<<endl;
                st.clear();
            }
        }
    }
    return 0;
}