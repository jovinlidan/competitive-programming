#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli n;
 cin >> n;
 lli arr[200005] = {};
 for(int i = 1; i <= n; i++)cin >> arr[i];
 lli left = 1, right = n, mx = -1e9, totalL = 0, totalR = 0;
 while(left - right <= 1)
 {
  if(totalL <= totalR)
  {
   if(totalL == totalR) mx = totalL;
   totalL += arr[left];
   left++;
  }
  else
  {
   totalR += arr[right];
   right--;
  }
 }
 cout << mx <<endl;
 
 
 
 
 
 
 
 
 return 0;
}