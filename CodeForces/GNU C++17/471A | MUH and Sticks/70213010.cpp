#include <bits/stdc++.h>
using namespace std;
int main()
{
 bool leg= false, body=false, head = false;
 int sign;
 unordered_map<int, int> cnt;
 int arr[6] = {};
 for(int i = 0; i < 6; i++)
 {
  cin >> arr[i];
  cnt[arr[i]]++;
  if(cnt[arr[i]] == 4)
  {
   leg = true;
   sign = arr[i];
   cnt[arr[i]] = 0;
  }
 
 }
 if(leg)
 {
  for(int i = 0; i < 6; i++)
  {
   //if(arr[i] == sign)arr[i] = 0;
   if(cnt[arr[i]] == 1)
   {
    cout << "Bear\n";
    return 0;
   }
   else if(cnt[arr[i]] == 2)
   {
    cout << "Elephant\n";
    return 0;
   }
  }
 
 }
 cout << "Alien\n";
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}