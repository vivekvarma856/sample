#include<bits/stdc++.h>
using namespace std;

void create_array(int arr_size, int arr[]){

    cout<< "Enter the " << arr_size << " elements of the array: " << endl;
    for (int i = 0; i<arr_size;i++) cin >> arr[i];
    cout<<"The " << arr_size << " elements in the array is: " ;
    for (int i = 0; i<arr_size;i++) cout << arr[i] << " ";
    cout << endl;
    return;

}

int main(){

    int arr_size, element;
    cout << "Enter the size of the array: ";
    cin>>arr_size;
    int arr[arr_size] = {0};
    create_array(arr_size, arr);

    int hash_arr[arr_size+1] = {0};
    for (int i : arr){ /* i is the variable that goes through the entire range of array
                         and directly holds the value present at inde x  */
        hash_arr[i]++;
    }
    cout << "Enter the element to find its frequencey in the array: ";
    cin >> element;
    cout<< "The frequency of " << element << " in array is: " <<hash_arr[element];

    return 0;
}