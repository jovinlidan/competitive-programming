#include <bits/stdc++.h>
using namespace std;
 
int main(){
 int n, cnt=1, data[100]={}, total=0;
 cin >> n;
 for(int i = 1; i <= n; i++){
  cin >> data[i];
 }
 
 while(true && cnt != n+1){
  if(total + 15 >= data[cnt]){
   total += data[cnt] - data[cnt-1];
   cnt++;
  }
  else{
   break;
  }
 }
 
 if(total >= 90 - 15){
  total = 90;
 }
 total += 15;
 
 cout << min(90, total);
 
 
 
 
 
 
 
 
 return 0;
}