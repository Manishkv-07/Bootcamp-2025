#include<stdio.h>

int main(){
    FILE *fptr;
    char name[3][100];
    int usn[10];
    int phone[20];


    fptr = fopen("Details","w");
    if(fptr == NULL ){
        printf("Error opening");
        return 1;
    }
     for(int i=0; i<2; i++){
        scanf("%s",name[i]);
        scanf("%d",&usn[i]);
        scanf("%d",&phone[i]);

     }for(int i=0; i<2; i++){
        fprintf(fptr," Name = %s\n",name[i]);
       fprintf(fptr,"USN =%d\n",usn[i]);
        fprintf(fptr,"Phone = %d\n",phone[i]);

     }
     fclose(fptr);
     printf("file written\n");
     return 0;
     
}