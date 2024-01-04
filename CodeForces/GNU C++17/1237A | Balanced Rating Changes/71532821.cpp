#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
 int n;
 cin >> n;
 int arr[n+5] = {}, ans[n+5] = {}, total=0;
 
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
  ans[i] = arr[i]/2;
  total+= ans[i];
 }
 int total2 = 0;
 //cout << total << "TOTAL"<< endl;
 for(int i = 0; i < n ; i++)
 {
  if(arr[i] % 2 != 0 && total != 0)
  {
   if(total < 0)
   {
    //cout << arr[i] << " " << ans[i] << "BEFORE\n";
    if(ans[i] != ceil(arr[i]/ 2.0))
    {
     ans[i] = ceil(arr[i] / 2.0);
     total++;
    }
    //cout << ans[i] << "AFTER\n";
    //cout << "KENAK\n";
   }
   else
   {
    if(ans[i] != floor(arr[i]/ 2.0))
    {
     ans[i] = floor(arr[i] / 2.0);
     total--;
 
    }
 
   }
  }
  //total2+= ans[i];
  cout << ans[i] << endl;
 }
 //cout << total2 << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}