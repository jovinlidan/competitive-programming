#include <bits/stdc++.h>
using namespace std;
int N, X, temp, arr[200005] = {}, cnt=1, first, last , mid;
 
int binaryLeft(int key){
 first = 1;
 last = cnt-1;
 mid = (first+last)/2;
 while(first <= last){
  if(key >= arr[mid] && mid % 2 == 1){
            if(arr[mid+1] >= key){
                return mid;
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
 first = 1;
 last = cnt-1;
 mid = (first+last)/2;
 while(first <= last){
  if(key <= arr[mid] && mid % 2 == 0){
            if(arr[mid-1] <= key){
                return  mid;
 
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
 
 
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> temp;
        arr[cnt] = arr[cnt-1] + 1;
        arr[cnt+1] = arr[cnt] + temp -1;
        cnt+=2;
    }
//    for (int i = 1 ; i < cnt ; i++){
//        cout << arr[i] << " ";
//    }
//    cout << endl;
    cin >> X;
 
    for(int i =0; i < X; i++){
        cin >> temp;
        cout << binaryRight(temp)/2 << endl;
    }
 
 
 
 
 
 
 
    return 0;
}