#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, i, j, counts = 0, homeTeam[30], guestTeam[30];
 cin >> n;
 for (i = 0; i < n; i++)
 {
  cin >> homeTeam[i] >> guestTeam[i];
 }
 
 for (i = 0; i < n; i++)
 {
  for (j = 0; j < n; j++)
  {
   if (homeTeam[i] == guestTeam[j]) {
    counts++;
   }
  }
 }
 
 cout << counts << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}