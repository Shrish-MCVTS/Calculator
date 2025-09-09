/*
Shrish Kushwaha
Calculator
9/09/25
Adding cmath library and used an if statement to stop divinding by 0
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float num1;
    float num2;
    int num1int;
    int num2int;
    float sum;
    float difference;
    float product;
    float quotient;
    float mod;

cout << "Hello" << endl;
cout << "Please give me 1 number" << endl;
cin >> num1;
cout << "Please give me another number" << endl;
cin >> num2;
num1int = static_cast<int>(round(num1));
num2int = static_cast<int>(round(num2));
sum = num1 + num2;
cout << "The sum is..." << endl;
cout << sum << endl;
difference = num1 - num2;
cout << "The difference is..." << endl;
cout << difference << endl;
product = num1*num2;
cout << "The product is..." << endl;
cout << product << endl;
if(num2!=0){
quotient = num1/num2;
cout << "The quotient is..." << endl;
cout << quotient << endl;
}else{
   cout << "You can't divide by 0!" << endl; 
}
++num1;
cout << "The first number incremented is..." << endl;
cout << num1 << endl;
--num2;
cout << "The second number decremented is..." << endl;
cout << num2 << endl;
mod = num1int%num2int;
cout << "The modulus is..." << endl;
cout << mod << endl;
cout << "You can't talk the modulas of zero" << endl;
    return 0;
}
