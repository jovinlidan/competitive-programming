#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int i, a, b, total=0 ,mx;
    cin >> a >> b;
    mx = min(a, b);
    for (i = 1; i <= mx+1 ;i++){
 
        if(i % 2 == 1){
            if(i > a || a == 1 && b > 1){
 
                cout << "Vladik\n";
                break;
            }
            a -= i;
        }
        else{
            if(i > b || b == 1 && a > 1){
 
                cout << "Valera\n";
                break;
            }
             b-=i;
        }
 
 
    }
 
 
 
 
    return 0;
}