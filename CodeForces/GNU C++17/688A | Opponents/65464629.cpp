#include <bits/stdc++.h>
using namespace std;
int main() {
 
 int nEnemy, nDays, i, counts = 0, k, maxs=-1e9;
 string enemy;
 map <char, int> data;
 
 cin >> nEnemy >> nDays;
 for (i = 0; i < nDays; i++)
 {
  cin >> enemy;
  for (k = 0; k < nEnemy; k++)
  {
   data[enemy[k]]++;
  }
  if (data['0'] != 0) {
   counts++;
   data.clear();
  }
  else {
   
   counts = 0;
  }
  maxs = max(maxs, counts);
 }
 cout << maxs << endl;
 return 0;
}