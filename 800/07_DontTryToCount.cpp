// Q = 1881A
// https://codeforces.com/problemset/problem/1881/A

#include<bits/stdc++.h>
using namespace std;
// bool check(string& s,string& x)
// {
//     if(x.size() < s.size()) return false;
//     for(int i=0;i<x.size()-s.size()+1;i++)
//     {
//         if(x.substr(i,s.size()) == s)
//         return true;
//     }
//     return false;
// }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        int count = 0;
        while(x.size() < s.size())
        {
            x += x;
            count++;
        }
        bool flag = false;
        for(int i=0;i<x.size()-s.size()+1;i++)
        {
            if(x.substr(i,s.size()) == s)
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            x += x;
            for(int i=0;i<x.size()-s.size()+1;i++)
            {
                if(x.substr(i,s.size()) == s)
                {
                    flag = true;
                    break;
                }
            }
            if(flag) count++;
        }
        if(flag) cout<<count<<endl;
        else cout<<-1<<endl;
    }
}