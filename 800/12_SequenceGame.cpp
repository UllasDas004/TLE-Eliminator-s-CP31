// Q = 1862B
// https://codeforces.com/problemset/problem/1862/B

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
        if(n == 1)
        {
            cout<<n<<endl;
            cout<<a[0]<<endl;
        }
        else
        {
            vector<int> ans;
            ans.push_back(a[0]);
            for(int i=1;i<n;i++)
            {
                ans.push_back(a[i]);
                if(a[i-1] > a[i])
                ans.push_back(a[i]);
            }
            cout<<ans.size()<<endl;
            for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}