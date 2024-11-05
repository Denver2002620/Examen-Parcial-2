//
// Created by Usuario on 11/5/2024.
//

#ifndef EJERCICIO4_H
#define EJERCICIO4_H



    double calcularTotal(double precio1, double precio2, double precio3) {
        // Crear un arreglo con los precios
        double precios[3] = {precio1, precio2, precio3};

        // Ordenar los precios de menor a mayor
        sort(precios, precios + 3);

        // Calcular el total (suma de los dos precios más altos)
        return precios[1] + precios[2];




#endif //EJERCICIO4_H
