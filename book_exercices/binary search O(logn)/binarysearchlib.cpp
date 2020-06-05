#include <bits/stdc++.h>

using namespace std; 

int binary_search_ocurrences_of_the_number1(int arr[], int size, int element){
    auto a = lower_bound(arr, arr + size, element); // lower to element - return pointer 
    auto b = upper_bound(arr, arr + size, element); // upper to element - return pointer
    return b - a; // this subtraction return the number of ocurrence of x in the array
}

int binary_search_ocurrences_of_the_number2(int arr[], int size, int element){
    auto r = equal_range(arr, arr + size, element); // return two pointers of lower and upper occurrence
        
    return r.second - r.first; // this subtraction return the number of ocurrence of x in the array
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
    printf("upper_lower: %d\n", binary_search_ocurrences_of_the_number1(arr, 10, 2));
    printf("equal_range: %d\n", binary_search_ocurrences_of_the_number2(arr, 10, 2)); 
}
