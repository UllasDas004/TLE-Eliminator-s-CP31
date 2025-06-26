// Q = 1593B
// https://codeforces.com/problemset/problem/1593/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int minOperations(string n,string possibleValues)
{
    int ops = 0;
    int checkerIndex = possibleValues.size() - 1;
    for(int i=n.length()-1;i>=0;i--)
    {
        if(n[i] == possibleValues[checkerIndex])
        {
            checkerIndex--;
            if(checkerIndex < 0)
            break;
        }
        else
        ops++;
    }
    if(checkerIndex >= 0)
    ops = INT_MAX;
    return ops;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        vector<string> possibleValues = {"00","25","50","75"};
        int ans = INT_MAX;
        for(auto pos : possibleValues)
        ans = min(ans,minOperations(n, pos));
        cout<<ans<<endl;
    }
}