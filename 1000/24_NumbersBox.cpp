// Q = 1447B
// https://codeforces.com/problemset/problem/1447/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m));
        bool zero = false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j] == 0)
                zero = true;
            }
        }
        long long sum = 0;
        int maxNeg = INT_MIN;
        int minPos = INT_MAX;
        int negCount = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j] < 0)
                {
                    negCount++;
                    sum -= (long long)a[i][j];
                    maxNeg = max(maxNeg,a[i][j]);
                }
                else
                {
                    sum += (long long)a[i][j];
                    minPos = min(minPos,a[i][j]);
                }
            }
        }
        if(zero || negCount%2 == 0) cout<<sum<<endl;
        else
        {
            maxNeg = -(maxNeg);
            int sub = min(maxNeg,minPos);
            cout<<sum - 2*sub<<endl;
        }
    }
    return 0;
}