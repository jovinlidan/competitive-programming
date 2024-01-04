#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 int arr[n+5] = {}, one = -1, last = -1;
 for(int i = 1; i <= n; i++)
 {
  cin >> arr[i];
  if(arr[i] == 1) one = i;
  if(arr[i] == n) last = i;
 }
 
 if(one < last)
 {
  if(one-1 >= n-last)
  {
   one = 1;
   cout << last - one << endl;
  }
  else
  {
   last = n;
   cout << last - one  << endl;
 
  }
 }
 else
 {
  if(last - 1 >= n-one)
  {
   last = 1;
   cout << abs(one - last  ) << endl;
  }
  else
  {
   one = n;
   cout << abs(one - last ) << endl;
  }
 }
 
 
 
 
 
 
 
 return 0;
}