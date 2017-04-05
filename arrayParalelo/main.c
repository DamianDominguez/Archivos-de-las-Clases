#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main(){
    int legajo[MAX];
    float salario[MAX];
    int edad[MAX];
    float salarioAux;
    int i;

    for(i=0; i<MAX; i++){
        printf("Ingrese legajo:\n");
        scanf("%d",&legajo[i]);

        system("cls");
        printf("Ingrese salario:\n");
        scanf("%f",&salarioAux);
        salario[i]=salarioAux;

        system("cls");
        printf("Ingrese edad:\n");
        scanf("%d",&edad[i]);
    }

    system("cls");

    printf("Legajo\tSalario\tEdad");

    for(i=0;i<MAX;i++)
    {
        printf("\n%d\t%.2f\t%d",legajo[i], salario[i], edad[i]);
    }

    return 0;
}
