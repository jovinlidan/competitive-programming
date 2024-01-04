#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int banyakSiswa, puzzleYangAda, i,puzzle[50], hasil, counts=1, j, min = 1e8;
 cin >> banyakSiswa >> puzzleYangAda;
 
 for (i = 0; i < puzzleYangAda; i++)
 {
  cin >> puzzle[i];
 
 }
 
 sort(puzzle, puzzle + puzzleYangAda);
 
 for ( i = 0; i < puzzleYangAda - 1; i++)
 {
  for ( j = i+1; j < i+2; j++)
  {
   if (puzzle[i] == puzzle[j]) {
    counts++;
   }
  }
 }
 
 
 //for (i = 0; i < puzzleYangAda; i++)
 //{
 // cout << puzzle[i] << endl;;
//
 //}
 
 if (counts == banyakSiswa) {
  cout << 0 << endl;
 }
 else {
 
  for  (i = 0; i <= puzzleYangAda - banyakSiswa; i++)
  {
   hasil = puzzle[i+banyakSiswa-1] - puzzle[i];
   
   if (hasil < min) {
    min = hasil;
   }
  }
  cout << min << endl;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}