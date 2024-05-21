#include <stdio.h>

int main() {
    // Declaro variables //
    int edad;      // variable entera //
    float altura;  // variable decimal //
    char inicial;  // variable de caracter //

    // Doy una bienvenida al usuario
    printf("Bienvenido a mi registro\n");

    // Le pido al usuario que ingrese su edad //
    printf("Escribe tu edad\n");
    scanf("%d", &edad);  // Utilizo & para pasar la dirección de la variable //

    // Le pido al usuario que ingrese su estatura //
    printf("Escribe tu altura\n");
    scanf("%f", &altura);  // Utilizo & para pasar la dirección de la variable //

    // Le pido al usuario que ingrese su inicial //
    printf("Escribe tu inicial\n");

    // Consumir el caracter de nueva línea pendiente //
    while ((getchar()) != '\n'); // Uso el While para consumir el carácter de nueva línea pendiente antes de leer la inicial //
    scanf("%c", &inicial);  // Utilizo & para pasar la dirección de la variable //

    // Uso printf para mostrar los datos ingresados
    printf("Su edad es = %d años.\n", edad);
    // tuve que usar el %.2f para que solo me presente los dos valores luego de la coma o punto //
    printf("Su altura es = %.2f metros.\n", altura);
    printf("Su inicial es = %c \n", inicial);

    // Uso return 0 para indicar que el programa finalizó correctamente //
    return 0;
}