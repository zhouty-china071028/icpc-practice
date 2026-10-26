/*
题目：洛谷 P1208  混合牛奶问题
算法：贪心
思路：优先买单次价格更低的牛奶，把结构体按价格从小到大排序，依次购买直到买够n
*/
#include<iostream>
#include<vector>
#include<algorithm>
struct milk
{
int price;
int num;
};
int cmp(milk x,milk y)
{
return x.price< y.price;
}
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<milk>stu(m);
    for(int i =0;i<m;i++)
    {
      cin>>stu[i].price>>stu[i].num;
    }
    sort(stu.begin(),stu.end(),cmp);
        int ans = 0;
    int now = n;
    for(int i =0;i<n;i++)
    {
    if(stu[i].num<=now)
    {
        ans+=stu[i].price*stu[i].num;
        now-=stu[i].num;
    }
        else
        {
         ans+=now*stu[i].price;
            now =0;
            break;
        }
    }
        cout<<ans<<endl;
}
int main()
{
    solve();
return 0;
}
