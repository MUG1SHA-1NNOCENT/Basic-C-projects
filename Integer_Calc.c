//THIS SIMPLE PROGRAM PERFORMS THE FOUR BASIC ARITHMETIC OPERATIONS BASED ON THE INPUT PROVIDED BY THE USER.
#include <stdio.h>

int main(){
   printf("\t***************************CALCULATOR***************************\n\n");
   printf("\t 1.ADD \t 2.SUBTRACT \t 3.DIVIDE \t 4.MULTIPLY\n\n");
   int choice;
   printf("\tPLEASE ENTER CHOICE: ");
   scanf("%d", &choice);
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


void add(int num1, int num2, int sum){
    printf("\tENTER FIRST NUMBER: ");
    scanf("%d", &num1);
    printf("\tENTER SECOND NUMBER: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("\tTHE SUM IS %d\n", sum);

}
void sub(int num1, int num2, int dif){
    printf("\tENTER FIRST NUMBER: ");
    scanf("%d", &num1);
    printf("\tENTER SECOND NUMBER: ");
    scanf("%d", &num2);
    dif = num1 - num2;
    printf("\tTHE DIFFERENCE IS %d\n", dif);

}
void divide(int num1, int num2, int div){
    printf("\tENTER FIRST NUMBER: ");
    scanf("%d", &num1);
    printf("\tENTER SECOND NUMBER: ");
    scanf("%d", &num2);
    div = num1 / num2;
    printf("\tTHE QUOTIENT IS %d\n", div);

}
void mult(int num1, int num2, int product){
    printf("\tENTER FIRST NUMBER: ");
    scanf("%d", &num1);
    printf("\tENTER SECOND NUMBER: ");
    scanf("%d", &num2);
    product = num1 * num2;
    printf("\tTHE PRODUCT IS %d\n", product);

}
