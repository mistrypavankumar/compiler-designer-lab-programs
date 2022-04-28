// program to identify whether a given line is a comment or not

#include <stdio.h>

int main(){

    char comment[30];
    int i = 2, a = 0;

    printf("\nEnter a comment: ");
    gets(comment);

    if(comment[0] == '/'){

        if(comment[1] == '/'){

            printf("\nIt is a comment");

        }else if(comment[1] == '*'){

            for(i = 2; i < 30; i++){

                if(comment[i] == '*' && comment[i + 1] == '/'){
                    printf("\nIt is a comment");
                    a = 1;
                    break;
                    
                }else{
                    continue;
                }
            }

            if(a == 0){
                printf("\nIt is not a comment");
            }
        }else{
            printf("\nIt is not a comment");
        }
    }else{
        printf("\nIt is not a comment");
    }

    return 0;
}