#include<bits/stdc++.h>
using namespace std;


int countDigits(int n){

    int copy = n, count = 0;
    while (copy > 0){
        copy = copy / 10;
        count  = count +1;
    }
    cout << "No of digits in "<<n <<" is : "<<count;
    return 0;
}
int reverseAnumber(int n){
    int copy = n, new_num = 0;
    while (copy > 0){
        int remainder = copy % 10;
        copy = copy / 10;
        new_num = (new_num * 10) + remainder; 
    }
    cout<< " Reverse of "<<n<<" is : "<<new_num;
    return 0;
}
int checkPalindrome(int n){
    int copy = n, new_num = 0;
    while (copy > 0){
        int remainder = copy % 10;
        copy = copy / 10;
        new_num = (new_num * 10) + remainder; 
    }
    if (new_num == n) cout<< n<<" is a Pallindrome.";
    else cout<< n << " is not a Pallindrome.";
    //cout<< " Reverse of "<<n<<" is : "<<new_num;
    return 0;
}
int gcd_hcf(int no1, int no2){

    cout<<"Inside function"<<endl;
    int hcf = 0;
    for (int i = 1; i <= min(no1, no2); i++){
        
        if (no1 % i ==0 && no2 % i == 0) hcf = i;
    }
    cout << "GCD/HCF of "<< no1 << " and "<< no2 << " is : "<< hcf;
    return 0;
}
int armstrongnNoCheck(int n){
    int copy = n, new_num = 0;
    while (copy > 0){
        int remainder = copy % 10;
        copy = copy / 10;
        new_num = (new_num ) + (remainder*remainder*remainder); 
    }
    if (new_num == n) cout<< n << " is a Armstrong number.";
    else cout << n << " is a not a Armstrong number.";
    return 0;
}
int allDivisors(int n){
    
    vector<int> divisorss;
    int remainder;
    for (int i = 1; i<=sqrt(n); i++){

        if (n % i == 0){
            divisorss.vector::push_back(i);
            remainder = n / i;
            divisorss.vector::push_back(remainder);
        }
    } 
    sort(divisorss.begin(), divisorss.end());
    for (auto i = divisorss.begin(); i != divisorss.end(); i++){
        cout<< *i<<" ";
    }
    return 0;
}
int primeCheck(int n){
    int remainder, count = 0;
    for (int i = 1; i<=sqrt(n); i++){

        if (n % i == 0){
            count++;
            remainder = n / i;
            if (remainder == n) {
                count++;
            }
        }
    } 
    if (count == 2) cout<<n<<" is a Prime Number";
    else cout << n << " is not a Prime Number.";
    return 0;    
}
int main(){

    int no1 = 12;
    primeCheck(no1);

    return 0;
}