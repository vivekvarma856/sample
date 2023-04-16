#include<bits/stdc++.h>
using namespace std;
int cnt = 1, total = 1;
void print_names_n_times(int n){

    if (1 > n) return;
    cout<< "Vivek"<<endl;
    print_names_n_times(n-1);
    return;
}
void print_1_to_n(int cnt, int n){

    if (cnt > n) return;
    cout<< cnt << " ";
    print_1_to_n(cnt+1, n);
    return ;
}
void print_n_to_1(int cnt, int n){

    if (cnt > n) return;
    cout<< n << " ";
    print_n_to_1(cnt, n-1);
    return ;
}
void sum_1_to_n(int cnt,int n){
    // Make sure to check the value of global variables  cnt and total is 0 and 0.

    if (cnt > n) {

        cout<< "Sum of " << n << " numbers is : " << total;
        return;
    }
    total = total + cnt;
    sum_1_to_n(cnt+1, n);
    return ;    
}
void factorial_of_n(int cnt,int n){
    // Make sure to check the value of global variables cnt and total is 0 and 1 when n > 0.
    // Program to find the nth factorial number in the sequence
 
    if (cnt > n){

        cout<< "Factorial of " << n << " is : " << total;
        return;
    }
    else if (n == 0 || n == 1){
        cout<< "Factorial of " << n << " is 1 ";
        return;
    } 
    total = total * cnt;
    factorial_of_n(cnt+1, n);
    return ;    
}

int main(){

    int n = 5;
    // choose the action you want to perform and 
    //call the function with appropriate functions
    return 0;
}
