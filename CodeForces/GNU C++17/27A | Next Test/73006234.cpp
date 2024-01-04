#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 bool arr[3005] = {false};
 cin >> n;
 int nextTest = 1;
 int temp = 0;
 for(int i = 0; i < n; i++)
 {
  cin >> temp;
        arr[temp] = true;
        while(arr[nextTest])nextTest++;
 }
 cout << nextTest <<endl;
 
 return 0;
}