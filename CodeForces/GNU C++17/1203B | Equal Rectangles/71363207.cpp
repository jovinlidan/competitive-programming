#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, arr[405] = {};
  cin >> n;
  for(int i = 0; i < 4*n; i++)
  {
   cin >> arr[i];
  }
  sort(arr, arr+(4*n));
  bool valid = true;
  int total = -1;
  for(int i = 0; i < 4*n; i+=2)
  {
            if(arr[i] != arr[i+1]) valid = false;
            if(arr[(4*n) - 1 - i] != arr[(4*n) - 2 - i]) valid = false;
            int curTotal = arr[i] * arr[(4*n) - 1 - i];
            if(total == -1)
   {
    total = arr[i] * arr[(4*n) - 1 - i];
   }
   else
   {
    if(total != curTotal) valid = false;
   }
   if(!valid)break;
 
  }
  if(valid) cout << "YES\n";
  else cout << "NO\n";
 
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}