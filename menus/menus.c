#include <stdio.h>
#include "menus.h"

char menuProductos()
    {
        char opcion;
        printf("Elija un producto: \n");
        printf("a) Llantas (Precio: $150) \n");
        printf("b) Kit Pastillas de freno (Precio: $55) \n");
        printf("c) Kit de embrague (Precio: $180) \n");
        printf("d) Faro (Precio: $70) \n");
        printf("e) Radiador (Precio: $120) \n");

        scanf(" %c", &opcion);

        return opcion;
    }
    
    char menuPrincipal()
    {
        char menu;
        printf("Elija una opcion del siguiente menu: \n");
        printf("a) Facturar un producto: \n");
        printf("b) Imprimir factura: \n");
        printf("c) Salir: \n");
        scanf(" %c", &menu);

        return menu;
    }