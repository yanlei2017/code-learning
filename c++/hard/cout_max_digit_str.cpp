#include <string.h>
#include <iostream>
using namespace std;

int cout_max_digit_str(char* input_str,char* output_str)
{
    char * fast=input_str;
    char * slow=input_str;
    int len =strlen(input_str);
    int max_digit_len=0,tmp=0;
    for(int i=0;i<len;i++)
    {
        if(!isdigit(input_str[i]))
        {
            fast++;
            slow++;
            continue;
        }
        
        fast++;
        if(!isdigit(*fast))
        {
            tmp=fast-slow;
            if(tmp>max_digit_len)
            {
                max_digit_len=tmp;
                memcpy(output_str,slow,tmp);
            }
            tmp=0;
            slow=fast;
        }
    }
    output_str[max_digit_len]='\0';
    return max_digit_len;

}
int main()
{
    cout<<"enter string : ";
    char *input=new char;
    char *output=new char;
    cin>>input;
    int max=cout_max_digit_str(input,output);
    cout<<"longest digit string : "<<output<<endl<<"string len : "<<max<<endl;
    return 0;
}