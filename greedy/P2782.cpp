#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct city
{
int south;
int north;
};
bool cmp(city x,city y)
{
    return x.south<y.south;
}
void solve()
{
int n;
    cin>>n;
    vector<city>stu(n);
    for(int i =0;i<n;i++)
    {
    cin>>stu[i].south>>stu[i].north;
    }
    sort(stu.begin(),stu.end(),cmp);
    int count = 0;
    vector<int>q;
     for(int i =0;i<n;i++)
    {
        int val = stu[i].north;
         auto it = lower_bound(q.begin(),q.end(),val);
         if(it==q.end())
         {
             q.push_back(val);
         }
         else
         {
          *it=val;
         }
     }
cout<<q.size()<<endl;
}
int main()
{
    solve();
return 0;
}
