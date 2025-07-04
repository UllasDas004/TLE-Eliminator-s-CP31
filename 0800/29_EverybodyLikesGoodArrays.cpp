// Q = 1777A
// https://codeforces.com/problemset/problem/1777/A

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
        vector<int> a(n);
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i>0 && (a[i] + a[i-1])%2 == 0)
            flag = false;
        }
        int count = 0;
        if(flag == false)
        {
            for(int i=0,j=1;j<n;i++,j++)
            {
                if((a[i] + a[j]) % 2 == 0)
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}