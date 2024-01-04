#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, i, j;
 string kata, alphabet="abcdefghijklmnopqrstuvwxyz";
 bool pangram = true;
 cin >> n >> kata;
 
 for (i = 0; i < n; i++)
 {
  if (((int)kata[i] >= 65) && ((int)kata[i] <= 90)) {
   kata[i] = char((int)kata[i] + 32);
  }
 }
 
 for (i = 0; i < n; i++)
 {
  for (j = 0; j < alphabet.length(); j++)
  {
   if (kata[i] == alphabet[j]) {
    alphabet[j] = NULL;
   }
  }
 }
 
 for (i = 0; i < alphabet.length(); i++)
 {
  if (alphabet[i] != NULL) {
   pangram = false;
   break;
  }
  pangram = true;
 }
 
 if (pangram)
  cout << "YES\n";
 else
  cout << "NO\n";
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}