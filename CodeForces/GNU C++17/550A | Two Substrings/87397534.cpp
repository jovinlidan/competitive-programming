#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 
  string s;
  cin >> s;
  vector<int> x, y;
 
  for(int i = 0; i < s.length(); i++)
  {
   if(s[i] == 'A' && s[i+1] == 'B')
   {
    x.push_back(i);
   }
   else if(s[i] == 'B' && s[i+1] == 'A')
   {
    y.push_back(i);
   }
  }
 
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
 
  if(x.size() == 0 || y.size() == 0)
  {
   cout << "NO\n";
   return 0;
  }
 
  if(abs(x[0] - y[y.size()-1]) == 1 && abs(x[x.size()-1] - y[0] ) == 1)cout << "NO\n";
  else cout << "YES\n";
 
 
}
 