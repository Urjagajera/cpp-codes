#include<iostream>
using namespace std;

int product(int a,int b){
            // a and b is actual parameters which will take values from actual para meters x and y
int c= a*b;
return c;
}


int main () {

 int x ,y ,c ;
       //here x and y is actual parameters

    cout << "Enter num 1 :" ;
    cin >> x;
    cout << "Enter num 2 :" ;
    cin >> y;

    c = product(x , y);       // insted of using line 21 22 we can write-->  cout << " product is " <<  c = product(x , y)  ;
cout << " product is " << c ;
            
return 0;    
}
