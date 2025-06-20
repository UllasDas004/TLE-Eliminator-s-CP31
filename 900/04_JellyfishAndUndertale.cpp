// Q = 1875A
// https://codeforces.com/problemset/problem/1875/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long> arr(n);
        long long sum = b;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum += min(arr[i],a - 1);
        }
        cout<<sum<<endl;
    }
    return 0;
}