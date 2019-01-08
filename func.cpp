#include <stdio.h>      
#include <conio.h>       
int cube(int n){  
return n*n*n;  
}  
main(){      
int result1=0,result2=0;      
  
result1=cube(2);
result2=cube(3);    
      
printf("%d \n",result1);  
printf("%d \n",result2);  
  
getch();      
}      
