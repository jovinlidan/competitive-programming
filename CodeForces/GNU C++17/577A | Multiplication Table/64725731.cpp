#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 long long int rowXcol,i,j, angkaCari, counts=0;
 cin >> rowXcol >> angkaCari;
 /*if (angkaCari == 1) {
  counts = 1;
 }*/
 //else {
  for (i = 1; i <= rowXcol; i++)
  {
   if( (i <= angkaCari)&& (angkaCari % i == 0)){
    for (j = 1; j <= rowXcol; j++)
    {
     if ((i > angkaCari) || (j > angkaCari)) {
      break;
     }
     if (i * j == angkaCari) {
      counts++;
      break;
     }
    }
   }
   
  }
 //}
 
 
 
 cout << counts << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}