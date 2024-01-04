#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
 int r, l, d , s, i, j, ans=0, cntS=0;
 char chr = 'O';
 cin >> l >> d >> s;
 
 if(s % 2 == 0){
  cntS =2;
  for(i = 1; i <= l; i++){
   for(j = 1; j <= d; j++){
 
    if(cntS == s){
     l = i;
     r = j;
     chr = 'R';
     goto End;
    }
    cntS+=2;
   }
  }
 }
 if(s % 2 == 1){
  cntS=1;
  for(i = 1; i <= l; i++){
   for(j = 1; j <= d; j++){
 
    if(cntS == s){
     l = i;
     r = j;
     chr = 'L';
     goto End;
    }
    cntS+=2;
   }
  }
 }
 
 
 
 End:
 
 cout << l << " " << r << " " << chr << endl;
 
 
 
 return 0;
}