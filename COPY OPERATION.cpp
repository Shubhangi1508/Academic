#include<stdio.h>

void copyFile(char *old, char *type, char *new)
{
	FILE *originalfile;
	FILE *duplicatefile;
	char originalpath[30];
	char duplicatepath[30];
	char ch;
	originalfile=fopen(old,"w");
	duplicatefile=fopen(new,"w");
	if(originalfile==NULL || duplicatefile==NULL)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("File opened successfully\n");
	}
	ch=fgetc(originalfile);  //copy file contents character by character
	while(ch!=EOF)
	{
		fputc(ch,duplicatefile);        //write to destination file
		ch=fgetc(originalfile);         //read next character from source file
	}
	printf("Files copied successfullyyy\n");
	fclose(originalfile);               //finally closes files
	fclose(duplicatefile);
}
void typeFile(char *fileName, char *contents) 
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
void mergeFiles(char *old, char *new) 
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


