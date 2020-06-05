#include <bits/stdc++.h>

using namespace std; 

int binary_search(int arr[], int element, int size){
  int k = 0, index = -1;
  if (arr[0] == element) return index = 0;  
  for (int b = size/2; b >= 1; b /= 2) {
  while (k+b < size && arr[k+b] <= element) k += b;
  }
    if (arr[k] == element) {
      index = k;
    }
  return index; 
}

int main(){   
    //make cin and cout faster (flush operation); 
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int arr[10]; int v;
    for(int i = 0; i < 10; ++i){
        cin >> v;
        arr[i] = v; 
    }
    sort(arr, arr + 10);
    for (int i = 0; i < 10; i++)
      printf("%d ", arr[i]); 
      cout << "\n";
    printf("%d", binary_search(arr, 2, 10)); 
}
