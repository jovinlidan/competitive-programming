#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, k;
 cin >> n >> k;
 string arr;
 cin >>arr;
 
 int left = 0,right = 0, mx = -1e9;
 int noA = 0, noB = 0;
 while(1)
 {
  if(right >= n) break;
  if(arr[right] == 'a')noA++;
  else noB++;
 
        while(noA > k)
  {
   //cout << "JING\n";
   if(arr[left] == 'a')noA--;
   else noB--;
   left++;
  }
  mx = max(mx, noB+noA);
  right++;
 }
 //cout << noB << " " << noA << endl;
// cout << mx << endl;
// cout << "---\n";
 
 left = 0,right = 0;
 noA = 0, noB = 0;
 while(1)
 {
  if(right >= n) break;
  if(arr[right] == 'a')noA++;
  else noB++;
 
        while(noB > k)
  {
   if(arr[left] == 'a')noA--;
   else noB--;
   left++;
  }
  mx = max(mx, noA+noB);
  right++;
 }
 cout << mx << endl;
 return 0;
}