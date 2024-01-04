#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli n;
 lli arr[100005]={};
 bool isYes = false;
 
 cin >> n;
 for(int i =0 ; i < n; i++)
 {
  cin >> arr[i];
 }
 sort(arr, arr+n);
 for(int i =0 ; i < n-2; i++)
 {
  if((arr[i] + arr[i+1] > arr[i+2]) && (arr[i+1] + arr[i+2] > arr[i]) && (arr[i+2] + arr[i] > arr[i+1]) )
  {
   isYes = true;
   break;
  }
 }
 if(isYes) cout << "YES\n";
 else cout << "NO\n";
 
 
 
 
 
 return 0;
}