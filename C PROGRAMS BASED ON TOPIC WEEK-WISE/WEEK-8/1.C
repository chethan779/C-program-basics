//PES1UG25AM095


#include<stdio.h>

int main()
{
char str1[]="programming";
int count=0;
char *ptr1;
ptr1=str1;
char max_character;
int max_count_of_character=0;

printf("The string is: %s\n",str1);
while(*ptr1!='\0')
{
count++;
ptr1++;
}
printf("Number of characters in string is : %d\n",count);

for(int i=0;i<count;i++)
{int freq=1;
	for(int j=i+1;j<count;j++)
	{
		if(str1[i]==str1[j])
		{
			freq++;
		}

	}
	if(freq>max_count_of_character)
	{
		max_count_of_character=freq;
		max_character=str1[i];
	}
}

printf("The max_character is %c\n",max_character);
printf("The number of times %c appeared is %d",max_character,max_count_of_character);

return 0;
}