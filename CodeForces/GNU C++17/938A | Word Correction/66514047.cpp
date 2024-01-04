#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    string kata;
    bool isVowel = false;
 
    cin >> n >> kata;
    for(i = 0; i < n; i++){
        if(kata[i] == 'a'||kata[i] == 'e' || kata[i] == 'i'  || kata[i] == 'o'  || kata[i] == 'u' ||kata[i] == 'y' ){
            if(!isVowel){
                isVowel = true;
                cout << kata[i];
            }
        }else{
            cout << kata[i];
            isVowel = false;
        }
    }
 
 
 
 
    return 0;
}