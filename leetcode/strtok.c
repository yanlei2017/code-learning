/*
 * @Author: yanlei
 * @Date: 2020-09-20 18:21:05
 * @LastEditTime: 2020-09-20 21:05:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /cmakeDemo/main.cpp
 */
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
char *str_tok(char *s, const char *mark)
{
    static char *strAddr = NULL;
    static int strNum = 0;
    static int incNum = 0;
    static int deleteMaskNum = 0;
    if (s)
    {
        strAddr = s; // record addr
        char *ss = s;
        const char *markk = mark;

        while (*ss)
        {
            strNum++;
            while (*markk)
            {
                if (*ss == *markk)
                {
                    *ss = 0;
                    deleteMaskNum++;
                }
                markk++;
            }
            markk = mark;
            ss++;
        }
        return s;
    }
    else
    {
        while (*strAddr++)
        {
            incNum++;
        }
        if ((incNum+deleteMaskNum) == strNum)
        {
            strAddr--;
        }

        return strAddr;
    }
}

int main(int argc, char **argv)
{
    char str[] = "wuhan;university:of,science*and technology!";
    char mark[] = ";:,* ";
    printf("分割前：[%s] \n",str);
    printf("分割符号：[%s] \n",mark);
    char *p = NULL;
    printf("分割后：\n%s\n", str_tok(str, mark));
    while (*(p = str_tok(NULL, mark)))
        printf("%s \n", p);
}