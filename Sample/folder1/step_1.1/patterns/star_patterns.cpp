//Program for different types of star patterns
// Patterns
/* 
1.
*
* *
* * *
* * * *
* * * * *
    
2.
* * * * *
* * * *
* * *
* *
* 
3.
         *
       * *
     * * *
   * * * *
 * * * * *    
4.
* * * * *
  * * * *
    * * *
      * *
        *
5.
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
    
6.
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
    
7.
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
    
8.
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *  
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *    
9.
        *   
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *  
  * * * * * * *
    * * * * *
      * * *
        *    
    
10.
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
* 
    
11. 
         *
       * *
     * * *
   * * * *
 * * * * *
   * * * *
     * * *
       * *
         *
    
12.
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
13. 
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
14.
* * * * * 
*       *
*       *
*       *
* * * * *
*/

#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){

  for (int i = 0;i < n; i++){
    for (int j = 0;j<n;j++){
      cout<<"* ";
    }
    cout<<endl;
  }

}
void pattern2(int n){

  for(int i = 0;i<n;i++){
    
    for(int j = 0;j<=i;j++){

      cout<<"* ";
    }
    cout<<endl;
  }
}
void pattern3(int n){

  for(int i = 1;i<=n;i++){

    for(int j = 1;j<=i;j++){

      cout<< j <<" ";   
    }
    cout<<endl;
  }
}
void pattern4(int n){

  for(int i = 1;i<=n;i++){

    for(int j = 1;j<=i;j++){

      cout<< i <<" ";
    }
    cout<<endl;
  }
}
void pattern5(int n){

  for(int i = 0;i<n;i++){

    for(int j = 0;j<n-i;j++){

      cout<<"* ";
    }
    cout<<endl;
  }
}
void pattern6(int n){

  for(int i = 0;i<n;i++){

    for(int j = 1; j<=n-i ; j++){

      cout<< j <<" ";
    }
    cout<<endl;
  }
}
void pattern7(int n){

  for(int i = 0;i<n;i++){

    for(int j = 0;j<(n-i)-1;j++){

      cout<<"  ";
    }

    for(int j = 0; j<2*i+1;j++){

      cout<<"* ";
    } 
    cout<<endl;
  }
}
void pattern8(int n){

  for(int i = 0;i<n;i++){

    for(int j = 0;j<i;j++){

      cout<<"  ";
    }

    for(int j = 0; j<(2*(n-i)-1);j++){

      cout<<"* ";
    } 
    cout<<endl;
  }
}
void pattern9(int n){

  for(int i = 0;i<n;i++){

    for(int j = 0;j<(n-i)-1;j++){

      cout<<"  ";
    }

    for(int j = 0; j<2*i+1;j++){

      cout<<"* ";
    } 
    cout<<endl;
  }
  for(int i = 0;i<n;i++){

    for(int j = 0;j<i;j++){

      cout<<"  ";
    }

    for(int j = 0; j<(2*(n-i)-1);j++){

      cout<<"* ";
    } 
    cout<<endl;
  }
}
void pattern10(int n){

  for(int i = 0;i<n-1;i++){
    
    for(int j = 0;j<=i;j++){

      cout<<"* ";
    }
    cout<<endl;
  }
  for(int i = 0;i<n;i++){

    for(int j = 0;j<n-i;j++){

      cout<<"* ";
    }
    cout<<endl;
  }
}
void pattern11(int n){

  int no = 1;
  for(int i = 0;i<n;i++){
    
    if (i % 2 == 0) no = 1;
    else no = 0;
    for(int j = 0;j<=i;j++){
      
      cout<< no <<" ";
      no = 1 - no;
    }
    cout<<endl;
  }
}
void pattern12(int n){

  for (int i = 0; i<n;i++){

    int no1 = i+1;
    for (int j = 0; j<=i;j++){
      
      int no2 = j;
      cout<< ++no2<< " ";
    }
    for (int k = 0; k < (2*n)-(2*no1); k++){

      cout <<"  ";
    }
    for (int j = no1; j>0;j--){
      
      cout<< j<< " ";
    }
    cout<<endl;
  }
}
void pattern13(int n){

  int no = 1;
  for (int i = 0; i<n;i++){

    for (int j = 0; j<=i;j++){

      cout<<no<<" ";
      ++no;
    }
    cout<<endl;
  }
}
void pattern14(int n){

  for (int i = 0; i<n;i++){

    char ch = 'A';
    for (int j = 0; j<=i;j++){

      cout<<ch<<" ";
      ++ch;
    }
    cout<<endl;
  }
}
void pattern15(int n){

  for (int i = 0; i<n;i++){

    char ch = 'A';
    for (int j = i; j<n;j++){

      cout<<ch<<" ";
      ++ch;
    }
    cout<<endl;
  }
}
void pattern16(int n){

  char ch = 'A';
  for (int i = 0; i<n;i++){
   
    for (int j = 0; j<=i;j++){

      cout<<ch<<" ";
    }
    ++ch;
    cout<<endl;
  }
}
void pattern17(int n){

  for (int i = 0 ; i< n;i++){
    char ch = 'A';
    int no = i;
    for (int j = i; j< (n-1); j++){

      cout << "  ";
    }
    //ch = ch + 1;
    for (int k = 0 ; k<(2*i)+1;k++){
      
      cout<< ch <<" ";
      if (k<no) {
        ch = ch + 1;
      }
      else{
        ch = ch - 1;
      }
    }    
    cout<<endl;
  }
}
void pattern18(int n){
  
  for (int i = 0; i<n; i++){

    int no = n-1;
    char ch = 'A' + (no - i);
    for (int j = 0; j<=i;j++){

      cout<<ch<<" ";
      ch = ch + 1;
    }
    cout<<endl;
  }
}
void pattern19(int n){

  for (int i =0; i<n; i++){
      
    for (int j = i; j<n;j++){

      cout << "* ";
    }
    for (int j = 0; j < (2*i); j++){
      cout<<"  ";
    }
    for (int j = i; j < n; j++){
      cout<<"* ";
    }      
      
    cout<<endl;
  }
  for (int i =0; i<n; i++){
      
    for (int j = 0; j<=i;j++){

      cout << "* ";
    }
    for (int j = 0; j < (2*(n-i) - 2); j++){
      cout<<"  ";
    }
    for (int j = 0; j<=i;j++){

      cout << "* ";
    }       
    cout<<endl;
  }
  
}
void pattern20(int n){

  for (int i =0; i<n; i++){
      
    for (int j = 0; j<=i;j++){

      cout << "* ";
    }
    for (int j = 0; j < (2*(n-i) - 2); j++){
      cout<<"  ";
    }
    for (int j = 0; j<=i;j++){

      cout << "* ";
    }       
    cout<<endl;
  }
  for (int i =1; i<n; i++){
      
    for (int j = i; j<n;j++){

      cout << "* ";
    }
    for (int j = 0; j < (2*i); j++){
      cout<<"  ";
    }
    for (int j = i; j < n; j++){
      cout<<"* ";
    }      
      
    cout<<endl;
  }
  
}
void pattern21(int n){

  for (int i = 0;i<n;i++){

    for (int j = 0; j<n;j++){

      if (i==0 || i == (n-1)) cout<<"* ";
      else {
        if (j == 0 || j == (n-1)) cout<<"* ";
        else cout<< "  ";
      }
    }
    cout<<endl;
  }
}
void pattern22(int n){
    for (int i = 0; i<2*n-1;i++){
      
      for (int j = 0 ; j<2*n-1;j++){

        int top = j;
        int left = i;
        int right = 2*n - 2 - j;
        int bottom = 2*n - 2 - i;
        cout<< n  - min(min(top,left),min(right,bottom))<<" ";
      }
      cout<<endl;
    }
}
int main()
{
    int n = 5;
    //cout<<"Enter the no of rows: ";
    //cin>>n;
    pattern22(n);
    return 0;
}