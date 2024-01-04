#include <bits/stdc++.h>
using namespace std;
int main(){
    int y, b ,r, i, counts=0, ans=0, mn=0;
    cin >> y >> b >> r;
    mn = min(y, min(b,r));
 
    while(true){
        if(r-1 <= b && r-2 <= y){
            cout << r+r-1+r-2 << endl;
            break;
        }else{
            r--;
        }
 
 
    }
 
 
 
 
 
 
return 0;
}