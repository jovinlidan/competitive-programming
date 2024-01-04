#include <bits/stdc++.h>
 
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, i, m, j, countRow=0, countCol = 0, idxRow=0, idxCol=0;
    char board[120][120] = {};
    cin >> n >>m;
 
    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            cin >> board[i][j];
            if(board[i][j] == 'B' && idxRow == 0 && idxCol == 0){
                idxRow = i;
                idxCol = j;
 
            }
            if(i == idxRow){
                if(board[idxRow][j] == 'B' ){
                countRow++;
                }
            }
            if(j == idxCol){
                if(board[i][idxCol]== 'B'){
                countCol++;
                }
            }
 
 
 
 
 
 
        }
    }
    cout << ((idxRow + countRow - 1) + idxRow) / 2 << " " << ((idxCol + countCol  - 1) + idxCol) / 2 << endl;
 
 
 
 
}