#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
main()
{
	
	char A[30];
	char B[30];
	char C[70];
  gets(A);
  gets(B);
		 strcpy(C, A);
		 printf("%s\t", C);
         strcpy(C, B);
         printf("%s", C);
         free(C);
        
        return(0);
	}
	
