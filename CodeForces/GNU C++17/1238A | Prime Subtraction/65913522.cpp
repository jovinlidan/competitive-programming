#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int T, i, j, x, y, counts=0, ans=0;
    cin >> T;
    for(i = 0; i < T; i++){
        cin >> x >> y;
        ans = x - y;
        if(ans == 1){
            cout << "NO\n";
        }else{
        cout << "YES\n";
        }
 
 
    }
 
return 0;
}