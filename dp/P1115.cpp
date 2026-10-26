/*
  题目:洛谷p1115 最大子段和
  算法：动态规划 DP
思路：
dp[i]表示以第i个元素结尾的最大连续子段和
转移；dp[i]  =max(单独选a[i]，前面子段接上a[i])=(stu[i],dp[i-1]+stu[i])
ans 全程记录所有dp里的最大值，就是答案
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void solve()
{
int n;
    cin>>n;
    vector<int>stu(n+1);
    for(int i =1;i<=n;i++)
    {
        cin>>stu[i];
    }
    vector<int>dp(n+1);
    dp[1]=stu[1];
    int ans =INT_MIN;
    for(int i = 2;i<=n;i++)
    {
     dp[i]= max(stu[i],dp[i-1]+stu[i]);
      ans = max(dp[i],ans);
    }
    cout<<ans<<'\n';
}
int main()
{
    solve();
return 0;
}
