#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while(tc--)
 {
  int arr[3];
  for(int i = 0; i < 3; i++) cin >> arr[i];
  sort(arr, arr+3);
  if(arr[0] + arr[1] < arr[2]) cout << arr[0] + arr[1] << endl;
  else cout << (arr[0] + arr[1] +  arr[2])/2 << endl;
 }
 
 
 
 
 
 
 
 return 0;
}