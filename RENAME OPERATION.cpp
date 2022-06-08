#include<stdio.h> 
  
int main() 
{ 
    char old_name[] = "Test.txt"; 
    char new_name[] = "geeksforgeeks.txt"; 
    int value; 
  
    value = rename(old_name, new_name); 
    if(!value) 
    { 
        printf("%s", "File name changed successfully"); 
    } 
    else
    { 
        printf("Error"); 
    } 
    return 0; 
}

