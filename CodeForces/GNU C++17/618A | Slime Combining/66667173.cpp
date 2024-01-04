#include <bits/stdc++.h>
using namespace std;
 
int solve(int x){
 int num = 2;
 while( num <= x){
  num*=2;
 }
 return num /2;
 
}
 
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long int n, cnt[50005]={}, j, temp=1;
 cin >> n;
 
 for(int i = 0; i < n; i++){
  cnt[1]++;
  temp =1;
  while(cnt[temp] >= 2){
   cnt[temp] -= 2;
   cnt[temp+1]++;
   temp++;
  }
 }
 
 for(int i = n/2+1; i>=1; i--){
  if(cnt[i] != 0) cout << i << " ";
 }
 
 
 
 
 
 
 
 
 return 0;
}