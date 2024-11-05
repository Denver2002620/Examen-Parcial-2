#include<iostream>
#include <algorithm>
#include "ejercicio4.h"
int main ()
    {
  int a,b,c;//declarar los variables delos articulos
  int v=0;//en el que vamos a poner el precio total
  //luego vamos a pedir al utilizador de poner los precios un por uno
std::cout<<"pon el precio del primer articulo";
std::cin>>a;
std::cout<<"pon el precio del segundo articulo";
std::cin>>b;
std::cout<<"pon el precio del tercero articulo";
std::cin>>c;
 v   =calcularTotal(a,b,c);//llamar function para calcular el precio total y ponerlo en un variable v
    }
