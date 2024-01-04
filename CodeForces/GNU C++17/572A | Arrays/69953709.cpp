#include <bits/stdc++.h>
using namespace std;
int main()
{
 int nA, nB;
 cin >> nA >> nB;
 int k, m;
 cin >> k >> m;
 int arrA[100005] = {}, arrB[100005] = {};
 for(int i = 1; i <= nA; i++)
 {
  cin >> arrA[i];
 }
 for(int i = 1; i <= nB; i++)
 {
  cin >> arrB[i];
 }
 if(arrA[k] < arrB[nB-m+1]) cout << "YES\n";
 else cout << "NO\n";
 
 
 
 
 
 
 
 return 0;
}