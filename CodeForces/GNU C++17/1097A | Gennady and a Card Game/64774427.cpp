#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 string tableCard, handCard[5];
 bool isAble = false;
 cin >> tableCard;
 
 for (int i = 0; i < 5; i++)
 {
  cin >> handCard[i];
  for (int j = 0; j < 2; j++)
  {
   if (handCard[i][j] == tableCard[j]) {
    isAble = true;
   }
  }
 }
 
 if (isAble) cout << "YES\n";
 else cout << "NO\n";
 
 
 
 
 
 
 
 
 
 
 return 0;
}