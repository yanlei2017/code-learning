#include "linkedList.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{

    linkList L = (Node *)malloc(sizeof(Node));
    creatLinkListTail(L, 5);
    int deletenum;
    linkDelete(L, 3, &deletenum);
    for (int i = 1; i <=5; i++)
    {
        linkInsert(L, i, i);
    }

    int getnum;
    for (int i = 1; i <=5 ; i++)
    {
        linkGetElem(L, i, &getnum);
        printf("getnum = %d \n", getnum);
    }

    clearList(L);
    return 0;
}
