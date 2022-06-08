#include <stdio.h> 
#include <stdlib.h>
  
int main() 
{ 
   FILE *fp1 = fopen("charSHUBHANGI.txt", "r"); 
   FILE *fp2 = fopen("charROY.txt", "r"); 
   FILE *fp3 = fopen("MERGED.txt", "w"); 
   char ch; 
  
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL) 
   { 
         puts("Could not open files"); 
         exit(0); 
   } 
   ch=fgetc(fp1);  //copy file contents character by character
	while(ch!=EOF)
	{
		fputc(ch,fp3);        //write to destination file
		ch=fgetc(fp1);         //read next character from source file
	}
	ch=fgetc(fp2);  //copy file contents character by character
	while(ch!=EOF)
	{
		fputc(ch,fp3);        //write to destination file
		ch=fgetc(fp2);         //read next character from source file
	} 
   printf("\nMerged charSHUBHANGI.txt and charROY.txt into MERGED.txt"); 
   fclose(fp1); 
   fclose(fp2); 
   fclose(fp3); 
   return 0; 
}

