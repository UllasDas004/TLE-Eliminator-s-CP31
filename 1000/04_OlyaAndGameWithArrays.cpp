// Q = 1859B
// https://codeforces.com/problemset/problem/1859/B

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
        vector<vector<int>> minimums(n,vector<int>(2,INT_MAX));
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            for(int j=1;j<=m;j++)
            {
                int x;
                cin>>x;
                if(minimums[i][0] == INT_MAX) minimums[i][0] = x;
                else
                {
                    if(x <= minimums[i][0])
                    {
                        minimums[i][1] = minimums[i][0];
                        minimums[i][0] = x;
                    }
                    else if(x > minimums[i][0] && x <= minimums[i][1])
                    minimums[i][1] = x;
                }
            }
        }
        int smn = INT_MAX,mn = INT_MAX;
        int sminIdx = -1;
        for(int i=0;i<n;i++)
        {
            if(minimums[i][1] < smn)
            {
                smn = minimums[i][1];
                sminIdx = i;
            }
            mn = min(mn,minimums[i][0]);
            // cout<<minimums[i][1]<<" ";
        }
        long long sum = mn;
        for(int i=0;i<n;i++)
        {
            if(i == sminIdx) continue;
            sum += minimums[i][1];
        }
        cout<<sum<<endl;
    }
    return 0;
}