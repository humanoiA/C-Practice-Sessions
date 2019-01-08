#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char word[100],a;
	int i,l,count=0;
	gets(word);
	l=strlen(word);
	for(i=0;i<l;i++)
	{
		a=word[i];
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
		{
		count=count+1;
		}
	}
	printf("no. of vowel =%d\n",count);
	printf("no. of consonant=%d",strlen(word)-count);
}
