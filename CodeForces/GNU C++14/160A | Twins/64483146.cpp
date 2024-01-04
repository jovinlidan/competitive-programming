#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int nCoin, i, coin[100], total = 0, rataRata = 0, patokan = 0, counts = 0;
 cin >> nCoin;
 for (i = 0; i < nCoin; i++)
 {
  cin >> coin[i];
  total += coin[i];
 
 }
 
 rataRata = (total / 2) + 1;
 
  
 
 sort(coin, coin + nCoin, greater<int>());
 
 for (i = 0; i < nCoin ; i++)
 {
  counts++;
  patokan += coin[i];
  if (patokan >= rataRata) {
   
   break; 
 
  }
  
  
 
  
 }
 
 cout << counts << endl;
 
 
 
 
 
 return 0;
}