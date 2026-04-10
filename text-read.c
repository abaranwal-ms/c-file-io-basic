#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   char* path = "/mnt/c/apps/cfileop/files/program.txt";

   if ((fptr = fopen(path,"r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}