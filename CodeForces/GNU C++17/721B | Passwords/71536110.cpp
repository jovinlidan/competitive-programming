#include <bits/stdc++.h>
using namespace std;
 
bool cmp(string x, string y)
{
 return x.length() < y.length();
}
int main()
{
 int n, k;
 cin >> n>> k;
 vector<string> arr;
 string asli;
 for(int i = 0; i < n; i++)
 {
  cin >> asli;
  arr.push_back(asli);
 }
 cin >> asli;
 sort(arr.begin(), arr.end(), cmp);
 
    int mnSec = 0;
 bool lastMn = false;
    for(int i = 0; i < n; i++)
 {
        if(arr[i].length() == asli.length())
  {
   mnSec += ((mnSec/k)*5);
   lastMn = true;
   mnSec++;
   break;
  }
        mnSec++;
 }
 if(!lastMn)
 {
  mnSec += ((mnSec/k)*5);
 }
 int mxSec = 0;
 bool lastMx = false;
 for(int i = 0; i < n; i++)
 {
  if(arr[i].length() > asli.length() && arr[i-1].length() == asli.length())
  {
   mxSec--;
   mxSec += ((mxSec/k)*5);
   mxSec++;
   lastMx = true;
   break;
 
  }
  mxSec++;
 }
 if(!lastMx)
 {
  mxSec--;
  mxSec += ((mxSec/k) * 5);
  mxSec++;
 }
 cout<< mnSec << " " << mxSec << endl;
 
 
 
 
 
 
 return 0;
}