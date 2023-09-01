#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define N 4

/*
. Klavyeden girilen iki kelimenin ayný olup olmadýðýný ayný deðillerse hangisinin kelime olarak daha uzun
olduðunu belirten program kodunu yazýnýz.
*/
int main()
{
   

    char girdi[100],girdi2[100];
    printf("birinci kelimeyi girin:   ");
    gets(girdi);
    printf("ikinci ");
    gets(girdi2);
    char *p1,*p2;
    int kontrol;
    int n=strlen(girdi);
    int m=strlen(girdi2);

    for(p1=girdi,p2=girdi2;*p1 && *p2;p1++,p2++)
    {
        if(*p1==*p2)
        {
            kontrol=1;
        }
        else
        {
            kontrol=0;
        }
    }

    if(kontrol==1)
    {
        printf("kelimeler ayni");
    }
    else if(kontrol==0)
    {
        if(n>m)
        {
            printf("%s kelimesinin uzunlugu %s kelimesinden daha uzundur",girdi,girdi2);
        }
        else if(m>n)
        {
            printf("%s kelimesinin uzunlugu %s kelimesinden daha uzundur",girdi2,girdi);
        }
        else
        {
        	printf("%s kelimesi ile %s kelimesinin uzunluklari aynidir",girdi2,girdi);
		}
    }

    return 0;
}



