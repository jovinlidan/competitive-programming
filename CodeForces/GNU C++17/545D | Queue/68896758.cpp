#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
lli n, arr[100005]={};
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 cin >> n;
 for(int i =0; i < n; i++)
 {
  cin >> arr[i];
 }
 sort(arr, arr+n);
 lli puas=0, total=0;
 for(int i = 0; i < n; i++)
 {
  if(arr[i] >= total)puas++;
  else arr[i] = 0;
  total+= arr[i];
 }
 cout << puas << endl;
 
 
 
 
 
 
 
 
 
 return 0;
}