/*
1. Largest element in an array
2. Second largest element in array
3. Check if array is sorted
*/


#include<bits/stdc++.h>
using namespace std;

void largestelement(int arr[], int arrsize){

    int largest = -1;
    for(int i =0; i<arrsize; i++){
        if (arr[i] > largest){

            largest = arr[i];
        }
    }
    cout << "\nLargest element in array is: " << largest << endl;
}
void secondlargestelement(int arr[], int arrsize){

    int largest = arr[0], slargest = -1;
    for(int i =0; i<arrsize; i++){
        if (arr[i] > largest){

            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest) slargest = arr[i];
    }
    cout << "\nSecond Largest element in array is: " << slargest << endl;
}
void checksortedarray(int arr[], int arrsize){

    for (int i =1; i<arrsize; i++){
        if (arr[i] < arr[i-1]){
            cout<< "\nArray is unsorted";
            break;
        }
        else if (i == (arrsize-1)) {
            cout << "\nArray is sorted";
        }
    }
    
    return;
}
void removeduplicates(int arr[], int arrsize){

    
    return;
}
int main(){

    int arrsize = 6, arr[arrsize] = {1,2,3,3,4,5}; 
    cout << "Elements in the array are: " << endl;
    for(int i = 0; i<arrsize; i++) cout << arr[i] << " ";
    checksortedarray(arr, arrsize);
    return 0;
}