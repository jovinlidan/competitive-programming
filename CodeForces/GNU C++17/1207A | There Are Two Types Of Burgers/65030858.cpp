#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, i,  burn, bPatty, cPatty, hamDollar, chickDollar, totalHam=0, totalChick=0, hasil=0;
 cin >> n;
 for (i = 0; i <n; i++)
 {
  cin >> burn >> bPatty >> cPatty >> hamDollar >> chickDollar;
  totalChick = 0;
  totalHam = 0;
  if (chickDollar > hamDollar) {
   while (cPatty != 0) {
    if (burn < 2)
     break;
    burn -= 2;
    cPatty -= 1;
    totalChick += 1;
   }
   while (bPatty != 0) {
    if (burn < 2)
     break;
    burn -= 2;
    bPatty -= 1;
    totalHam += 1;
   }
  }
  else {
   while (bPatty != 0) {
    if (burn < 2)
     break;
    burn -= 2;
    bPatty -= 1;
    totalHam += 1;
   }
   while (cPatty != 0) {
    if (burn < 2)
     break;
    burn -= 2;
    cPatty -= 1;
    totalChick += 1;
   }
  }
  
  hasil = (totalHam * hamDollar) + (totalChick * chickDollar);
  cout << hasil << endl;
 }
 
 
 
 
 
 
 
 
 
 return 0;
}