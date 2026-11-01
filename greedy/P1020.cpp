/*
题目；洛谷 P1020 导弹拦截
算法: 贪心 + LIS(最长不上升子序列，最长上升子序列)
思路：
  第一问：一套系统最多拦截多少导弹 - 最长不上升子序列长度
  第二问：最少需要几套系统 - 最长上升子序列长度
*\
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve()
{
    vector<int>a;
    int x;
    while(cin>>x)
    {
        a.push_back(x);
    }
    vector<int>q1;
    for(int i =0;i<a.size();i++)
    {
        int val = a[i];
        auto it = upper_bound(q1.begin(),q1.end(),val,greater<int>());
        if(it==q1.end())
        {
            q1.push_back(val);
        }
        else
        {
         *it=val;
        }
        
}
    vector<int>q2;
    for(int i =0;i<a.size();i++)
    {
        int val = a[i];
        auto it = lower_bound(q2.begin(),q2.end(),val);
        if(it==q2.end())
            q2.push_back(val);
        else
            *it=val;
    }
cout<<q1.size()<<endl<<q2.size();
}
int main()
{
solve();
    return 0;
}
