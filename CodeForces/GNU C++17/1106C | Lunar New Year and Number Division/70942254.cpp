#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, arr[300005] = {};
 cin >> n;
 for(int i = 0; i< n; i++)
 {
  cin >> arr[i];
 }
 int left = 0, right = n-1;
 long long int ans = 0;
 sort(arr, arr+n);
 while(left < right)
 {
  ans += ((arr[left]+arr[right]) *(arr[left]+arr[right]) );
  //cout << arr[left] << " " << arr[right] << endl;
 
  left++;
  right--;
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}