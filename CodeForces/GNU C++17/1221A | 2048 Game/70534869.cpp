#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while(tc--)
 {
  unordered_map <int, int> arr;
  int n, temp;
  bool valid = false;
  cin >> n;
  arr.clear();
  for(int i =0; i < n; i++)
  {
   cin >> temp;
   arr[temp]++;
   if(temp == 2048)valid = true;
  }
  if(valid)cout << "YES\n";
  else
  {
   temp = 1;
   while(temp != 4096)
   {
    if(arr[temp] >= 2)
    {
     arr[temp*2] += floor(arr[temp]/2.0);
    }
    temp *= 2;
   }
   if(arr[2048] >= 1) cout << "YES\n";
   else cout << "NO\n";
 
 
  }
 
 
 
 
 
 
 
 
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}