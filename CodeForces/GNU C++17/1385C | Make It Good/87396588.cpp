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
  int n, arr[200005] = {};
  cin >> n;
  for(int i = 0 ; i < n; i++)cin >> arr[i];
  bool valid = true;
  int last = -1e9, idx = -1;
  for(int i = n-1; i >= 0; i--)
  {
   if(valid)
   {
    if(arr[i] < last)
    {
     valid = false;
    }
   }
   else
   {
    if(arr[i] > last)
    {
     idx =i;
     break;
    }
   }
   last = arr[i];
  }
  cout << idx +1 << '\n';
 
 
 }
}