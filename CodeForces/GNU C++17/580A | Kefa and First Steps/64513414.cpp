#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, money, i, j, Count=0, lastMoney=0, maxCount =1;
 
 cin >> n;
 for (i = 0; i < n; i++)
 {
  if (i > 0) {
   lastMoney = money;
  }
  cin >> money;
  if (money >= lastMoney) {
   Count++;
  }
  else {
   Count = 1;
  }
 
  if (maxCount < Count) {
   maxCount = Count;
  }
 
 }
 cout << maxCount << endl;
 
 
 
 
 return 0;
}