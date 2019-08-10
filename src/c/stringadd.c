#include <stdio.h>
#include <malloc.h>

char *link(char *a, char *b)
{
    int m = 0, n = 0;
    while (a[m] != '\0')

    {
        m++;
    }
    while (b[n] != '\0')

    {
        n++;
    }

    char *c = (char*)malloc(sizeof(char)*(m+n));

    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int j = m; j < m + n; j++)
    {
        c[j] = b[j - m];
    }
    c[m+n]='\0';
    return c;
}

int main(){
    
    char a[100];
    char b[100];
    scanf("%s",a);
    scanf("%s",b);
    char *c=link(a,b);
    printf("%s\n",c);
    free(c);
    return 0;
}
