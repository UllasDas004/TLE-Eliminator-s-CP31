// Q = 1789A
// https://codeforces.com/problemset/problem/1789/A

#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
    int min = x,max = y;
    if(y<x) 
    {
        min  = y;
        max = x;
    }
    while(min>0)
    {
        int temp = max % min;
        max = min;
        min = temp;
    }
    return max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] <= 2) flag = true;
        }
        if(flag == false)
        {
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    int res = gcd(a[i],a[j]);
                    if(res <= 2)
                    {
                        flag = true;
                        break;
                    }
                }
                if(flag)
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}