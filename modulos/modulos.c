#include <stdio.h>
#include "modulos.h"

float calculoSubtotal(float subtotal)

{
    float total;
    if (subtotal > 0 && subtotal <= 500){
        total = subtotal;
    }
    else if (subtotal >= 501 && subtotal <= 1000){
    //total=subtotal-(subtotal*0.05);
    total=subtotal*0.95;
    }
    else if (subtotal >= 1001 && subtotal <= 5000){
    total=subtotal*0.93;
    }
    else if (subtotal > 5000){
    total=subtotal*0.90;
    }
    return subtotal;     
}


void imprimirFactura(float num1, float num2, float num3, float num4, float num5, 
                        float precio1, float precio2, float precio3, float precio4, 
                        float precio5, float subtotal1, float subtotal2, float subtotal3, 
                        float subtotal4, float subtotal5, char nombre [], char cedula [])
{
    printf("################################################################\n");
    printf("##########################FACTURA###############################\n");
    printf("Nombre: %s\n", nombre);
    printf("Cedula: %s\n", cedula);
    printf("Producto                     Cantidad           Precio Unitario           Precio Total\n");

    if (num1!=0){
        printf("Llantas                         %.0f                   %.2f                  %.2f\n", num1, precio1, subtotal1);
    }
    if (num2!=0){
        printf("Kit Pastillas de freno          %.0f                   %.2f                  %.2f\n", num2, precio2, subtotal2);
    }
    if (num3!=0){
        printf("Kit de embrague                 %.0f                   %.2f                  %.2f\n", num3, precio3, subtotal3);
    }
    if (num4!=0){
        printf("Faros                           %.0f                   %.2f                  %.2f\n", num4, precio4, subtotal4);
    }
    if (num5!=0){
        printf("Radiador                        %.0f                   %.2f                  %.2f\n", num5, precio5, subtotal5);
    }
}