#include<stdio.h>
int triangular_series(int n)
{
	int i,j=1,k=1;
	for(i=1;i<=n;i++)
	{
		printf(" %d ",k);
		j=j+1;
		k=k+j;
	}
}
int main()
{
	int num,m,s=0,rev=0,choice,i,n,number=0,x,count=1;
	float avg,sum=0;
	do
	{
	printf("\n===Menu===\n");
	printf("Enter 1 to find sum of digits of a number:\n");
	printf("Enter 2 to find reverse of digits of a number:\n");
	printf("Enter 3 to find average of n(num) nos:\n");
	printf("Enter 4 to represent triangular table for 'n' nos\n");
	printf("Enter 5 to represent number in words:\n");
	printf("Enter choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				printf("Enter number\n");
				scanf("%d",&num);
			 while(num>0)
		   	{
				m=num%10;
				s=s+m;
				num=num/10;
		    } 
				printf("Sum of digits of the number is: %d\n",s);
			
			break;
		    }
		case 2:
			{
				printf("Enter a number\n");
				scanf("%d",&num);
				while(num!=0)
				{
					m=num%10;
					rev=rev*10+m;
					num=num/10;
				}
					printf("Reverse of the digits is: %d\n",rev);
				
				break;
			}
		case 3:
			{
				printf("Enter the value of n\n");
				scanf("%d",&n);
				while(count<=n)
				{
					printf("Enter the number(%d):",count);
					scanf("%d",&x);
					sum+=x;
					count++;
				}
				avg=sum/n;
				
				printf("The average of the nos is %f\n",avg);
				break;
			}
		case 4:
			{
				printf("Enter the range:\n");
	            scanf("%d",&n);
	            triangular_series(n);
	            break;
			}
		case 5:
			{
				printf("Enter the number:\n");
				scanf("%d",&n);
				while(n != 0)
    {
        number = (number * 10) + (n % 10);
        n /= 10;
    }
        while(number != 0)
        {
        switch(number % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
            printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        number = number / 10;
    }

    break;
   }
			
			default:
				printf("Wrong input\n");
				break;
       }
				
   
    }while(choice!=5);
    return 0;
}
