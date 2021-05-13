#include <stdio.h>

 int main ()
{
    float Fresa, Cincokilos, $13, precio;
    printf("\n\n Hernandez Flores Ricardo Omar");
    printf ( "\n\n comprando fruta");
    printf ( "\n\n precio de cualquier fruta $13");
    printf ( "\n\n ingrese la fruta que selecciono");
    scanf ( "%f", &Fresa);
    printf ( "\n\n ingrese el peso de la futa seleccionada");
    scanf ( "%f", &Cincokilos);
    precio= Cincokilos * $13;
    printf ( "\n\n el presio total es %f", precio);
    return 0;

}
