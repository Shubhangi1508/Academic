#include<stdio.h>
int main()
{
	int arr[50]={0};
	int i,x,pos,n=10,choice,found=0,flag=0;
	do
	{
		printf("\n===MENU===\n");
		printf("Enter 1 to insert an element in fourth position\n");
		printf("Enter 2 to insert an element at the beginning\n");
		printf("Enter 3 to insert an element at the end\n");
		printf("Enter 4 to delete an element by position\n");
		printf("Enter 5 to delete a specified integer in the array:\n");
		printf("Enter 6 to search an element by position:\n");
		printf("Enter 7 to search a specified integer in the array:\n");
		printf("Enter 8 to revert the array:\n");
		printf("Enter choice:\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
			{
			    printf("Enter the no of elements in the array\n");
                scanf("%d", &n);
                printf("Enter the elements:\n");
                for (i = 0;i<n;i++)
                {
                  scanf("%d",&arr[i]);
                }
                   printf("Initial array:");
				   for(i=0;i<n;i++)
				   printf(" %d ",arr[i]);
			       printf("\n");
		           printf("Enter the element to be inserted at fourth position:");
			       scanf("%d",&x);
			       pos=4;n++;
			       for(i=n;i>=pos;i--)
			       arr[i]=arr[i-1];
			       arr[pos-1]=x;
			       printf("Final array:");
			       for(i=0;i<n;i++)
			       printf(" %d ",arr[i]);printf("\n");
			       break;
			}
			case 2:
				{
				printf("Enter the no of elements in the array\n");
                scanf("%d", &n);
                printf("Enter the elements:\n");
                for (i = 0;i<n;i++)
                {
                  scanf("%d",&arr[i]);
                }
                   printf("Initial array:");
				   for(i=0;i<n;i++)
				   printf(" %d ",arr[i]);
			       printf("\n");
			       printf("Enter the element to be inserted at the beginning:");
			       scanf("%d",&x);
			       pos=1;n++;
			       for(i=n;i>=pos;i--)
			       arr[i]=arr[i-1];
			       arr[pos-1]=x;
			       printf("Final array:");
			       for(i=0;i<n;i++)
			       printf(" %d ",arr[i]);printf("\n");
			       break;
			    }
			case 3:
				{
				printf("Enter the no of elements in the array\n");
                scanf("%d", &n);
                printf("Enter the elements:\n");
                for (i = 0;i<n;i++)
                {
                  scanf("%d",&arr[i]);
                }
                   printf("Initial array:");
				   for(i=0;i<n;i++)
				   printf(" %d ",arr[i]);
			       printf("\n");
			       printf("Enter the element to be inserted at the end:");
			       scanf("%d",&x);
			       pos=n+1;n++;
			       for(i=n;i>=pos;i--)
			       arr[i]=arr[i-1];
			       arr[pos-1]=x;
			       printf("Final array:");
			       for(i=0;i<n;i++)
			       printf(" %d ",arr[i]);printf("\n");
			       break;
			    }
			    case 4:
				{
				printf("Enter the no of elements in the array\n");
                scanf("%d", &n);
                printf("Enter the elements:\n");
                for (i = 0;i<n;i++)
                {
                  scanf("%d",&arr[i]);
                }
				   printf("Initial array:");
				   for(i=0;i<n;i++)
				   printf(" %d ",arr[i]);
			       printf("\n");
				   printf("Enter the position from where you need to delete:");
				   scanf("%d",&pos);
				   if(pos>=n+1)
                   printf("\nDeletion not possible\n");
                   else 
				   for(i=pos-1;i<n-1;i++)
                   arr[i] = arr[i+1];
		           printf("Final array:");
				   for(i= 0;i< n-1;i++) 
                   printf(" %d ", arr[i]);
				   break;
				}
			case 5:
				{
			    printf("Enter the no of elements in the array\n");
                scanf("%d", &n);
                printf("Enter the elements:\n");
                for (i = 0;i<n;i++)
                {
                  scanf("%d",&arr[i]);
                }
				   printf("Initial array:");
				   for(i=0;i<n;i++)
				   printf(" %d ",arr[i]);
			       printf("\n");
			       printf("Enter the element you want to delete:");
			       scanf("%d",&x);
			       for (i =0;i<n;i++)
                   {
				      if(arr[i]==x)
                      {found = 1;
                        pos = i;
                        break;}
                   }
            if(found==1)
            {
            for(i=pos;i<n-1;i++)
            {
             arr[i]=arr[i+1];
            }
			 printf("Final array:");
            for(i =0;i<n-1;i++)
            {
                printf(" %d ",arr[i]);
            }}
        else
            printf("Element %d is not found in the array\n", x);
            break;
		    }
		case 6:
		{
			printf("Enter the no of elements in the array:\n");
			scanf("%d", &n);
            printf("Enter the elements:\n");
            for (i=0;i<n;i++)
            {
              scanf("%d",&arr[i]);
            }
              printf("Initial array:");
              for(i=0;i<n;i++)
              printf(" %d ",arr[i]);
              printf("\n");
              printf("Enter the position of the element to be searched:");
              scanf("%d",&pos);
              for(i=0;i<n;i++){
              if(i==pos-1){
              flag=1;
              break;}}
              if(flag==1)
              printf("Element found at respective asked position %d is %d",pos,arr[pos-1]);
              else
              printf("No such position exists in the given array");
              break;
        }
        case 7:
        	{
        		printf("Enter the no of elements in the array:");
        		scanf("%d",&n);
        		printf("Enter the elements:\n");
        		for(i=0;i<n;i++)
        		{
        			scanf("%d",&arr[i]);
				}
				    printf("Initial array:");
				    for(i=0;i<n;i++)
				    printf(" %d ",arr[i]);
				    printf("\n");
				    printf("Enter the element to be searched:");
				    scanf("%d",&x);
				    for(i=0;i<n;i++)
				    if(arr[i]==x)
				    break;
				    if(i<n)
				    printf("Asked element %d is found at position %d",x,i+1);
				    else
				    printf("Element not found");
				    break;
        		
        	}
        	case 8:
        		{
        			printf("Enter the no of elements in the array:");
        			scanf("%d",&n);
        			printf("Enter the elements:\n");
        			for(i=0;i<n;i++)
        			{
        				scanf("%d",&arr[i]);
					}
					    printf("Initial array:");
					    for(i=0;i<n;i++)
					    printf(" %d ",arr[i]);
					    printf("\n");
					    printf("Reverted array:");
					    for(i=n-1;i>=0;i--){
					    printf(" %d ",arr[i]);}
					    break;
				}
			default:
			            printf("Incorrect Choice. Please Enter again\n");
	                    break;
		 
		}
	}while(choice!=8);
	return 0;
	
}
