#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli tc;
 cin >> tc;
 
 while(tc--)
 {
  lli n, total = 0, arr[100005] = {};
  bool valid = true;
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
   cin >> arr[i];
  }
  for(int i = 1; i <= n; i++)
  {
   total +=arr[i];
   if(total <= 0)
   {
    valid = false;
    break;
   }
  }
  total = 0;
  for(int i = n; i >= 1; i--)
  {
   total +=arr[i];
   if(total <= 0)
   {
    valid = false;
    break;
   }
  }
  if(valid) cout << "YES\n";
  else cout << "NO\n";
 
 }
 
 
 
 
 
 
 
 
 
 return 0;
}