#include<bits/stdc++.h>
using namespace std;
bool palindrome_check(int i, string s){

    if (i >= s.length()/2) return true;
    if (s[i] != s[s.length()-i-1]) return false;
    return palindrome_check(i+1, s);
    
}
int main(){
    string s;
    cout << "Enter the string: ";
    cin >>s;
    cout << "The string entered by you is: "<< s << endl;
    cout << palindrome_check(0, s);

    return 0;
}