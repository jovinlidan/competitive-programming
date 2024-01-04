#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int i, counts = 0, colour[4], j;
 
 cin >> colour[0] >> colour[1] >> colour[2] >> colour[3];
 
 
 for (i = 0; i < 4; i++)
 {
  for (j = i+1; j < 4; j++)
  {
   if ((colour[i] == colour[j]) && (colour[j] != NULL)) {
    colour[j] = NULL;
    counts++;
   }
  }
 
 
 }
 
 cout << counts << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}