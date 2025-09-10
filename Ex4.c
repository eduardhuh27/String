#include <stdio.h>
#include <string.h>

void remover (char a[],char g, int tamanho);

void main ()
{
    char a[20]="vogggg";
    char g='g';
    remover(a,g,strlen(a));
}

void remover (char a[],char g, int tamanho)
{
    int i;

    for (i=0;i<tamanho;i++)
    {
        if(a[i]==g)
        {
            a[i]=1;
        }
    }
    printf("%s",a);

}
