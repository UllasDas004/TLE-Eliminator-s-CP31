// Q = 1877A
// https://codeforces.com/problemset/problem/1877/A

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
        int sum = 0;
        for(int i=0;i<n-1;i++)
        {
            int x;
            cin>>x;
            sum += x;
        }
        cout<<(-1)*sum<<endl;
    }
    return 0;
}