#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 int n, time, i, j;
 string queue;
 cin >> n >> time >> queue;
 
 for (i = 0; i < time; i++)
 {
  for (j = 0; j < n - 1; j++)
  {
   if ((queue[j] == 'B') && (queue[j + 1] == 'G')) {
    queue[j] = 'G';
    queue[j + 1] = 'B';
    j++;
   }
  }
 }
 cout << queue << endl;   
 
 
 
 
 
 
 
 
 return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//int main() {
// int i, j, n, time, k;
// cin >> n >> time;
// string queue, dataBaru;
// cin >> queue;
// 
// 
// 
// for (i = 0; i < time; i++)
// {
//  dataBaru = queue;
//  for (j = queue.length() - 1; j > 0; j--)
//  {
//   //cout << "INI J" << j << endl; 
//   if ((queue[j] == 'G') && (queue[j - 1] == 'B')) {
//
//    for (k = j; k < queue.length(); k++)
//    {
//     queue[k] = queue[abs(k - (n - j))];
//     //cout << queue[k - (n - j)] << "  " << k - (n - j) << "k++" << endl;
//    }
//    for (k = j - 1; k >= 0; k--)
//    {
//     int indx = k - (n - j);
//     if ( indx < 0) {
//      indx += n;
//     }
//     queue[k] = dataBaru[indx];
//     //cout << dataBaru[abs(k - (n - j))] << "  " <<abs( k - (n - j)) << "k--" << endl;
//    }
//    break;
//   }
//   
//   
//   
//   /* 6 1
//    GBBGBB
//   */
//
//  }
// }
// 
// cout << queue << endl;
//
//
//
//
// return 0;
//}