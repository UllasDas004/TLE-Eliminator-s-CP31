// Q = 1890A
// https://codeforces.com/problemset/problem/1890/A

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
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        if(n == 2 || mp.size() == 1) cout<<"YES"<<endl;
        else
        {
            if(mp.size() == 2)
            {
                int a = -1,b = -1;
                for(auto p : mp)
                {
                    if(a == -1) a = p.second;
                    else if(b == -1) b = p.second;
                }
                if(abs(a - b) <= 1) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}