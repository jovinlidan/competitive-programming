#include <bits/stdc++.h>
using namespace std;
int main() {
 int N, i,stdnt[105], hasil=0;
 cin >> N;
 for (i = 0; i < N; i++)
 {
  cin >> stdnt[i];
 }
 sort(stdnt, stdnt + N);
 for (i = 0; i < N; i+=2)
 {
  hasil += stdnt[i + 1] - stdnt[i];
 }
 cout << hasil << endl;
 
 
 return 0;
}