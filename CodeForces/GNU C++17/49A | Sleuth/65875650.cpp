#include <bits/stdc++.h>
using namespace std;
 
string konversi(string kata){
    string newKata;
    for (int i = 0; i < kata.length(); i++){
        if(kata[i] >= 65 && kata[i]<= 90){
            kata[i] += 32;
        }
        if(kata[i] >= 97 && kata[i] <= 122){
            newKata += kata[i];
        }
    }
    return newKata;
 
}
 
int main(){
 
    string kata;
    getline(cin , kata);
 
    kata = konversi(kata);
    //cout << kata << endl;
    if(kata[kata.length()-1] == 'y' || kata[kata.length()-1] == 'u' || kata[kata.length()-1] == 'o' || kata[kata.length()-1] == 'i' || kata[kata.length()-1] == 'e' || kata[kata.length()-1] == 'a'){
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
 
 
 
return 0;
}