#include <bits/stdc++.h>
using namespace std;
int main(){
 
 long long int n, arr[100005]={},odd=0, ans=0;
 cin >> n;
 for(int i = 0; i < n; i++){
  cin >> arr[i];
  if(arr[i] % 2 == 1) odd++;
 }
 sort(arr, arr+n, greater<int>());
 
 odd -= odd % 2;
 
 for(int i = 0; i < n; i++){
  if(arr[i] % 2 == 1 && odd > 0){
   ans+= arr[i];
   odd--;
  }
  else if (arr[i] % 2 == 0){
   ans += arr[i];
  }
 }
 
 cout << ans << endl;
 
 
 
 return 0;
}