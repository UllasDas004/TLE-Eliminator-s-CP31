// Q = 1913B
// https://codeforces.com/problemset/problem/1913/B

#include<bits/stdc++.h>
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
        int oc = 0,zc = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1') oc++;
            else zc++;
        }
        if(oc == zc) cout<<0<<endl;
        else
        {
            string t = "";
            for(int i=0;i<n;i++)
            {
                if(s[i] == '1' && zc > 0)
                {
                    t += '0';
                    zc--;
                }
                else if(s[i] == '0' && oc > 0)
                {
                    t += '1';
                    oc--;
                }
                else if(oc == 0)
                t += '0';
                else if(zc == 0)
                t += '1';
            }
            // cout<<t<<endl;
            int i = 0,j = 0,count = 0;
            while(i<n && j<n)
            {
                if(s[i] != t[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    j++;
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
}