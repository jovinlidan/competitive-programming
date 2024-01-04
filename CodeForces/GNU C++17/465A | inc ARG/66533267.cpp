#include <bits/stdc++.h>
using namespace std;
 
string solve(string bit){
    string newKata;
    int temp, last=0;
    for(int i = 0; i < bit.length(); i++){
        temp = int(bit[i] - 48);
        if(i == 0){
            temp += 1;
        }
        temp += last;
        last = max(0, temp-1);
 
        if(temp == 2 || temp == 0){
            newKata += '0';
        }else if(temp == 1){
            newKata += '1';
        }
    }
    return newKata;
 
}
 
 
int main(){
 
    int n, i, cnt=0;
    string kata, kataBaru;
    cin >> n;
    cin >> kata;
 
    kataBaru = solve(kata);
    for(i = 0; i < n; i++){
        if(kata[i] != kataBaru[i])cnt++;
    }
    cout << cnt <<endl;
 
 
 
    return 0;
}
 