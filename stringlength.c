#include <stdio.h>
#include <string.h>

int stringlength(char string[]);
int main()
{
	char str[]= "The quick brown fox";

	printf ("The length of the string %s is %d\n", str, stringlength(str));
	return(0);
}

int stringlength(char string[])
{
	int i = 0;
	while(string[i] != '\0'){
		++i;
	}
	return i;
	