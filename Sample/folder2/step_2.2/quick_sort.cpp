#include<bits/stdc++.h>
using namespace std;

int partition(int s, int e, int arr[]){

    int pIndex = s;
    int i = s, j = e;
    while (i<j)
    {
        while (arr[i] <= arr[pIndex] && i <= e-1){        
            
            i++;
        }
        while (arr[j] > arr[pIndex] && j >= s+1){

            j--;
        }
        if (i < j){
            
            swap(arr[i], arr[j]);
        }        
    }
    swap(arr[s], arr[j]);
    return j;
}

void quick_sort(int s, int e, int arr[]){

    if (s < e) {
    unsigned int partition_Index = partition(s, e, arr);
    quick_sort(s, partition_Index-1, arr);
    quick_sort(partition_Index+1, e, arr);
    }
    return;
}

int main(){

    int n = 8, arr[n] = {4,6,2,5,7,9,1,3};
    //cout << "1" << endl;

    cout << "Before Sorting: ";
    for (int i = 0; i<n; i++) cout<< arr[i] << " ";
    cout << endl;
    quick_sort(0, n-1, arr);

    cout <<endl << "After Sorting: ";
    for (int i = 0; i<n; i++) cout<< arr[i] << " ";

    return 0;
}

/*
Explanation
arr	    {4,6,2,5,7,9,1,3}
index	(0,1,2,3,4,5,6,7)
	1 -> i=0 j=7 value=4
		=> i=0 -> i=1
		=> j=7
	swap{4,3,2,5,7,9,1,6}
		(0,1,2,3,4,5,6,7)
		
	2 -> i=1 j=7 value=4
		=> i=1 -> i=2 -> i=3
		=> j=7 -> j=6
	swap{4,3,2,1,7,9,5,6}
		(0,1,2,3,4,5,6,7)
		
	3 -> i=3 j=6 value=4
		=> i=3 -> i=4
		=> j=6 -> j=5 -> j=4 -> j=3
		i>j no_swap
	
	swap{1,3,2,4,7,9,5,6}
		(0,1,2,3,4,5,6,7)

p_index = 3	
----------------------------------
LEFT
		arr 	{1,3,2}
		index	(0,1,2)
			1-> i=0 j=2 value=1
				=> i=0 -> i=1
				=> j=2  -> j=1 -> j=0
				i>j no_swap

		swap{1,3,2}
			(0,1,2)
			
		p_index = 0
		-------------------------------
		from index 1 -> 2

		arr 	{3,2}
		index	(1,2)
			1 -> i=1 j=2 value=3
				=> i=1 -> i=2
				=> j=2
				i=j no_swap
				
		swap{2,3}
			(1,2)

----------------------------------
RIGHT

		arr		{7,9,5,6}
		index	(4,5,6,7)
			1 -> i=4 j=7 value=7
				=> i=4 -> i=5
				=> j=7
				swap{7,6,5,9}
					(4,5,6,7)
					
			2 -> i=5 j=7 value=7
				=> i=5 -> i=6 -> i=7
				=> j=7 -> j=6
				i>j no_swap
			
			swap{5,6,7,9}
				(4,5,6,7)
				
		p_index=6
*/