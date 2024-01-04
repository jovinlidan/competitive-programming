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
  lli n, now = 2;
  cin >> n;
  vector<int> arr;
  arr.empty();
 
  while(now <= ceil(sqrt(n)))
  {
   if(n % now == 0)
   {
    arr.push_back(now);
    n /= now;
   }
   now++;
   if(arr.size() == 2)
   {
    if(n != arr[1] && n != 1 && n != arr[0])
    {
     arr.push_back(n);
     break;
    }
    else break;
   }
  }
  if(arr.size() == 3)
  {
   cout << "YES\n";
   cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
  }
  else cout << "NO\n";
 
 
 
 }
 
 
 
 
 
 
 
 return 0;
}