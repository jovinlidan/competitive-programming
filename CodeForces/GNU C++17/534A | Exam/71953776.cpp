#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int first = 1, last = n;
    vector<int> arr;
    // EXCEPT 1, 2, 3
 if(n == 1)
 {
  cout << 1 << endl;
  cout << 1 << endl;
  return 0;
 }
 else if(n== 2)
 {
  cout << 1 << endl;
  cout << 1 << endl;
  return 0;
 }
 else if(n == 3)
 {
  cout << 2 << endl;
  cout << 1 << " " << 3<< endl;
  return 0;
 }
 
 for(int i = 1; i <= n; i++)
 {
  arr.push_back(i);
 }
 for(int i = 0; i < n; i+=2)
 {
  if(i != n-1)swap(arr[i], arr[i+1]);
 }
 for(int i = 1; i < n; i+=2)
 {
  if(i != n-1)swap(arr[i], arr[i+1]);
 
 }
 cout << n << endl;
 for(int i = 0; i < n; i++)
 {
  if(i != 0)cout << " ";
  cout << arr[i];
 }
 cout << endl;
 
 
 
 
 return 0;
}