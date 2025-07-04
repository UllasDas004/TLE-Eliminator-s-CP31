// Q = 1904A
// https://codeforces.com/problemset/problem/1904/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        vector<vector<int>> dir = {{-a,-b},{-a,b},{-b,a},{b,a},{a,b},{a,-b},{b,-a},{-b,-a}};
        set<pair<int,int>> sk,sq;
        for(int i=0;i<8;i++)
        sk.insert({xk + dir[i][0], yk + dir[i][1]});
        for(int i=0;i<8;i++)
        sq.insert({xq + dir[i][0], yq + dir[i][1]});
        vector<pair<int,int>> intersection;
        set_intersection(sk.begin(), sk.end(), sq.begin(), sq.end(), back_inserter(intersection));
        int count = intersection.size();
        cout<<count<<endl;
    }
    return 0;
}