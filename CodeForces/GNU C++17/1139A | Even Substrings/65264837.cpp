#include <bits/stdc++.h>
using namespace std;
int main() {
 long long  int length, i, total = 0;
 char bil;
 cin >> length;
 for (i = 1; i <= length; i++)
 {
  cin >> bil;
  if ((bil == '2') || (bil == '4') || (bil == '6') || (bil == '8')) {
   total += i;
  }
 }
 cout << total << endl;
 return 0;
}