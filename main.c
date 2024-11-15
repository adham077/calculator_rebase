#include <stdio.h>
#include <conio.h>


#include "multiplication.c"
#include "division.c"
#include "modulus.c"
#include "sub.c"
#include "Add_Function.c"


void scan_input(float*,float*);

int main(void){
    do{
        char c;
        float a,b;
        printf("\033c");        

        printf("please enter your preffered operation: + - * / %\n ");
        flushall;
        c = getch();
        
        switch(c){
   
            case '+':
                scan_input(&a,&b);
                printf("a+b=%d\n",AddFunction(a,b));
                break;

            case '*':
                scan_input(&a,&b);
                printf("a*b = %d\n",multiplication(a,b));
                break;

            
            case '%':
                scan_input(&a,&b);
                printf("a%b = %d\n",float_modulus(a,b));
                break;

             
             case '/':
                scan_input(&a,&b);
                printf("a*b=%d\n",Division(a,b));
                break;
     
            case '-':
                scan_input(&a,&b);
                printf("a-b=%d\n",subtract(a,b));
                break;
                
            default:
                printf("invalid operation\n");

        }

        printf("press any key if you want to continue, for exit press n");
        flushall;
    }while(getch()!='n');

    return 0;
}

void scan_input(float* a,float* b){
    printf("enter a:\n");
    fflush(stdin);fflush(stdout);
    scanf("%f",a);
    printf("enter b:\n");
    fflush(stdin);fflush(stdout);
    scanf("%f",b);
}