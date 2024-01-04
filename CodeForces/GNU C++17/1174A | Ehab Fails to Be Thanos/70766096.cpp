#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, left, right, sL=0, sR=0;
 cin >> n;
 
 int arr[2005] = {};
 for(int i =0; i < 2*n; i++)
 {
  cin >> arr[i];
 }
 sort(arr, arr+(2*n));
 for(int i =0; i < 2*n; i++)
 {
  if(i < n)sL += arr[i];
  else if(i >= n)sR +=arr[i];
 }
 bool swaped = false;
 if(sL != sR)
 {
  swaped = true;
  goto ends;
 }
 left = 0;
 right = 2*n-1;
 
 while(left < right)
 {
 
  if(arr[left] != arr[right])
  {
   swap(arr[left], arr[right]);
   swaped = true;
   break;
  }
  left++;
  right--;
 }
 ends:
 if(swaped)
 {
  for(int i =0; i < 2*n; i++)
  {
   if(i != 0) cout << " ";
   cout << arr[i];
 
  }
 }
 else cout << -1 << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}