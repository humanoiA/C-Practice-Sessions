#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
int *merge(int *A,int *B,char sA,char sB)
{
		char *C = malloc(strlen(A) + strlen(B) + 2);
		 strcpy(C, A);
         strcpy(C, B);
         printf("%s", C);
         free(C);
		printf("New Value: %s",C);
	
}
main()
{
	
	char A[30], B[30];
	 gets(A);
	 gets(B);
     merge(A,B);
	
        return(0);
	}
	
