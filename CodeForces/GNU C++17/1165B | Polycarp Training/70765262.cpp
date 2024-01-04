#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, needK = 1;
 cin >> n;
 int arr[200005] = {};
 
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 sort(arr, arr+n);
 
 for(int i = 0; i < n; i++)
 {
  if( arr[i] >= needK)
  {
   //cout << arr[i] <<"-" << needK << endl;
   needK++;
  }
 
 }
 cout << needK-1 << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}