#include <bits/stdc++.h>
using namespace std;
int main() {
 int lemons, apples, pears, i, hasil=0, mins=1e9;
 cin >> lemons >> apples >> pears;
 
 if (lemons / 1 > 0 && apples / 2 > 0 && pears / 4 > 0) {
  mins = min(mins, min(lemons / 1, min(apples / 2, pears / 4)));
  hasil = (1 * mins) + (2 * mins) + (4 * mins);
  cout << hasil << endl;
 }
 else {
  cout << hasil << endl;
 }
 
 
 
 return 0;
}