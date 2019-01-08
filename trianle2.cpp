#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,rows;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
    
    for(i = 1; i <= rows; i++)
   {
        for(j = 0; j <=rows; j++)       
		{
			if(i<=j)
			{
           printf("%c",j+64);
            }
		    else
		    {
		    	printf(" ");     
			}
		}
        printf("\n");
    }
    getch();       
}
