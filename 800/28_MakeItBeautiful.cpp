// Q = 1783A
// https://codeforces.com/problemset/problem/1783/A

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
        vector<int> prefix(n);
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i == 0) prefix[i] = a[i];
            else
            {
                prefix[i] = prefix[i-1] + a[i];
                if(prefix[i-1] == a[i])
                flag = false;
            }
        }
        if(flag == false)
        {
            reverse(a.begin(),a.end());
            if(a[0] == a[1])
            {
                for(int i=2;i<n;i++)
                {
                    if(a[i] != a[1])
                    {
                        swap(a[i],a[1]);
                        flag = true;
                        break;
                    }
                }
            }
            else flag = true;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}