#include<stdio.h>
#include<string.h>
int i,j,ct=0, ch2,cc, ch3;
char nm[50];
void display();
struct student{
    char name[50];
    int prn;
    float per;
};
struct student s[50];

void create(){
	int n;
    printf(" Enter 1 to create a new database 0 to add to an existing database\n");
    scanf("%d", &ch3);
    if(ch3==1){
    
    printf("Enter number of students:\n");
    scanf("%d", &n);
    ct=n;
    for(i=0;i<n;i++){
       printf("Fill the STUDENT DETAILS:[student's Name, PRN and Percentage]\n");
        scanf("%s %d %f", &s[i].name, &s[i].prn, &s[i].per);
    }
    display();}
    else{
    printf("Enter number of students to add:\n");
    scanf("%d", &n);
    for(i=ct;i<n+ct;i++){
        printf("Enter NEW student's name, prn and percentage\n");
        scanf("%s %d %f", &s[i].name, &s[i].prn, &s[i].per);
    }ct=ct+n;
    display();
    }
}

 

void modify(){
    cc=0;
    printf("Enter the name of the student who's data you want to modify\n ");
    scanf("%s", &nm);
    for(i=0;i<ct;i++){
        if(strcmp(nm,s[i].name)==0){
            printf("Enter new prn and percentage:\n");
            scanf("%d %f", &s[i].prn, &s[i].per);
            cc++;
        }
    }
    if(cc==0){
        printf("Name not present in database");
    }
    else{
    for(j=i;j<ct-1;j++){
        s[i]=s[i+1];

 

    }display();}
}

 

void del(){
	int n;
    printf("Enter the name of the student who's data you want to delete:\n");
    scanf("%s", &nm);
    cc=0;
    for(i=0;i<n;i++){
        if(strcmp(nm,s[i].name)==0){
            ct-=1;
            cc++;
            break;
        }
    }
    if(cc==0){
        printf("Name not present in database");
    }
    else{
    for(j=i;j<n-1;j++){
        s[i]=s[i+1];

 

    }display();}
    
}

 

void display(){
    printf("\nStudent's data:\n");
    for(i=0;i<ct;i++){
        printf("\nNAME=%s\tPRN=%d\tPERCENTAGE=%f%", s[i].name, s[i].prn, s[i].per);
    }
}

 

int main(){
	int choice;
	printf("\n=====MAIN MENU=====\n");
    printf("Enter 1 to CREATE a new database data:\n");
    printf("Enter 2 to MODIFY the existing database:\n");
    printf("Enter 3 to DELETE a student's data from the database:\n");
    printf("Enter 4 to DISPLAY the database:\n");
    while(1){
    	printf("Enter your CHOICE:\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            create();
            break;
            
        case 2:
             modify();
             break;
        
        case 3:
            del();
            break;
        
            
        case 4:
           display();
           break;

 
        default:
            printf("wrong choice"); 
        }     
        printf("\n1 to continue 0 to exit\n");
        scanf("%d", &ch2);
        if (ch2==1){
            continue;
        }
        else
        {
            break;
        }

 
    }
}
