#include<stdlib.h>
#include<stdio.h>
#define NO_OF_CHARS 256

int *get_char_count(char *str)
{
	int *count = (int *)calloc(sizeof(int), NO_OF_CHARS);
	int i;
	for (i = 0; *(str+i); i++)
		count[*(str+i)]++;
	return count;
}

int first_non_repeating_character(char *str)
{
	int *count = get_char_count(str);
	int index = -1, i;

for (i = 0; *(str+i); i++)
	{
		if (count[*(str+i)] == 1)
			{
				index = i;
				break;
			}
	}

	free(count);
	return index;
}

int main()
{
	char str[NO_OF_CHARS];	
	printf("\nEnter the string : ");
	scanf("%s",&str);
	int index = first_non_repeating_character(str);
	if (index == -1)
		printf("All the characters are repetitive”);
	else		
		printf("%c”, str[index]);
	getchar();
	return 0;
}
