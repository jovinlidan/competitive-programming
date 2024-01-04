#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, i, j, count, hasil;
 cin >> n;
 hasil = 0;
 
 for (i = 0; i < n; i++)
 {
  int datas[3];
  count = 0;
  cin >> datas[0] >> datas[1] >> datas[2];
  for (j = 0; j < 3; j++)
  {
   if (datas[j] == 1) {
    count += 1;
   }
  }
  if (count > 1) {
   hasil += 1;
  }
 }
 
 cout << hasil << endl;
 
 
 
 return 0;
 
}