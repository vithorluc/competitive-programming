#include <bits/stdc++.h>

//g++ -std=c++11 -O2 -Wall a.cpp -o a

using namespace std; 
// array vazios são permitidos, logo, o valor minimo é zero;

void maximum_subarray_sum(int arr[], int n){
  int best = 0, sum = 0;
  for(int a = 0; a < n; a++){     
      sum = max(arr[a], sum + arr[a]);       
      best = max(best, sum);
  }
 cout << best << "\n";        
}

int main(){        
  ios::sync_with_stdio(0);
  cin.tie(0); 
  int value, size; 
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++){
    cin >> value;
    arr[i] = value;
  } 
  maximum_subarray_sum(arr, size);
}    

