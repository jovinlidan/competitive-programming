#include <bits/stdc++.h>
using namespace std;
 
 
bool palindrom(string kata){
    int i=0, j= kata.length()-1;
    while(i < j){
        if(kata[i] != kata[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
 
int main(){
    string kata;
    int i, counts=0, ans=0, T;
    cin >> T;
 
    for(i = 0 ; i < T; i++){
        cin >> kata;
        bool pal = true;
        char temp;
        if(palindrom(kata)){
            for(int j = 1; j < kata.length(); j++){
                if(kata[j-1] != kata[j]){
                    temp = kata[j-1];
                    kata[j-1] = kata[j];
                    kata[j] = temp;
                    pal = false;
                    break;
                }
            }
            if(pal) cout << -1 << endl;
            else cout << kata << endl;
 
 
        }else{
            cout << kata << endl;
 
        }
 
    }
 
 
 
 
return 0;
}