#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 string song, wub = "WUB";
 int i, j, counts = 0;
 cin >> song;
 
 for (i = 0; i < song.length(); i++)
 {
  
  if (song[i] != wub[counts]) {
   counts = 0;
  }
  if (song[i] == wub[counts]) {
   counts++;
   //cout << song[i] << counts << endl;
  }
  /*else {
   counts = 0;
  }*/
  if (counts == 3) {
   song[i] = NULL;
   song[i - 1] = NULL;
   song[i - 2] = NULL;
   counts = 0;
 
  }
 }
 
 
 for (i = 0; i < song.length(); i++)
 {
  if (song[i] != NULL) {
   cout << song[i];
   
   
  }
  if (i > 0) {
   if ((song[i - 1] != NULL) && (song[i] == NULL)) {
    cout << " ";
   }
  }
 }
 cout <<  endl;
 
 
 
 
 
 
 return 0;
}