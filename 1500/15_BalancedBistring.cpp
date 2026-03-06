// Q = 1418C
// https://codeforces.com/problemset/problem/1418/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool flag = true;
        for(int i=k;i<n;i++)
        {
            if(s[i] == '?')
            {
                if(s[i-k] != '?')
                s[i] = s[i-k];
            }
            else
            {
                if(s[i-k] != '?' && s[i] != s[i-k])
                {
                    flag = false;
                    break;
                }
                int j = i-k;
                while(j >= 0 && s[j] == '?')
                {
                    s[j] = s[i];
                    j -= k;
                }
            }
        }
        if(flag == false)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll oc = 0,zc = 0,count = 0;
        for(int i=0;i<k;i++)
        {
            if(s[i] == '1') oc++;
            else if(s[i] == '0') zc++;
            else count++;
        }
        if(oc != zc)
        {
            if(count < abs(oc - zc))
            {
                cout<<"NO"<<endl;
                continue;
            }
            else
            {
                if(oc > zc)
                {
                    count -= (oc - zc);
                    zc = oc;
                }
                else
                {
                    count -= (zc - oc);
                    oc = zc;
                }
            }
        }
        for(int i=1,j=k;j<n;i++,j++)
        {
            if(s[j] == '1') oc++;
            else if(s[j] == '0') zc++;
            else count++;
            if(s[i-1] == '1') oc--;
            else if(s[i-1] == '0') zc--;
            else count--;
            if(oc != zc)
            {
                if(count < abs(oc - zc))
                {
                    flag = false;
                    break;
                }
                else
                {
                    if(oc > zc)
                    {
                        count -= (oc - zc);
                        zc = oc;
                    }
                    else
                    {
                        count -= (zc - oc);
                        oc = zc;
                    }
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}