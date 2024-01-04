#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 unsigned long long int i, manyLatterns, lengthStreet, j, lattern[1001] = {}, prevLattern = 0;
 cin >> manyLatterns >> lengthStreet;
 long double hasil = 0, gap = 0;
 bool adaNol = false;
 bool trakhirAda = false;
 for (i = 0; i < manyLatterns; i++)
 {
  cin >> lattern[i];
  if (lattern[i] == 0) {
   adaNol = true;
  }
  if (lattern[i] == lengthStreet) {
   trakhirAda = true;
  }
 }
 sort(lattern, lattern + manyLatterns);
 if (adaNol) {
  gap = lattern[0] / 2.0;
 }
 else {
  gap = lattern[0];
  //cout << "INI GAP : " << gap << endl ;
 }
 if (!trakhirAda) {
  if ((lengthStreet - lattern[manyLatterns - 1]) > gap) {
   gap = (lengthStreet - lattern[manyLatterns - 1]);
  }
 }
 
 
 for (i = 0; i < manyLatterns-1; i++)
 {
  for (j = i+1; j < i+2; j++)
  {
   if ((lattern[j] - lattern[i]) / 2.0 > gap ) {
    gap = (lattern[j] - lattern[i]) / 2.0;
   }
 
  }
 }
 
 cout << fixed<< setprecision(10) << gap << endl;
 
 
 return 0;
}