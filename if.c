//Referencia del if
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    printf("Escribe tu primer numero:\n");
    // nota que use el %i por que arriba defini que numero1 es un integer, el & es para ligar la respuesta del usuario con numero1
    scanf("%i", &numero1);
    
//
if (numero1 % 2 == 0)
    printf("tu numero es par");
/* tambien lo puedes escribir asi:
if (numero1 % 2 == 0) printf("tu numero es par");

o tambien asi:  (nota como el final del if no tiene punto y coma)

if (numero1 % 2 == 0)
{
    printf("tu numero es par");
}
*/
/* aqui con el else se puede manejar igual que como el if en sintaxis, solo recuerda que si no metes los corchetes como
en el primer y segundo ejemplo del if solo va a tomar la proxima linea de codigo como que le pertenece al if, si tu if tiene 
varias lineas de codigo tienes que meter llaves de a huevo
*/
else
    printf("tu numero es impar");
return 0;
}
