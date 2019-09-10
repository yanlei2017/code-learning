
#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
//大数加法
int main()
{
	char n1[100] = {'\0'};//假设大数长度不超过100;
	char n2[100] = {'\0'};
	int flag[101] = {0};//进位标志
	int result[101] = {0};//结果
	int count;
	cin >> n1 >> n2;
	strrev(n1);
	strrev(n2);
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int lenmax = len1*(len1>=len2) + len2*(len1<len2);
	int num1[100] = {0};
	int num2[100] = {0};
	for(int i = 0; i < len1; i++)
	{
		num1[i] = n1[i] - '0';
	}
	for(int i = 0; i < len2; i++)
	{
		num2[i] = n2[i] - '0';
	}
	for(int i = 0; i < lenmax; i++)
	{
		flag[i+1] = (num1[i] + num2[i] + flag[i])/10;
		result[i] = (num1[i] + num2[i] + flag[i])%10;
	}
	result[lenmax] = flag[lenmax]; //最高位只取决于进位符
	if(result[lenmax] == 0)
	{
		count = lenmax - 1;
	}
	else
		count = lenmax;
	for(; count >=0; count--)
	{
		cout << result[count];
	}
	cout << endl;
	return 0;
}