#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
    lli n, total = 0, newTotal = 0, arr[200005] = {};
    cin >> n;
 
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
  total+=arr[i];
 }
 total = ceil(total/2.0);
 
 for(int i = 0; i < n; i++)
 {
  newTotal += arr[i];
  if(newTotal >= total)
  {
   cout << i+1;
   return 0;
  }
 }
 
 
 
 
 
 
 
 
 return 0;
}