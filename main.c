#include <stdio.h>

int main (int argc, char *argv[]) {

    int n, n1, d, s=0, par=0, impar=0, opc1=0, opc2=0;

    do
    {
        printf("1. Ingresar Numero\n");
        printf("2. Suma Digitos\n");
        printf("3. Numero par/impar\n");
        printf("4. Invertir numero\n");
        printf(">> ");
        scanf("%d",&opc1);
        switch (opc1)
        {
        case 1:
            do
            {
                printf("Ingrese un numero de 4 cifras: ");
                scanf("%d", &n);
                n1=n;
                if (n < 1000 || n > 9999)
                {
                    printf("Error: El numero debe ser de 4 cifras\n");
                }
            } while (n < 1000 || n > 9999);
            break;
        case 2:
            n=n1;
            if (n1!=0)
            {
                while (n!=0)
                {
                    d=n % 10;
                    n=n / 10;
                    s+=d;
                }
                printf("La suma de los digitos es: %d\n",s);
                
            }else{
                printf("Debe primero ingresar el numero\n");
            }
            break;
        case 3:
            n=n1;
            if (n1!=0){
                while (n!=0)
                {
                    d=n % 10;
                    n=n / 10;
                    if (d % 2 ==0)
                    {
                        par++;
                    }else{
                        impar++;
                    }
                    
                }
                printf("La cantidad de digitos pares es: %d\n",par);
                printf("La cantidad de digitos impares es: %d\n",impar);
            }else{
                printf("Debe primero ingresar el numero\n");
            }
            break;
        case 4:
            n=n1;
            if (n1!=0){
                printf("El numero invertido es: ");
                while (n!=0)
                {
                    d=n % 10;
                    n=n / 10;
                    printf("%d",d);
                }
                printf("\n");

            }else{
                printf("Debe primero ingresar el numero\n");
            }
            break;
        default:
            break;
        }
        printf("Desea otra opcion 1.Si/2.No : ");
        scanf("%d",&opc2);
    } while (opc2==1);

    return 0;
}