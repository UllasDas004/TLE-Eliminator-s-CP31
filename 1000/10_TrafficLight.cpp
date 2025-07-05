// Q = 1744C
// https://codeforces.com/problemset/problem/1744/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        if(c == 'g') cout<<0<<endl;
        else
        {
            vector<int> ci,gi;
            for(int i=0;i<n;i++)
            {
                if(s[i] == c) ci.push_back(i);
                else if(s[i] == 'g') gi.push_back(i);
            }
            int mx = 0;
            int j = 0;
            for(int i=0;i<ci.size();i++)
            {
                int len = 0;
                for(;j<gi.size();j++)
                {
                    if(gi[j] > ci[i])
                    {
                        len = gi[j] - ci[i];
                        break;
                    }
                }
                if(j == gi.size()) len = n - ci[i] + gi[0];
                mx = max(mx,len);
            }
            cout<<mx<<endl;
        }
    }
    return 0;
}