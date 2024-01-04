#include <bits/stdc++.h>
 
 
using namespace std;
 
 
int main() {
 
 int n, i, policeLeft = 0, howmuchCrime=0, events;
 
 cin >> n;
 
 for (i = 0; i < n; i++)
 {
  cin >> events;
  if (events < 0) {
   if (policeLeft == 0) {
    howmuchCrime += events;
   }
   else if (policeLeft > events) {
    policeLeft -= abs(events);
   }
   else if (policeLeft < events) {
    events += policeLeft;
    howmuchCrime += events;
 
   }
   
  }
  else if(events > 0) {
   policeLeft += events;
  }
 }
 
 cout << abs(howmuchCrime) << endl;
 
 
 
 
 
 
 
 
 
 return 0;
}