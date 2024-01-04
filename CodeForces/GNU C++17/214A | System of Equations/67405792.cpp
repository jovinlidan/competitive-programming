#include <bits/stdc++.h>
 
using namespace std;
int main()
{
 int n, m, mn=0, cnt =0;
 cin >> n >> m;
 mn = min(n, m);
 
 for(int i = 0 ; i <= mn; i++){
  for(int j = 0; j <= mn; j++ ){
   if(i * i + j == n && i + j*j == m){
    cnt++;
   }
  }
 }
 cout<< cnt;
 
 
 
 
    return 0;
}