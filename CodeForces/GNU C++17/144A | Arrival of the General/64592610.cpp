#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int nSoldier, barisan[100], barisanSorted[100], i, counts=0, indexMax, indexMin;
 
 cin >> nSoldier;
 
 for (i = 0; i < nSoldier; i++)
 {
  cin >> barisan[i];
  barisanSorted[i] = barisan[i];
 }
 
 sort(barisanSorted, barisanSorted + nSoldier);
 
 
 for (i = 0; i < nSoldier; i++)
 {
  if (barisan[i] == barisanSorted[nSoldier - 1]) {
   indexMax = i;
 
 
   break;
  }
 }
 
 for (i = nSoldier-1; i >= 0; i--)
 {
  if (barisan[i] == barisanSorted[0]) {
   indexMin = i;
 
 
   break;
  }
 }
 
 int hasil;
 if (indexMin < indexMax) {
  hasil = (indexMax - 1) + (nSoldier - (indexMin + 1));
  //cout << "1\n";
 }
 else {
  hasil = (indexMax - 1) + (nSoldier - (indexMin));
  //cout << "2\n";
 }
 
 cout << hasil << endl;
 
 
 
 
 
 
 
 return 0;
}