#include<iostream>
using namespace std;

//Function prorotype
// Syntax-->  data type function name (argument);

int sum(int a,int b);// acceptable
int sum(int a, b);//  not acceptable
int sum(int , int);//  not acceptable

// we can  define the actual function later in the code file

int main () {

int a ,b ,c ;
    cout << "Enter num 1 :" ;
    cin >> a;
    cout << "Enter num 2 :" ;
    cin >> b;

    c = sum(a , b);
    cout << "Sum is " << c ;
               // insted of line 21 22 we can write-->  cout << "sum is : << sum(a,b);

return 0;
}

int sum(int a,int b)
{
   int c= a+b;
   return c;
}

