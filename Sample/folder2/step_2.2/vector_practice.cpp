#include <bits/stdc++.h>

using namespace std;

int main()
{   
    //declaring two temo vectors
    vector<int> temp1 = {1,2,33,4,55,6}, temp2 = {77,8,99};
    
    cout<< "Before merging temp1 is: " << endl;
    for(int i = 0; i < temp1.size(); i++ ) cout << temp1[i] << " ";
    
    cout<< endl << "Before merging temp2 is: " << endl;
    for(int i = 0; i < temp2.size(); i++ ) cout << temp2[i] << " ";
    
    //merging
    temp1.insert(temp1.end(), temp2.begin(), temp2.end());

    //printing merged temp1
    cout<< endl <<  "after merging temp1 is: " << endl;
    for(int i = 0; i < temp1.size(); i++ ) cout << temp1[i] << " ";
    
    return 0;
}
