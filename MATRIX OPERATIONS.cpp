#include<stdio.h>
void greatest_no(int,int);
int main() 
    {
    int a[10][10], b[10][10], s[10][10], choice;
    int i, j, c, r, r1, r2, c1, c2, k, mul[i][j], max[10], d = 0, sum = 0, Total = 0, m = 0;
    do {
        printf("\n=====MENU=====\n");
        printf("Enter 1 to perform the ADDITION of both matrices:\n");
        printf("Enter 2 to perform SUBTRACTION of both matrices:\n");
        printf("Enter 3 to perform MULTIPLICATION of both matrices:\n");
        printf("Enter 4 to find the GREATEST NUMBER from each row:\n");
        printf("Enter 5 to find ADDITION of MAJOR DIAGONAL elements:\n");
        printf("Enter 6 to represent a given matrix in SPARSE form:\n");
        printf("Enter choice:\n");
        scanf("%d", & choice);
        switch (choice) {
        case 1: 
		{
            printf("Enter the no of rows of matrices:");
            scanf("%d", & r);
            printf("Enter the no of columns of matrices:");
            scanf("%d", & c);
            printf("Enter the values of MATRIX A:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    scanf("%d", & a[i][j]);
                }
            }
            printf("Enter the values of MATRIX B:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    scanf("%d", & b[i][j]);
                }
            }
            printf("Values of MATRIX A are as follows:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    printf("\t%d", a[i][j]);
                }
                printf("\n");
            }
            printf("Values of MATRIX B are as follows:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    printf("\t%d", b[i][j]);
                }
                printf("\n");
            }
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    s[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("ADDITION of both matrices is:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    printf("\t%d", s[i][j]);
                }
                printf("\n");
            }
            break;
        }
        case 2: 
		{
            printf("Enter the no of rows of matrices:");
            scanf("%d", & r);
            printf("Enter the no of columns of matrices:");
            scanf("%d", & c);
            printf("Enter the values of MATRIX A:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    scanf("%d", & a[i][j]);
                }
            }
            printf("Enter the values of MATRIX B:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    scanf("%d", & b[i][j]);
                }
            }
            printf("Values of MATRIX A are as follows:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    printf("\t%d", a[i][j]);
                }
                printf("\n");
            }
            printf("Values of MATRIX B are as follows:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    printf("\t%d", b[i][j]);
                }
                printf("\n");
            }
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    s[i][j] = a[i][j] - b[i][j];
                }
            }
            printf("SUBTRACTION of both matrices is:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    printf("\t%d", s[i][j]);
                }
                printf("\n");
            }
            break;
        }
        case 3:
	    {
            printf("Enter the no of rows of MATRIX A:");
            scanf("%d", & r1);
            printf("Enter the no of columns of MATRIX A:");
            scanf("%d", & c1);
            printf("Enter the no of rows of MATRIX B:");
            scanf("%d", & r2);
            printf("Enter the no of columns of MATRIX B:");
            scanf("%d", & c2);
            if (r2 == c1) {
                printf("Enter the values of MATRIX A:\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        scanf("%d", & a[i][j]);
                    }
                }
                printf("Enter the values of MATRIX B:\n");
                for (i = 0; i < r2; i++) {
                    for (j = 0; j < c2; j++) {
                        scanf("%d", & b[i][j]);
                    }
                }
                printf("Values of MATRIX A are as follows:\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        printf("\t%d", a[i][j]);
                    }
                    printf("\n");
                }
                printf("Values of MATRIX B are as follows:\n");
                for (i = 0; i < r2; i++) {
                    for (j = 0; j < c2; j++) {
                        printf("\t%d", b[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c2; j++) {
                        mul[i][j] = 0;
                        for (k = 0; k < r2; k++) {
                            mul[i][j] += a[i][k] * b[k][j];
                        }
                    }
                }
                printf("Multiplication of both matrixes:\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c2; j++) {
                        printf("\t%d", mul[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf(" SORRY!!!!Multiplication not possible,TRY AGAIN\n");
            }
            break;
        }
        case 4:
		 {
            printf("Enter the no of rows of matrices:");
            scanf("%d", & r);
            printf("Enter the no of columns of matrices:");
            scanf("%d", & c);
            greatest_no(r,c);
            break;
        }
        case 5:
		 {
            printf("Enter the no of rows of matrices:");
            scanf("%d", & r);
            printf("Enter the no of columns of matrices:");
            scanf("%d", & c);
            printf("Enter the values of MATRIX A:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    scanf("%d", & a[i][j]);
                }
            }
            printf("Values of MATRIX A are as follows:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    printf("\t%d", a[i][j]);
                }
                printf("\n");
            }
            for (i = 0; i < r; i++) {
                sum = sum + a[i][i];
                d = d + a[i][r - i - 1];
            }
            printf("Sum of MAJOR DIAGONAL elements is %d\n", sum);
            printf("Sum of opp MAJOR DIAGONAL is %d\n", d);
            break;
        }
        case 6: 
		{
            printf("Enter the order r x c of the sparse matrix\n");
            scanf("%d %d", & r, & c);
            printf("Enter the elements in the sparse matrix(mostly zeroes)\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    printf("[%d][%d]:   ", i, j);
                    scanf("%d", & a[i][j]);
                }
            }
            printf("The given matrix is:\n");
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    printf("\t%d ", a[i][j]);
                }
                printf("\n");
            }
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    if (a[i][j] == 0) {
                        Total++;
                    }
                }
            }
            if (Total > (r * c) / 2) {
                printf("\n The Matrix that you entered is a Sparse Matrix\n");
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        if (a[i][j] != 0) {
                            b[m][1] = i;
                            b[m][2] = j;
                            b[m][0] = a[i][j];
                            m++;
                        }
                    }
                }
                printf("The sparse matrix is given by:");
                printf("\n");
                printf("\tVALUES\tROWS\tCOLUMNS\n");
                for (i = 0; i < m; i++) {
                    for (j = 0; j < 3; j++) {
                        printf("\t%d", b[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("\n The Matrix that you entered is Not a Sparse Matrix ");
            }
            break;
        }

        }
} while (choice != 6);
    return 0;
}
void greatest_no(int r,int c)
{
    int i,j,k=0,final[r],max=0,a[10][10];
    printf("Enter the values of MATRIX A:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", & a[i][j]);
        }
    }
    printf("Values of MATRIX A are as follows:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    while (k < r) {
         for (j = 0; j < c; j++) {
            if (a[k][j] > max) {
                max = a[k][j];
            }
        }
        final[k] = max;
        max = 0;
        k++;
    }
     printf("Greatest number from each row is:\n");
     for (i = 0; i < r; i++) {
     	printf("Greatest no from row %d is:%d\n",i,final[i]);

     }
}
