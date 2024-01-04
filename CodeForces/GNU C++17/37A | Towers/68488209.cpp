#include <bits/stdc++.h>
 
using namespace std;
int main()
{
 int N;
 unordered_map<int , int > arr;
 cin >> N;
 int temp, mxTotal=0, mxHeight=0;
 while(N--)
 {
  cin >> temp;
  arr[temp]++;
  if(arr[temp] == 1)mxTotal++;
  mxHeight = max(mxHeight, arr[temp]);
 
 }
 cout << mxHeight << " " << mxTotal << endl;
 
 
 
 
 
 
 
 
 return 0;
}