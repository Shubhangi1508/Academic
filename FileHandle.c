#include <stdio.h>

void copyFile(char *old, char *type, char *new)
{
    FILE *f1, *f2;
    f1 = fopen(old, "r");
    f2 = fopen(new, type);
    if(f1==NULL || f2==NULL)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("File opened successfully\n");
	}

    char ch = fgetc(f1);
    while (ch != EOF)
    {
        fputc(ch, f2);
        ch = fgetc(f1);
    }
    printf("Files copied successfullyyy\n");
    fclose(f1);
    fclose(f2);
}

void typeFile(char *fileName, char *contents)
{
    FILE *f = fopen(fileName, "w");
    if(f==NULL)
   {
		printf("Unable to open file\n");
   }
   else
   {
   	 printf("File opened successfullyy\n");
   }
    fputs(contents, f);
    fclose(f);
}

void mergeFiles(char *old, char *new) { copyFile(old, "a", new); }

int main(int argc, char const *argv[])
{
    int ch;
    char file1[100], file2[100];
    printf("Enter name of file\n> ");
    scanf("%s", file1);
    printf("\n1. Write into file\n2. Copy file\n3. Merge 2 files\n4. Rename "
           "files\n> ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter contents\n> ");
        int c;
        char contents[100], type;
        fflush(stdin);
        fgets(contents, 100, stdin);
        typeFile(file1, contents);
        break;

    case 2:
        printf("Enter name of second file\n> ");
        scanf("%s", file2);
        copyFile(file1, "w", file2);
        break;

    case 3:
        printf("Enter name of second file\n> ");
        scanf("%s", file2);
        mergeFiles(file1, file2);
        break;
        
    case 4:
        printf("Enter name of renamed file\n> ");
        scanf("%s", file2);
        rename(file1, file2);
        break;
    default:
        return 0;
    }
    return 0;
}

