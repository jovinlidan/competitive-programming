#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n, m;
 cin >> n >> m;
 deque<lli> vsted;
 lli temp;
 for(int i = 0; i < n; i++)
 {
  cin >> temp;
  vsted.push_back(temp);
 }
 sort(vsted.begin(), vsted.end());
    lli depan = vsted.front();
    vsted.pop_front();
    lli starts = 1;
    vector<lli> ans;
    while(m >= 0)
 {
  if(starts == depan)
  {
   //cout << starts << "-" << endl;
   if(!vsted.empty())
   {
    depan = vsted.front();
    vsted.pop_front();
   }
   else depan = -1;
   starts++;
 
  }else
  {
   if(m - starts >= 0)
   {
    ans.push_back(starts);
    m -= starts;
    starts++;
   }
   else
   {
    break;
   }
 
  }
 }
 cout << ans.size() << endl;
 for(int i = 0; i < ans.size(); i++)
 {
  if(i != 0)cout << " ";
  cout << ans[i];
 }
 cout << endl;
 
 
 
 
 
 
 return 0;
}