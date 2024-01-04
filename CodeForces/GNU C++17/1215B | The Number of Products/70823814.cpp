#include <bits/stdc++.h>
using namespace std;
int dpPos[200005] = {};
int dpNeg[200005] = {};
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 long long int  n, neg=0, pos=0, arr;
 cin >> n;
 cin >> arr;
 if(arr > 0) dpPos[0] = 1;
 else dpNeg[0] = 1;
 
 for(int i = 1; i < n; i++)
 {
  cin >> arr;
  if(arr > 0)
  {
   dpPos[i] += dpPos[i-1]+1;
   dpNeg[i] += dpNeg[i-1];
  }
  else
  {
   dpPos[i] += dpNeg[i-1];
   dpNeg[i] += dpPos[i-1]+1;
  }
  pos+= dpPos[i];
  neg+= dpNeg[i];
 }
 pos+= dpPos[0];
 neg+= dpNeg[0];
 cout << neg << " " << pos << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}