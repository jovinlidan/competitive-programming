#include <bits/stdc++.h>
using namespace std;
 
int main() {
 string word;
 int N, i, counts=0, hasil =0;
 cin >> N >> word;
 
 for (i = 0; i < N; i++)
 {
  if (word[i] == 'x') {
   counts++;
   
  }
  else {
   if (counts >= 3) {
    hasil += counts - 2;
   }
   counts = 0;
  }
  if (i == N - 1) {
   if (counts >= 3) {
    hasil += counts - 2;
   }
  }
 }
 
 cout << hasil << endl;
 
 
 
 return 0;
}