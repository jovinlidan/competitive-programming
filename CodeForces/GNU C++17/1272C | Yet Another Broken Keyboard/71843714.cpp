#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, m, cnt = 0;
 cin >> n >> m;
 string s;
 unordered_map<char, int> vst;
 char temp;
 cin >> s;
 for(int i = 0; i < m; i++)
 {
  cin >> temp;
  vst[temp] =true;
 }
 long long int ans = 0;
 for(int i = 0; i < s.length(); i++)
 {
  if(vst[s[i]])
  {
   cnt++;
  }
  else
  {
   //cout<< cnt << "-" << i << endl;
   ans += ((cnt+1) * (cnt/2.0));
   cnt = 0;
  }
 }
 if(cnt != 0)
 {
   ans += ((cnt+1) * (cnt/2.0));
 
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 return 0;
}