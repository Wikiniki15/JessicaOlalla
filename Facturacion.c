#include <stdio.h>
#include "menus/menus.h"
#include "modulos/modulos.h"


int main (int argc, char *argv[]) {

    int producto;
    float subtotal1=0, subtotal2=0, subtotal3=0, subtotal4=0, subtotal5=0;
    float precio1=150, precio2=55, precio3=180, precio4=70, precio5=120;
    float num1=0, num2=0, num3=0, num4=0, num5=0;
    float subtotal=0, total=0;
    char opcion, menu;
    char nombre[50], cedula[20];

    printf("###############BIENVENIDO AL SISTEMA DE FACTURACION############### \n");
    printf("Ingrese el nombre del cliente: \n");
    scanf("%s", &nombre);
    printf("Ingrese el numero de cedula del cliente: \n");
    scanf("%s", &cedula);

    do{
        menu=menuPrincipal();
        
        switch (menu){
        case 'a':
            do {
                opcion=menuProductos();

                switch (opcion){
                case 'a':
                    printf("Ingrese el numero de llantas que desea facturar: \n");
                    scanf("%f", &num1);
                    break;

                case 'b':
                    printf("Ingrese el numero de Kit Pastillas de freno que desea facturar: \n");
                    scanf("%f", &num2);
                    break;

                case 'c':
                    printf("Ingrese el numero de Kit de embrague que desea facturar: \n");
                    scanf("%f", &num3);

                    break;
                case 'd':
                    printf("Ingrese el numero de faros que desea facturar: \n");
                    scanf("%f", &num4);
                    break;

                case 'e':
                    printf("Ingrese el numero de radiadores que desea facturar: \n");
                    scanf("%f", &num5);
                    break;
                        
                default:
                    printf("Fuera de rango \n");
                    break;
                }

                printf("Desea facturar otro producto: \n");
                printf("Si=1 o No=0\n");
                scanf("%d", &producto);

            } while (producto==1 && menu=='a');
            break;
             
        case 'b':
            subtotal1=num1*precio1;
            subtotal2=num2*precio2;
            subtotal3=num3*precio3;
            subtotal4=num4*precio4;
            subtotal5=num5*precio5;

            subtotal=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;

            subtotal= calculoSubtotal(subtotal);

            imprimirFactura(num1, num2, num3, num4, num5, precio1, 
                                precio2, precio3, precio4, precio5, 
                                subtotal1, subtotal2, subtotal3, subtotal4, 
                                subtotal5, nombre, cedula);
                       
            if(subtotal > 0 && subtotal <= 500){
            printf("El descuento es de %0\n");
            }
            else if (subtotal >= 501 && subtotal <= 1000){
            printf("El descuento es de %5\n");
            }
            else if (subtotal >= 1001 && subtotal <= 5000){
            printf("El descuento es de %7\n");
            }
            else if (subtotal > 5000){
            printf("El descuento es de %9\n");
            }  
            printf("El subtotal es: %.2f\n", subtotal);
            printf("El total es: %.2f\n", total);
            break;

        case 'c':
            printf("Fin del programa \n");
            break;
        
        default:
            printf("Fuera de rango \n");
            break;
        }
        
    } while(producto==0 && menu=='a');
    
    return 0;
  }    