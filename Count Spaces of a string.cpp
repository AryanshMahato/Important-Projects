#include<iostream>
#include<stdio.h>

int main()
{
	char ch[80];
	int count=0;
	int i;

	gets(ch);

	for(i=0; ch[i]!='\0'; ++i)
	{
		if(ch[i]==' ') ++count;
	}

	std::cout<<count;

	return 0;
}
