#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main() {
 int problems, timeToGo, sisaWaktu, problemTime, problemCounts = 1, hasil = 0;
 cin >> problems >> timeToGo;
 
 sisaWaktu = 240 - timeToGo;
 while (sisaWaktu > 0) {
 
  if (problemCounts > problems)
   break;
  problemTime = 5 * problemCounts;
  sisaWaktu -= problemTime;
  problemCounts++;
  hasil++;
 
  if (sisaWaktu < 0)
   hasil--;
 
  
 }
 
 cout << hasil << endl;
 
 
 
 
 
 
 
 
 return 0;
}