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
  int n, arr[50] = {}, ge=0, ga = 0;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
   cin >> arr[i];
   if(arr[i] % 2==0)ge++;
   else ga++;
  }
  bool valid = true;
  if(n % 2 == 1)
  {
   if(ge - ga != 1)valid = false;
  }
  else
  {
   if(ge != ga)valid = false;
  }
  int cnt = 0;
  if(valid)
  {
   for(int i = 0; i < n; i++)
   {
    if(i%2 != arr[i]%2)cnt++;
   }
   cout << cnt / 2 << '\n';
 
  }else cout << -1 << '\n';
  //cout << "GA = " << ga << ", GE = " << ge << '\n';
 }
 
 
 
 
}