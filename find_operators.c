// Program to find the operators

#include <stdio.h>
#include <conio.h>

int main(){

    char s[5];
    printf("Enter the operator: ");
    gets(s);

    switch(s[0]){

        case '>': {
            if(s[1] == '='){
                printf("\nGreater than or equal to");
            }else{
                printf("\nGreater than");
            }
        }
        break;

        case '<': {
            if(s[1] == '='){
                printf("\nLesser than or equal to");
            }else{
                printf("\nLesser than");
            }
        }
        break;

        case '=': {
            if(s[1] == '='){
                printf("\nEqual to");
            }else{
                printf("\nAssignment");
            }
        }
        break;

        case '&': {
            if(s[1] == '&'){
                printf("\nLogical AND");
            }else{
                printf("\nBitwise AND");
            }
        }
        break;

        case '|': {
            if(s[1] == '|'){
                printf("\nLogical OR");
            }else{
                printf("\nBitwise OR");
            }
        }
        break;

        case '!': {
            if(s[1] == '='){
                printf("\nNot Equal to");
            }else{
                printf("\nBitwise NOT");
            }
        }
        break;

        case '+': printf("Addition");
        break;

        case '-': printf("Subtraction");
        break;

        case '*': printf("Multiplication");
        break;
        
        case '/': printf("Division");
        break;
        
        case '%': printf("Modulus");
        break;



    }
    return 0;
}