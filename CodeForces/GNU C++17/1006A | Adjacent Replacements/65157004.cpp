#include <bits/stdc++.h>
using namespace std;
int main() {
 unsigned long long int N, i, temp;
 
 cin >> N;
 for ( i = 0; i < N; i++)
 {
  cin >> temp;
  
  if (temp % 2 == 0) {
   temp -= 1;
   cout << temp;
  }
  else {
   cout << temp;
  }
  if (i != N - 1) {
   cout << " ";
  }
 }
 
 cout << endl;
 return 0;
}