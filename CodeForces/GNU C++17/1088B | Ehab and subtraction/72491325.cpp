#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n+5] = {};
 long long int total = 0;
    for(int i = 0; i < n; i++)cin >> arr[i];
    sort(arr, arr+n);
 
    for(int i = 0; i < n && k != 0; i++)
 {
         if(arr[i] == 0) continue;
 
         if(arr[i] - total > 0)
   {
    arr[i] -= total;
   total += arr[i];
   cout << arr[i] << endl;
   k--;
   }
 }
 
 while(k--)
 {
  cout << 0 << endl;
 }
 
 
 
 
 
 
 
 return 0;
}