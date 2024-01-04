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
  int n, k, arr[1005] = {}, genap = 0, ganjil = 0;
  cin >> n >> k;
 
  for(int i = 0; i < n; i++)
  {
   cin >> arr[i];
   if(arr[i] % 2 == 0)genap++;
   else ganjil++;
  }
  if(ganjil > 0)
  {
   int byk = k/2;
 
   if(k % 2 == 0)
   {
    byk = k-1;
   }
   else byk = k;
 
 
 
   int byk2 = 0;
   int qqq = 0;
   if(ganjil % 2 == 0)qqq = 1;
   byk2  = ganjil - qqq;
   if(min(byk, byk2) + genap >= k)cout << "Yes\n";
   else cout << "No\n";
  }
  else cout << "No\n";
 
 
 }
 
 
 
}