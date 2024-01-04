#include <bits/stdc++.h>
using namespace std;
 
int tiredCounts(int move);
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n, i, a, b, hasil = 0;
 
    cin >> a >> b;
    if( abs(a - b) % 2 != 0){
        hasil = tiredCounts(abs(a - b) / 2) + tiredCounts((abs(a - b) / 2)+ 1);
    }
    else{
        hasil = tiredCounts(abs(a - b) / 2) + tiredCounts((abs(a - b) / 2));
    }
 
    cout << hasil << endl;
 
 
 
 
return 0;
}
 
int tiredCounts(int move){
    int result=0;
    while(move > 0){
        result += move;
        move--;
    }
    return result;
}