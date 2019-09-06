#ifndef __ARRAY_H
#define __ARRAY_H
/*顺序存储结构*/
#define ok 1
#define error 0
#define true 1
#define false 0
typedef int status;

#define max_size 20
typedef int elemType;
typedef struct
{
    elemType data[max_size];
    unsigned int length = 0;
} sqList;

/* 获得线性表第i个元素并存储到*e */
status getElem(sqList L, int i, elemType *e)
{
    if (L.length == 0 || i < 1 || i > L.length)
    {
        return error;
    }
    *e = L.data[i - 1];
    return ok;
}

/* 在L第i处插入元素*e  */
status sqListInsert(sqList *L, int i, elemType e)
{
    if (L->length = max_size)
    {
        return error;
    }
    if (i < 1 || i > L->length - 1)
    {
        return error;
    }
    int k;
    if (i <= L->length)
    {
        for (k = L->length; k >= i; k--)
        {
            L->data[k] = L->data[k - 1]; /*从后往前更新*/
        }
    }
    L->data[i - 1] = e;
    L->length++;
    return ok;
}

/* delete data at i of L and retuen the deleted data to pointer e*/
status sqListDelete(sqList *L, int i, elemType *e)
{
    if (L->length == 0)
    {
        return error; /* sqlist is empty*/
    }
    if (i < 0 || i > L->length)
    {
        return error;
    }
    *e = L->data[i - 1];/*save the deleted number first*/
    int k;
    if (i < L->length)
    {
        for (k = i; k < L->length; k++)
        {
            L->data[k - 1] = L->data[k];/* move data forward*/
        }
    }
    L->length--;
    return ok;
}
#endif