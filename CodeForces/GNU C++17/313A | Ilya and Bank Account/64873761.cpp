#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main() {
 string bAccount;
 cin >> bAccount;
 int i, j, counts = 1, maks = -1e9;
 long long int hasil = 0;
 if (bAccount[0] == '-') {
  for (i = bAccount.length() - 1; i >= bAccount.length()-2; i--)
  {
   maks = max(int(bAccount[i] - '0'), maks);
  }
 }
 
 for (i = bAccount.length(); i >= 1; i--)
 {
  if (int(bAccount[i] - '0') == maks) {
   bAccount[i] = NULL;
   break;
  }
 }
 
 for ( i = bAccount.length() -1 ; i >=0; i--)
 {
  if ((bAccount[i] != NULL) && ( bAccount[i] != '-')){
   hasil += int(bAccount[i] - '0') * pow(10, counts);
   counts++;
  }
  if (bAccount[i] == '-') {
   hasil *= -1;
  }
 }
 
 
 cout << hasil/10 << endl;
 
 return 0;
}
 