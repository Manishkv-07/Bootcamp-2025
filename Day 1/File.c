#include<stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("student.t","w");
    if(fptr == NULL){
        printf("Error oprning file\n");
        return 1;
    }
    fprintf(fptr,"Akshay Kumar U\n");
    fprintf(fptr,"Abhishek\n");
    fclose(fptr);
    printf("File Written\n");
}