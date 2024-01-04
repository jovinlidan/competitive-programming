#include <bits/stdc++.h>
using namespace std;
int arr[55][55]= {};
int n, i, j;
bool solve(int i, int j,int idx1,int idx2){
 for(idx1 = 0; idx1 < n; idx1++){
  for(idx2 = 0; idx2 < n; idx2++){
   if(idx1 == i && idx2 == j) continue;
   if(arr[idx1][j] + arr[i][idx2]== arr[i][j]){
    //cout << data[idx1][j] << " " << data[i][idx2];
    return true;
   }
  }
 }
 return false;
 
}
 
int main()
{
 
    cin >> n;
    bool able = true, yes = true;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> arr[i][j];
 
        }
    }
 
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(arr[i][j] > 1){
     yes = solve(i, j, 0, 0);
    if(yes == false) able = false;
            }
        }
    }
 
    if(able)
        cout << "YES";
    else
        cout << "NO\n";
 
 
 
 
 
    return 0;
}