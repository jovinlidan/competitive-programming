#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 string angka[21] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen"};
 string depan[10]= {};
 depan[3] = "thirty";
 depan[4] = "forty";
 depan[5] = "fifty";
 depan[6] = "sixty";
 depan[7] = "seventy";
 depan[8] = "eighty";
 depan[9] = "ninety";
 cin >> n;
 if(n == 18)
 {
  cout << "eighteen\n";
  return 0;
 }
 if(n >= 0 && n <= 15) cout << angka[n] << endl;
 else if(n >= 16 && n <= 19) cout << angka[n%10] << "teen\n";
 else if(n == 20) cout << "twenty\n";
 else if(n > 20 && n < 30) cout << "twenty-" << angka[n % 10] << endl;
 else if(n >= 30 && n <= 99)
 {
 
  if(n%10 == 0) cout << depan[n/10];
  else cout << depan[n/10] << "-" << angka[n%10] << endl;
 }
 
 
 
 
 
 
 
 
 
 return 0;
}