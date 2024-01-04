#include <bits/stdc++.h>
 
 
using namespace std;
 
 
int main() {
 
 string kata;
 getline(cin, kata);
 for (int i = 0; i < kata.length() ;i++)
 {
  
  if (((int)kata[i] >= 65) && ((int)kata[i] <= 90)) {
   kata[i] = (char)((int)kata[i] + 32);
   
  }
  if (((int)kata[i] == 97) || ((int)kata[i] == 101) || ((int)kata[i] == 105) || ((int)kata[i] == 111) || ((int)kata[i] == 117) || ((int)kata[i] == 121)) {
   kata[i] = NULL;
  }
  else {
   cout << '.';
   cout << kata[i];
  }
  
 }
 
 cout << endl;
 
 
 
 return 0;
}