#include <stdio.h>


int main(int argc,char *argv[]){
    int an= atoi(argv[1]);
    int bis = an % 4;
    int nobis= an%100;

    int resul1= bis!=nobis?bis:nobis;
    int resul2= bis==nobis?nobis:bis;
    printf("el año es bisiesto %d\n",resul1);
    printf("el año no es bisiesto %d",resul2);
    return 0;
}