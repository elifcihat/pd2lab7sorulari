#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define N 4

/*
Belli bir metinde veya cümledeki kelimeleri sayan C programýný dinamik bellek kullanarak yazýnýz

*/
int main()
{

    char cumle[100],*p1;
    printf("lutfen bir cumle giriniz: ");
    gets(cumle);
    p1=(char *)malloc(100* sizeof(char *));
    int sayac=0;
    for(p1=cumle;*p1;p1++)
    {
        if(*p1==' ')
        {
            sayac++;

        }
    }

    printf("cumledeki kelime sayisi :   %d",sayac+1);


    return 0;
}



