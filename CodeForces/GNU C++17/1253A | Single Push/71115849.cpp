#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin>> tc;
 while(tc--)
 {
  int n; cin >> n;
  int a[100005] = {}, b, ans = 0;
  bool valid = 1;
 
  for(int i = 0; i < n; i++)
  {
   cin >> a[i];
  }
  for(int i =0; i < n; i++)
  {
   cin >> b;
   if(a[i] - b > 0) valid = false;
   if(abs(a[i] - b) != 0 && ans == 0)
   {
    ans = abs(a[i] - b);
   }
   if(ans != 0 && abs(a[i] - b) != ans)
   {
    ans = -1;
   }
   if(ans == -1 && abs(a[i] - b) != 0) valid = false;
  }
  if(valid) cout << "YES\n";
  else cout << "NO\n";
 
 
 
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}