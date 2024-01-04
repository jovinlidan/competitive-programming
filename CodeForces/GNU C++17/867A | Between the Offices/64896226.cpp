#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int n, StoF=0, FtoS=0; 
 string flies;
 cin >> n;
 cin >> flies;
 
 for (int i = 0; i < n-1; i++)
 {
  if (flies[i] == 'S' && flies[i + 1] == 'F') {
   StoF++;
  }
  if (flies[i] == 'F' && flies[i + 1] == 'S') {
   FtoS++;
  }
 }
 if (StoF > FtoS)
  cout << "YES\n";
 else
  cout << "NO\n";
 
 
 
 
 
 
 
 
 
 return 0;
}