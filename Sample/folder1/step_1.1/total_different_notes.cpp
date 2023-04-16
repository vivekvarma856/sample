// Enter the amount for which you want to know the amoount of 100, 50, 20, 10, 1 notes required
#include<iostream>

using namespace std;

int main()
{
    int amount, remainder, hundred_notes, fifty_notes, twenty_notes, ten_notes, one_notes;
    cout << "Enter the amount : " ;
    cin >> amount;
    cout << endl;
    hundred_notes = amount/100;
    remainder = amount%100;
    fifty_notes = remainder/50;
    remainder = remainder%50;
    twenty_notes = remainder/20;
    remainder = remainder%20;
    ten_notes = remainder/10;
    remainder = remainder%10;
    one_notes = remainder/1;
    remainder = remainder%1;
    cout << "Number of 100 notes required is : " << hundred_notes << endl;
    cout << "Number of 50 notes required is : " << fifty_notes << endl;
    cout << "Number of 20 notes required is : " << twenty_notes << endl;
    cout << "Number of 10 notes required is : " << ten_notes << endl;
    cout << "Number of 1 notes required is : " << one_notes << endl;

    return 0;
}