#include <stdio.h>

float main(){
   printf("\t***************************CALCULATOR***************************\n\n");
   printf("\t 1.ADD \t 2.SUBTRACT \t 3.DIVIDE \t 4.MULTIPLY\n\n");
   int choice;
   printf("\tPLEASE ENTER CHOICE: ");
   scanf("%d", &choice);
   printf("%zu\n", sizeof(choice));
   switch(choice){
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        divide();
        break;
    case 4:
        mult();
        break;
    default:
        printf("\tENTER CORRECT CHOICE PLEASE!!!!!!!\n");
   }
    return 0;
}


void add(float num1, float num2, float sum){
    printf("\tENTER FIRST NUMBER: ");
    scanf("%f", &num1);
    printf("\tENTER SECOND NUMBER: ");
    scanf("%f", &num2);
    sum = num1 + num2;
    printf("\tTHE SUM IS %.4f\n", sum);

}
void sub(float num1, float num2, float dif){
    printf("\tENTER FIRST NUMBER: ");
    scanf("%f", &num1);
    printf("\tENTER SECOND NUMBER: ");
    scanf("%f", &num2);
    dif = num1 - num2;
    printf("\tTHE DIFFERENCE IS %.4f\n", dif);

}
void divide(float num1, float num2, float div){
    printf("\tENTER FIRST NUMBER: ");
    scanf("%f", &num1);
    printf("\tENTER SECOND NUMBER: ");
    scanf("%f", &num2);
    div = num1 / num2;
    printf("\tTHE QUOTIENT IS %.4f\n", div);

}
void mult(float num1, float num2, float product){
    printf("\tENTER FIRST NUMBER: ");
    scanf("%f", &num1);
    printf("\tENTER SECOND NUMBER: ");
    scanf("%f", &num2);
    product = num1 * num2;
    printf("\tTHE PRODUCT IS %.4f\n", product);

}

