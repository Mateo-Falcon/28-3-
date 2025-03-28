#include <stdio.h>


int main(int argc,char *argv[]){
    int an= atoi(argv[1]);
    _Bool bis = an % 4==0;
    int nobis= an%100;
    if (bis && !(nobis==0))
    {
        printf("el año es bisiesto");
    }else{
        printf("el año no es bisiesto");
    }
}