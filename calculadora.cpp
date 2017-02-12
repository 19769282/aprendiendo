#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
int num1, num2, res;
cout << “Ingrese el numero 1: ”;
cin >> num1;
cout << “ingrese el numero 2: ”;
cin >> num2;
res = num1+num2;
cout << “La suma de ” << num1 << “ + “ << num2 << “ es “ << res;
res = num1-num2;
cout << “La resta de ” << num1 << “ - “ << num2 << “ es “ << res;
res = num1 / num2;
cout << “La división de ” << num1 << “ entre “ << num2 << “ es “ << res;
res = num1*num2;
cout << “La multiplicación de ” << num1 << “ x “ << num2 << “ es “ << res;
return 0;
}
