#include <stdio.h>
#include <string.h>
char *reverseWords(char *s)
{
    int len = strlen(s);
    int i = 0, j = 0;
    int flag = 0;
    //将多余的空格除去
    for (j = 0; j < len; j++)
    {

        if (s[j] == ' ')
        {
            if (flag == 0 && i != 0)
            {
                s[i++] = ' ';
                flag = 1;
            }
        }
        else
        {
            s[i++] = s[j];
            flag = 0;
        }
    }

    if (i >= 1 && s[i - 1] == ' ')
    {
        s[i - 1] = '\0';
    }
    else
    {
        s[i] = '\0';
    }

    printf("将多余的空格除去 ***%s***\n", s);
    //将整个字符串反转
    len = strlen(s);
    i = 0, j = len - 1;
    while (i < j)
    {
        char temp = s[i];
        s[i++] = s[j];
        s[j--] = temp;
    }
    printf("将整个字符串反转 ***%s***\n", s);

    //将每个单词进行反转
    i = 0, j = 0;
    while (s[j])
    {
        if (s[j] != ' ')
        {
            j++;
        }
        else
        {
            int t = j - 1;
            while (i < t)/*交换单词*/
            {
                char temp = s[i];
                s[i++] = s[t];
                s[t--] = temp;
            }
            i =++j;
            
        }
    }

    int t = j - 1; /*反转最后一个单词*/
    while (i < t)
    {
        char temp = s[i];
        s[i++] = s[t];
        s[t--] = temp;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    char y[] = "   the sky   is   blue";
    char *ll = reverseWords(y);
    printf("%s\n", ll);
    return 0;
}
