/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void menu( );
void somar( );
void subtrair( );
void multiplicar( );
void dividir( );
void potencia( );
void fatorial( );
void raizquadrada( );
void inicializar( );
float total=0.0, valor;
int op;
int main() {
    do {
        menu( );
        switch (op) {
            case 1:
               somar( );
               break;
            case 2:
               subtrair( );
               break;
            case 3:
               multiplicar( );
               break;
            case 4:
               dividir( );
               break;   
            case 5:
               potencia( );
               break;
            case 6:
               fatorial();
               break;
            case 7:
               raizquadrada();
               break;   
            case 8:
               inicializar();
               break;
            default:
               break;
        }
    } while (op != 9);
    return 0;
}
void menu( ) {
    printf("\t*************************************\n");
    printf("\t\tCalculadora\n");
    printf("\t*************************************\n");
    printf("\t\tvalor:          %f\n",total);
    printf("\t\tSoma        +   1\n");
    printf("\t\tSubtrair    -   2\n");
    printf("\t\tMultiplicar *   3\n");
    printf("\t\tDividir     /   4\n");
    printf("\t\tPotencia    ^   5\n");
    printf("\t\tFatorial    !   6\n");
    printf("\t\tRaiz Quadrada   7\n");
    printf("\t\tC               8\n");
    printf("\t\tOFF             9\n");
    printf("\t\tOperador:       ");
    scanf("%d",&op);
    printf("\n");
    printf("\t**************************************\n");    
}
void somar( ) {
    printf("\t\tValor: ");
    scanf("%f",&valor);
    total=total+valor;
}
void subtrair( ) {
    printf("\t\tValor: ");
    scanf("%f",&valor);
    total=total-valor;
}
void multiplicar( ) {
    if (total == 0) {
        printf("\t\tValor: ");
        scanf("%f",&total);
    }
    printf("\t\tValor: ");
    scanf("%f",&valor);
    total=total*valor;
}
void dividir( ) {
    if (total == 0) {
        printf("\t\tValor: ");
        scanf("%f",&total);
    }
    printf("\t\tValor: ");
    scanf("%f",&valor);
    total=total/valor;
}
void potencia( ) {
    if (total == 0) { 
        printf("\t\tValor: ");
        scanf("%f",&total);
    }
    printf("\t\tValor: ");
    scanf("%f",&valor);
    total=pow(total,valor);
}
void fatorial( ) {
    float fat;
    if (total == 0) { 
        printf("\t\tValor: ");
        scanf("%f",&total);
    }
    fat=total;
    if (fat == 0 || fat == 1 ){
        total=1;
    }
    else {
        for (int i=fat-1; i >=1;i--){
            fat=fat*i;
        }
      total=fat;
    }  
}
void raizquadrada( ) {
    if (total <= 0){
        printf("\t\tValor: ");
        scanf("%f",&total);   
    }
    total=sqrt(total);
}
void inicializar( ) {
    total=0;
}