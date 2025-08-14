#include<stdio.h>

void main(){
    printf("Welcome To The Calculator\n");
    int a,b,result,c;
    printf("press 1 for addition\n");
    printf("press 2 for substraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    scanf("%d ",&c);
    if( c == 1){
        printf("Enter the value of a and b\n");
        scanf("%d %d ",&a , &b );
        result = a+b;
        printf("Result = %d\n",result);
    } else if( c == 2){
         printf("Enter the value of a and b\n");
        scanf("%d %d ",&a , &b );
        result = a-b;
        printf("Result = %d\n",result);
    } else if( c == 3){
         printf("Enter the value of a and b\n");
        scanf("%d %d ",&a , &b );
        result = a*b;
        printf("Result = %d\n",result);
    } else if( c == 4){
         printf("Enter the value of a and b\n");
        scanf("%d %d ",&a , &b );
        result = a/b;
        printf("Result = %d\n",result);
    } else{
        printf("Invalid input\n");
    }
}
