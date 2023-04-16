//Program contains different functions that can be used 
//for different purposes in an array
#include<iostream>

using namespace std;

void createarray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    return;
}

void printarray(int arr[], int size)
{   
    cout << "Elements of the array are : " << endl;

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}
int main()
{
    cout << "Inside the main function" << endl;
    
    //declaring an array
    int arr[1000] = {0}, size;
    
    //asking the size of array from user
    cout << "Enter the size of array : " ;
    cin >> size;

    //asking the elements of tthe array from user
    cout << "Enter the Elements of the array : " << endl;
    createarray(arr, size);
    
    //printing the array user created 
    char print_answer;
    cout << "Do you want to print the array (Y/N) : " ;
    cin >> print_answer;
    if(print_answer == 'Y')
    {
        printarray(arr, size);
    } 

    return 0;

}