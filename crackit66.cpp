#include<iostream>
using namespace std;
int main(){
    for (int i = 2; i <= 11; i++) {
        cout << "\nMultiplication Table of " << i << endl;
         for (int j = 1; j <= 10; j++) 
        {
             cout << i << " x " << j << " = " << i * j << endl; 
        } }
    }
