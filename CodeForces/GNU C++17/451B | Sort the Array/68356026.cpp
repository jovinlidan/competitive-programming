#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n, arr[100005]={}, i, idxI=-1, idxJ=-1, urut[100005] = {};
 vector<int> cek1, cek2;
 bool used = false, isYes = true, onceTimes = false;
 cin >> n;
 for(i = 1; i <= n; i++)
 {
  cin>> arr[i];
  urut[i] = arr[i];
 }
 sort(urut, urut+n+1);
 for(i = 1; i <= n; i++)
 {
  if(arr[i] != urut[i])
  {
   if(idxI == -1) idxI = i;
   idxJ = i;
   if(onceTimes)
   {
    isYes = false;
    break;
   }
   used = true;
   cek1.push_back(arr[i]);
  }
  else
  {
   if(used)
   {
    if(i != n)
    {
     if(arr[i+1] == urut[i+1])
     {
      onceTimes = true;
     }
    }else
    {
     onceTimes = true;
    }
 
   }
  }
 }
 cek2 = cek1;
 sort(cek2.begin(), cek2.end(), greater<int>());
 if(cek1 != cek2 ) isYes = false;
 
 if(isYes)
 {
  if(idxI == -1 && idxJ == -1)
  {
   idxI = 1;
   idxJ = 1;
  }
  cout << "yes\n";
  cout << idxI << " " << idxJ << endl;
 }else
 {
  cout << "no\n";
 }
 
 
 
 return 0;
}