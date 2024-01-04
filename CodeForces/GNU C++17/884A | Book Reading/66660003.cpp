#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 int n , t, a[105] ={}, cnt=0, temp, ans=0;
 cin >> n  >> t;
 
 for(int i = 0; i < n; i++){
  cin >> a[i];
 }
 
 while(t > 0){
  temp = 86400 - a[cnt];
  if(temp > 0){
   t -= temp;
  }
  ans++;
  cnt++;
  if(t <= 0) break;
 
 }
 
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}
 