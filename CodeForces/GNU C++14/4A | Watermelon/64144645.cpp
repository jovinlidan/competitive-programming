#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int N, nPengganti;
 
 cin >> N;
 bool prima = true;
 
 for(int i = 2; i < N; i++)
 {
  if (N % i == 0) {
   nPengganti = N - i;
   if ((nPengganti % 2 == 0) && (i % 2==0)) {
    prima = false;
   }
  }
 }
 if (prima)
  cout << "NO" << endl;
 else
  cout << "YES" << endl;
 
 
 
 
 
 return 0;
}