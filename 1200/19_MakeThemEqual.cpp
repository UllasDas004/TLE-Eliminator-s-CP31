// Q = 1594C
// https://codeforces.com/problemset/problem/1594/C

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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        set<int> st;
        for(int i=0;i<n;i++) if(s[i] != c) st.insert(i+1);
        if(st.size() == 0) cout<<0<<endl;
        else if(s[n-1] == c) cout<<1<<endl<<n<<endl;
        else
        {
            bool flag = false;
            int x = 0;
            for(int i=n;i>=1;i--)
            {
                if(st.find(i) == st.end())
                {
                    x = i;
                    flag = true;
                    break;
                }
            }
            for(auto i : st)
            {
                if(x > 0 && i%x == 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag) cout<<1<<endl<<x<<endl;
            else
            {
                cout<<2<<endl;
                int i = 2;
                while(n%i == 0) i++;
                cout<<i<<" "<<n<<endl;
            }
        }
    }
    return 0;
}