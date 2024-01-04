#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int n, m, hasil, i, hitung;
 cin >> n >> m;
 hitung = 0;
 hasil = n * m;
 
 for (i = 1; i < hasil; i+= 2)
 {
  hitung += 1;
 }
 cout << hitung << endl;
 
 return 0;
}