#include <bits/stdc++.h>
using namespace std;
int main() {
 int i, counts = 0, cards[105], total = 0, j, k;
 double n;
 cin >> n;
 
 for (i = 1; i <= n; i++)
 {
  cin >> cards[i];
  total += cards[i];
 }
 total = (total / n) * 2;
 for (i = 1; i <= n; i++)
 {
  if (cards[i] > 0) {
   for (j = i + 1; j <= n; j++)
   {
    if (cards[j] > 0) {
     if (cards[i] + cards[j] == total) {
      cout << i << " " << j << endl;
      cards[i] = -1;
      cards[j] = -1;
 
     }
    }
 
   }
  }
 }
 
 
 return 0;
}