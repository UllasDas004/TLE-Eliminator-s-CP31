// Q = 1876A
// https://codeforces.com/problemset/problem/1876/A

#include<bits/stdc++.h>
#define pip pair<int,int>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        priority_queue<pip,vector<pip>,greater<pip>> pq; //MINHEAP
        for(int i=0;i<n;i++)
        pq.push({b[i],a[i]});
        int count = 1;
        long long cost = p;
        queue<pip> q;
        q.push(pq.top());
        pq.pop();
        while(count < n)
        {
            pip curr = q.front();
            // cout<<curr.first<<" "<<curr.second<<endl;
            q.pop();
            if(curr.first > p) break;
            for(int i=1;count<n && i<= curr.second;i++)
            {
                count++;
                cost += (long long)curr.first;
                pip pp = pq.top();
                pq.pop();
                q.push(pp);
            } 
        }
        cost += (long long)(((long long)n - (long long)count) * (long long)p);
        cout<<cost<<endl;
    }
    return 0;
}