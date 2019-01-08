#include<stdio.h>
void cleanupfun (void) __attribute__ ((destructor));
void cleanupfun (void){
    printf ("Value returned by main() %d",main());
}
int main (void){
    return 121;
}
