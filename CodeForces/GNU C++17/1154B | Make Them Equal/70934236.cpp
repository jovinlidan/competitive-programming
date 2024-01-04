#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, t;
 set<int> cnt;
 cin >> n;
 for(int i = 0; i < n; i++)
 {
  cin >> t;
  cnt.insert(t);
 }
 set<int> ::iterator it = cnt.begin();
// for(auto &i : cnt)
// {
//  cout << i << endl;
// }
 if(cnt.size() <= 3)
 {
  advance(it, 0);
  int first = *it;
  advance(it, 1);
  int second = *it;
  advance(it, 1);
  int third = *it;
  //cout << first << " " << second << " " << third << endl;
  if(cnt.size() == 1) cout << 0 << endl;
  else if(cnt.size() == 2)
  {
   int gap = second - first;
   if(gap % 2 == 0) cout << gap/2 << endl;
   else cout << gap << endl;
 
  }
  else
  {
   int gap = third - first;
   if(gap % 2 == 1)
   {
    cout << -1 << endl;
    return 0;
   }
   else gap = gap/2;
   if(first+ gap == second)cout << gap << endl;
   else cout << -1 << endl;
 
  }
 
 }
 else cout << -1 << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}