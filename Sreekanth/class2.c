#include <stdio.h>

int main(){

	char sree[10] = {0};
	char i = 0;

	printf("Enter the name: ");
	scanf("%s",sree);

	while(sree[i] != 0)
	{
		putchar(sree[i]);
		i++;
	}

	putchar('\n');

	return 0;
}
