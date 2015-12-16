#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float numA;
	float numB;
	float result;
	char tmp[30];
	int type;
    char c[10] = {0};

	printf("Type first number\n");
	scanf("%f", &numA);
	
	printf("Type second number\n");
	scanf("%f", &numB);
	
	printf("Choose number about calcurated type\n1:+, 2:-, 3:*, 4:/");
	scanf("%d", &type);

	switch(type){
		case 1:
			result = numA + numB;
                        strcat(c, "plus");
			break;
		case 2:
			result = numA - numB;
			strcat(c,"minus");
			break;
		case 3:
			result = numA * numB;
			strcat(c,"times");
			break;
		case 4:
			result = numA / numB;
			strcat(c,"divide");
			break;
		default:
			return -1;
	}
	
	snprintf(tmp, 30, "say -v \"Princess\" %.f %s %.f is %.f", numA, c, numB, result);
        system(tmp);
	snprintf(tmp, 30, "say The result is %.f", result);
	system(tmp);
	return 0;

}
