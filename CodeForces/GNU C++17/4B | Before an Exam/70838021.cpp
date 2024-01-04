#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int d, sumTime, mn, mx, mnTotal = 0, ans[35] = {}, mxTotal = 0;
 cin >> d >> sumTime;
 vector<pair<int, int>> timeline(35);
 for(int i = 1 ; i <= d; i++)
 {
  cin >> mn >> mx;
  timeline[i] = {mn, mx};
  mnTotal += mn;
  mxTotal += mx;
 }
 if(!(sumTime >= mnTotal && sumTime <= mxTotal) ) cout << "NO\n";
 else
 {
  cout << "YES\n";
  for(int i = 1; i <= d; i++)
  {
   ans[i] += timeline[i].first;
   sumTime -= timeline[i].first;
  }
  for(int i = 1; i <= d && sumTime != 0; i++)
  {
   int selisih = timeline[i].second - ans[i];
   selisih = min(selisih, sumTime);
   ans[i] += selisih;
   sumTime -= selisih;
  }
  for(int i = 1; i <= d; i++)
  {
   if( i != 1) cout << " ";
   cout << ans[i];
  }
  cout << endl;
 
 }
// for(int i = 1; i <= d; i++)
// {
//  cout << timeline[i].first << " " << timeline[i].second << endl;
// }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}