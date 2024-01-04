#include <bits/stdc++.h>
using namespace std;
int i, j;
char konversi(std::string key1, string key2,char huruf) {
 for (i = 0; i < 26; i++)
 {
  if (huruf == key1[i] || huruf == key1[i]-32 || huruf == key1[i]+32) {
   if (huruf >= 65 && huruf <= 90) {
    if (key2[i] >= 97 && key2[i] <= 122) {
     return key2[i]-32;
    }
    else {
     return key2[i];
    }
   }
   else if (huruf >= 97 && huruf <= 122) {
    if (key2[i] >= 65 && key2[i] <= 90) {
     return key2[i] + 32;
    }
    else {
     return key2[i];
    }
   }
    
  }
 }
 return huruf;
 
}
 
int main() {
 string key1, key2, word, newWord;
 int i, length;
 cin >> key1 >> key2 >> word;
 length = word.length();
 for (i = 0; i < length; i++)
 {
  newWord += konversi(key1, key2, word[i]);
 }
 cout << newWord << endl;
 return 0;
}