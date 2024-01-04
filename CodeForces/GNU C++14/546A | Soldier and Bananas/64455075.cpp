#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int dollarSoldierHas, i, costFirstBanana, bananaHeWant, borrowDollar=0, totalAllCost=0;
 
 cin >> costFirstBanana >> dollarSoldierHas >> bananaHeWant;
 
 for (i = 1; i <= bananaHeWant; i++)
 {
  totalAllCost += costFirstBanana * i;
 }
 
 borrowDollar = totalAllCost - dollarSoldierHas;
 if (borrowDollar < 0)
  borrowDollar = 0;
 
 cout << borrowDollar << endl;
 
 
 return 0;
}