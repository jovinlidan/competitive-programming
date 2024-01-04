#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, i, j;
    cin >> n >> k;
 
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j){
                cout << k;
            }else cout << 0;
            if(j != n-1) cout << " ";
        }
        cout << endl;
    }
 
 
 
 
 
 
 
 
return 0;
}