// Q = 1659A
// https://codeforces.com/problemset/problem/1659/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,b;
        cin>>n>>r>>b;
        string ans = "";
        int m = r / (b + 1),k = r % (b + 1);
        for(int i=0;i<b;i++)
        {
            for(int j=0;j<m;j++)
            ans.push_back('R');
            if(k > 0)
            {
                ans.push_back('R');
                k--;
            }
            ans.push_back('B');
        }
        for(int i=0;i<m;i++) ans.push_back('R');
        cout<<ans<<endl;
    }
    return 0;
}