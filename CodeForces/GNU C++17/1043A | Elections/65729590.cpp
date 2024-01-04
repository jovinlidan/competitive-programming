#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i, counts=0, n, data[105], maxs = -1e9, totalWin = 0, totalLose=0;
 
    cin >> n;
    for(i = 0; i < n ;i++){
        cin >> data[i];
        maxs = max(maxs, data[i]);
 
    }
    for(i = 0; i < n ;i++){
        totalWin += (maxs - data[i]);
        totalLose += data[i];
    }
 
    while(totalWin <= totalLose){
        totalWin += n;
        maxs++;
    }
 
    cout << maxs << endl;
 
 
 
 
 
 
 
 
}
 
 
 