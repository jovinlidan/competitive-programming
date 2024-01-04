#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, odd=0, even = 0, ans = 0;
 cin >> n;
 int arr[2005] = {};
 for(int i = 0 ; i < n; i++)
 {
  cin >> arr[i];
  if(arr[i] % 2 ==0) even++;
  else odd++;
 }
 sort(arr, arr+n);
 if(abs(odd - even) <= 1)
 {
  cout << 0 << endl;
  return 0;
 }
 else
 {
  //cout << odd << " " << even << endl;
  if(odd > even)
  {
   odd = odd-even-1;
   for(int i = 0; i < n && odd!=0 ; i++)
   {
    if(arr[i] % 2 == 1)
    {
     ans+= arr[i];
     odd--;
    }
   }
 
  }
  else
  {
   even = even-odd-1;
   for(int i = 0; i < n && even!=0 ; i++)
   {
    if(arr[i] % 2 == 0)
    {
     ans+= arr[i];
     even--;
    }
   }
  }
 
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}