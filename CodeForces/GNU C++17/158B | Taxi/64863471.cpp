#include<bits/stdc++.h>
using namespace std;
int main()
{
 int numGroups;
 cin >> numGroups;
 long long int temp, b[5] = {}, hasil = 0, total = 0;
 for (int i = 0;i < numGroups ;i++) {
  cin >> temp;
  b[temp]++;
 }
 hasil += b[4];
 hasil += b[3];
 if (b[1] > b[3])
  b[1] -= b[3];
 else
  b[1] = 0;
 total = (b[1] + 2 * b[2]);
 if (total % 4 != 0)
  hasil += 1 + (total) / 4;
 else
  hasil += (total) / 4;
 
 cout << hasil << endl;
}