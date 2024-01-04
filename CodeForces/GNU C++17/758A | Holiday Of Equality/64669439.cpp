#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 int i, nCitizen, nWelfare[100], max = -1, idxKe=0, hasil=0;
 cin >> nCitizen;
 for ( i = 0; i < nCitizen; i++)
 {
  cin >> nWelfare[i];
  if (nWelfare[i] > max) {
   max = nWelfare[i];
   idxKe = i;
  }
 }
 
 for (i = 0; i < idxKe; i++)
 {
  hasil += (max - nWelfare[i]);
 
 }
 
 for (i = idxKe + 1; i < nCitizen; i++)
 {
  hasil += (max - nWelfare[i]);
 }
 
 cout << hasil << endl;
 
 
 
 
 
 return 0;
}