// Q = 1536B
// https://codeforces.com/problemset/problem/1536/B

#include<bits/stdc++.h>
#define ll long long
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
        map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            string m = "";
            m.push_back(s[i]);
            mp[m]++;
        }
        for(int i=0;i<n-1;i++)
        {
            string n = "";
            n.push_back(s[i]);
            n.push_back(s[i+1]);
            mp[n]++;
        }
        for(int i=0;i<n-2;i++)
        {
            string o = "";
            o.push_back(s[i]);
            o.push_back(s[i+1]);
            o.push_back(s[i+2]);
            mp[o]++;
        }
        bool flag = false;
        string ans = "";
        for(int i=0;i<=25;i++)
        {
            string m = "";
            m.push_back('a'+i);
            if(mp.find(m) == mp.end())
            {
                flag = true;
                ans = m;
                break;
            }
        }
        if(flag == false)
        {
            for(int i=0;i<=25;i++)
            {
                string m = "";
                m.push_back('a'+i);
                for(int j=0;j<=25;j++)
                {
                    string n = m;
                    n.push_back('a'+j);
                    if(mp.find(n) == mp.end())
                    {
                        flag = true;
                        ans = n;
                        break;
                    }
                }
                if(flag) break;
            }
        }
        if(flag == false)
        {
            for(int i=0;i<=25;i++)
            {
                string m = "";
                m.push_back('a'+i);
                for(int j=0;j<=25;j++)
                {
                    string n = m;
                    n.push_back('a'+j);
                    for(int k=0;k<=25;k++)
                    {
                        string o = n;
                        o.push_back('a'+k);
                        if(mp.find(o) == mp.end())
                        {
                            flag = true;
                            ans = o;
                            break;
                        }
                    }
                    if(flag) break;
                }
                if(flag) break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}