#include <bits/stdc++.h>

using namespace std;

void merge(int s, int e, int m, int a[]){
    
    vector<int> temp;
    int left = s, right = m+1;
    
    while(left <= m && right <= e){
        if(a[left] < a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left <= m){
        temp.push_back(a[left]);
        left++;
    }
    while(right <= e){
        temp.push_back(a[right]);
        right++;
    }
    for (int i = s; i<=e; i++){
        a[i] = temp[i-s];
    }
    temp.clear();
    return;
    
}
void merge_sort(int s, int e, int arr[]){
    
    if (s >= e) return;
    int mid = (s+e)/2;
    merge_sort(s, mid, arr);
    merge_sort(mid+1, e, arr);
    merge(s, e, mid, arr);
    return;
}



int main()
{

    int n = 5, arr[n] = {12,4,33,222,1};
    cout << "Before Soting: ";
    for (int i = 0; i<n; i++) cout<< arr[i] << " ";
    merge_sort(0, n-1, arr);
    cout <<endl << "After Sorting: ";
    for (int i = 0; i<n; i++) cout<< arr[i] << " ";
    return 0;
}
