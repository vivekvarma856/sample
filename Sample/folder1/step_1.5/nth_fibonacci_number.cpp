#include<bits/stdc++.h>
using namespace std;
int f(int n){

    if (n==0 || n==1){
        return n;
    }
    return f(n-1)+f(n-2);
}
int main(){

    int n;
    cout << "Enter the nth fibinacci number you want to find in the sequence: ";
    cin >> n;
    cout<< n << "th fibonacci number in the sequence is: " << f(n);
    return 0;
}