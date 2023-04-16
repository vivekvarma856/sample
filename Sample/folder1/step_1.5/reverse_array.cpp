#include<bits/stdc++.h>
using namespace std;

void reverse_array(int i,int arr[], int size){
    
    if (i >= size/2) return ;
    swap(arr[i], arr[size-i-1]);
    reverse_array(i+1, arr, size);

    return ;
}
int main(){

    int arr_size = 0;
    cout<<"Enter the size of the array: ";
    cin>> arr_size;
    int arr[arr_size] = {0};
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i<arr_size; i++) cin >> arr[i];
    cout<<"The elements in the array before reversing are in the order: " << endl;
    for (int i = 0; i<arr_size; i++) cout << arr[i] << " ";
    cout<< endl;
    reverse_array(0, arr, arr_size);
    cout<<"The elements in the array after reversing are in the order: " << endl;
    for (int i = 0; i<arr_size; i++) cout << arr[i] << " ";
    return 0;
 }
