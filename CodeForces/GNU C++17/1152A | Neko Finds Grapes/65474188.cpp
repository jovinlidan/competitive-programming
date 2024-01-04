#include <bits/stdc++.h>
using namespace std;
int main() {
 
 
 long long int nChest,i, nKeys, chestOdd = 0, chestEven = 0, keysOdd = 0, keysEven = 0, temp;
 cin >> nChest >> nKeys;
 
 for (i = 0; i < nChest; i++)
 {
  cin >> temp;
  if (temp % 2 == 0) chestEven++;
  else chestOdd++;
 }
 for (i = 0; i < nKeys; i++)
 {
  cin >> temp;
  if (temp % 2 == 0) keysEven++;
  else keysOdd++;
 }
 
 temp = min(chestEven, keysOdd) + min(chestOdd, keysEven);
 cout << temp << endl;
 
}