#include <bits/stdc++.h>
using namespace std;
 
int arr[100005]={} , first, last, mid;
int N;
 
int binaryLeft(int key){
 first = 0;
 last = N-1;
 mid = (first+last)/2;
 while(first <= last){
  if(arr[mid] >= key){
   if(mid ==0 )return mid;
   else{
    if(arr[mid-1] < key) return mid;
   }
  }
  if(arr[mid] > key){
   last = mid-1;
   mid = (first + last)/2;
  }else if(arr[mid] <= key){
   first = mid+1;
   mid = (first+last)/2;
  }
 
 }
 return -1;
}
 
int binaryRight(int key){
 first = 0;
 last = N-1;
 mid = (first+last)/2;
 while(first <= last){
  if(arr[mid] <= key){
   if(mid == N-1 )return mid;
   else{
    if(arr[mid+1] > key) return mid;
   }
  }
  if(arr[mid] > key){
   last = mid-1;
   mid = (first + last)/2;
  }else if(arr[mid] <= key){
   first = mid+1;
   mid = (first+last)/2;
  }
 
 
 }
 return -1;
 
 
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin >> N;
    for(int i =0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N);
    int x, keys;
    cin >> x;
    while(x--){
        cin >> keys;
        if(binaryRight(keys) == -1) cout << 0 << endl;
        else cout << 1+binaryRight(keys) << endl;
 
    }
 
 
 
    return 0;
}