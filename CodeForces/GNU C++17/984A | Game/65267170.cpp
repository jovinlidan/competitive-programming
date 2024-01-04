#include <bits/stdc++.h>
using namespace std;
int main() {
 int length, bil[1005], i;
 cin >> length;
 for (i = 0; i < length; i++)
 {
  cin >> bil[i];
 }
 sort(bil, bil + length);
 
 if (length % 2 == 0) {
  cout << bil[(length / 2) - 1];
 }
 else {
  cout << bil[(length / 2)];
 }
 cout << endl;
 
 
 return 0;
}