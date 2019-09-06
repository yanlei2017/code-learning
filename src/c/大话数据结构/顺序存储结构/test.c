#include <stdio.h>
#include "sqList.h"

int main(int argc, char const *argv[])
{
    sqList arr;
    for (size_t i = 0; i < 20; i++)
    {
        arr.data[i] = i;
        arr.length++;
    }
    sqListInsert(&arr, 5, 88);
    int dn;
    sqListDelete(&arr, 5, &dn);

    return 0;
}
