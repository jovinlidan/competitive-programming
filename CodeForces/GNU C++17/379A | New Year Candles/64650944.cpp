#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int candle, daurUlang, hasil;
 cin >> candle >> daurUlang;
 hasil = candle;
 bool run = true;
 while (run) {
 
  if (candle >= daurUlang) {
   candle -= daurUlang;
   hasil += 1;
   candle++;
 
  }
  else {
   run = false;
  }
 
 }
 cout << hasil << endl;
 
 
 
 
 return 0;
}