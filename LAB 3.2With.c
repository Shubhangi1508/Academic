#include<stdio.h>
#include<conio.h>
#include<string.h>

int ct=0;
struct student{
	char name[20];
	int PRN;
	int per;
};
int main()
{
	int choice,ch,num;
	struct student s[10];
	do{
		printf("\n=======MAIN MENU=======");
		printf("\n 1) CREATE");
		printf("\n 2) INSERT");
		printf("\n 3) MODIFY");
		printf("\n 4) DELETE");
		printf("\n 5) DISPLAY");
		printf("\nEnter your Choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create(s);
				break;
				
			case 2:
				insert(s);
				break;
				
			case 3:
				modify(s);
				break;
				
			case 4:
				delete(s);
				break;
				
			case 5:
				display(s);
				break;
				
			default:
				printf("Wrong Choice");
		}
		printf("\n Do you want to continue (0/1)");
		scanf("%d",&ch);
	}while(ch!=0);
	getch();
}
void create(struct student *a)
{
	
	int i,n;
	printf("Enter the number of records==>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name:, PRN:, Percentage:");
		scanf("%s %d %d",(a+i)->name,&(a+i)->PRN,&(a+i)->per);
		ct++;
	}display(a);
	}

int insert(struct student *a)
{
	//struct student s[10];
	int i,n;
	printf("\nEnter the number of records you want to insert==>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the Name:, PRN:, Percentage===>");
		scanf("%s %d %d",a[ct].name,&a[ct].PRN,&a[ct].per);
		ct++;
	}display(a);
}

int modify(struct student *a)
{
	//struct student s[10];
	int i,student_PRN,student_per;
	char student_name[30];
	printf("\nEnter name of the student whose record you want to modify:==>");
	scanf("%s",student_name);
	printf("Modified PRN:==>");
	scanf("%d",&student_PRN);
	printf("Modified Percentage:==>");
	scanf("%d",&student_per);
	for(i=0;i<ct;i++)
	{
		if(strcmp((a+i)->name,student_name)==0)
		{
			(a+i)->PRN = student_PRN;
			(a+i)->per = student_per;
		}
	}display(a);
	
}

int delete(struct student *a)
{
	//struct student s[10];
	int i;
	char student_name[20];
	printf("\n Enter name of the student whose record you want to delete:==>");
	scanf("%s",student_name);
	for(i=0;i<ct;i++)
	{
		if(!strcmp((a+i)->name,student_name))
		{
			while(i<=ct)
			{
				a[i]=a[i+1];
				i++;
			}
		}
	}
	ct--;
	display(a);
}

int display(struct student *a)
{
	//struct student s[10];
	int i;
	printf("\n************************************");
	printf("\nEntered student details are as follows:");
	printf("\nName:\tPRN:\tPercentage:\n");
	for(i=0;i<ct;i++)
	{
		printf("%s\t%d\t%d\n",a->name,a->PRN,a->per);
		a++;
	}
}

		
		
	
