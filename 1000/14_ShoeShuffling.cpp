// Q = 1691B
// https://codeforces.com/problemset/problem/1691/B

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
        for(int i=0;i<n;i++) cin>>a[i];
        int i = 0;
        vector<int> ans(n);
        bool flag = true;
        int k = 0;
        while(i < n)
        {
            int j = i + 1;
            while(j < n && a[j] == a[i])
            j++;
            if(j - i == 1)
            {
                flag = false;
                break;
            }
            else
            {
                ans[k++] = j;
                for(int l=i+1;l<j;l++)
                ans[k++] = l;
            }
            i = j;
        }
        if(flag)
        {
            for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}