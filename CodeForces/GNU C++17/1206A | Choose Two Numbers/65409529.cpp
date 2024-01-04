#include <bits/stdc++.h>
using namespace std;
int main() {
 int a, b,i, dataA[105], dataB[105], counts[1005] = {}, j, nilaiA=0, nilaiB=0;
 cin >> a;
 for (i = 0; i < a; i++)
 {
  cin >> dataA[i];
  counts[dataA[i]]++;
 }
 cin >> b;
 for (i = 0; i < b; i++)
 {
  cin >> dataB[i];
  counts[dataB[i]]++;
 }
 
 for (i = 0; i < a; i++)
 {
  for (j = 0; j < b; j++)
  {
   if (counts[dataA[i] + dataB[j]] == 0) {
    nilaiA = dataA[i];
    nilaiB = dataB[j];
    break;
   }
  }
  if (nilaiA != 0 && nilaiB != 0) {
   break;
  }
 }
 
 cout << nilaiA << " " << nilaiB << endl;
 
 return 0;
}