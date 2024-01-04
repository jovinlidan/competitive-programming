#include <bits/stdc++.h>
using namespace std;
int main(){
    int q, n,i, j, a, total = 0;
    cin >> q;
 
    for(i = 0; i < q ; i++){
        cin >> n;
        total = 0;
        for(j = 0; j < n; j++){
            cin >> a;
            total += a;
 
        }
        if(total % n != 0){
            cout << (total/n) + 1 << endl;
        }else
            cout << (total/n) << endl;
 
 
    }
 
 
 
 
 
 
 
return 0;
}