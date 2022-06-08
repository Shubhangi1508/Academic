#include <stdio.h>
main() 
{
   FILE *fp;
   fp = fopen("Test.txt", "w+");
   if(fp==NULL)
   {
		printf("Unable to open file\n");
   }
   else
   {
   	 printf("File opened successfullyy\n");
   }
   fprintf(fp, "HELLO, How you doing...\n");
   fputs("fprintf and fputs worked successfully...\n", fp);
   fclose(fp);
}

