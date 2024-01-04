#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n;
  cin >> n;
  int arr[n+5] = {};
  for(int i = 0; i < n; i++)cin >> arr[i];
  bool v1 = 0, v2 = 0;
  int a, b1, b2, c;
  for(int i = 1; i < n; i++)
  {
   if(arr[i-1] < arr[i])
   {
    a = i;
    b1 = i+1;
    v1 = 1;
    break;
   }
  }
 
  for(int i = n-2 ; i >= 0; i--)
  {
   if(arr[i+1] < arr[i])
   {
    b2 = i+1;
    c = i+2;
    v2 = 1;
    break;
   }
  }
  if(!v1 || !v2)
  {
   cout << "NO\n";
   continue;
  }
  if(a >= max(b1, b2) || c <= max(b1, b2) )
  {
   v1 = 0;
   v2 = 0;
  }
  int mx ;
  if(arr[b1-1] >= arr[b2-1])mx = b1;
  else mx = b2;
  if(v1 && v2)
  {
   cout << "YES\n";
   cout << a << " " << mx << " " << c << '\n';
  }
  else cout << "NO\n";
 
 }
 
 
 
 
 
}