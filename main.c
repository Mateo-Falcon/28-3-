#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char const *argv[]){
    double a=atof(argv[1]);
    double b=atof(argv[2]);
    double c=atof(argv[3]);
    
    double x1= (-b+sqrt(b  *  b - 4 * a * c)) /(2*a);
    double x2= (-b-sqrt(b  *  b - 4* a *c)) /(2*a);

    printf("%f\n",x1);
    printf("%f\n",x2);
    return 0;
}