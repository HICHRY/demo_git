/* 
 * File:   main.c
 * Author: hichri
 *  Solving first degree equation
 * Created on July 28, 2019, 9:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float a,b,x;
    printf("Give two real numbers: ");
    scanf("%f%f",&a,&b);
    if(a!=0){
        x=-b/a;
        printf("\nx=%g",x);
    }
    else if(b==0) printf("\nInfinity of solution.");
    else printf("\nNo solution");
    return (0);
}


