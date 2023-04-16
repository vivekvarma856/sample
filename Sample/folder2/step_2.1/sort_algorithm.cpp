#include<bits/stdc++.h>
using namespace std;

void selection_sort(int n, int arr[]){

    cout << "Sorting is done using selection sort algorithm." << endl;
    for (int i=0; i<n-1; i++){
        int minm = i;
        for (int j = i; j<n; j++){

            if (arr[j] < arr[minm]) minm = j;
        }
        swap(arr[i], arr[minm]);
    }
    return;
}
void bubble_sort(int n, int arr[]){

    cout << "Sorting is done using bubble sort algorithm." << endl;
    for (int i=n ; i>0; i--){

        for(int j=0; j<i-1; j++){

            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
    return;
}
void insertion_sort(int n, int arr[]){
    
    cout << "Sorting is done using insertion sort algorithm." << endl;
    for (int i = 0 ; i < n-1; i++){

        int j = i;
        while(j>=0 && arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            --j;
        }
    }
}
int main(){

    int arr_size;
    cout << "Enter the size of the array: ";
    cin >> arr_size;

    int arr[arr_size] = {0};
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i<arr_size;i++){
        cin >> arr[i];
    }
    cout << "The array before sorting is: " << endl;
    for (int i = 0; i<arr_size;i++) cout << arr[i] << " ";    
    cout << endl;
    insertion_sort(arr_size, arr);

    cout << "The array after sorting is: " << endl;
    for (int i = 0; i<arr_size;i++) cout << arr[i] << " ";
    return 0;
}