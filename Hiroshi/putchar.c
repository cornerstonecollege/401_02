#include <stdio.h>

int main(){
        char *fmt = "%[^\n]%*c";
	while(1){
                char text[50] = {0};
		printf("Type something\n");
	        scanf(fmt, text);
		if (text[0] == '\0'){
			break;		
		}
			
     	  	int cnt = 0;
    	    	printf("The result is \n");

    	    	while(text[cnt]!= '\0'){
        		putchar(text[cnt]);
   	  	       	cnt++;
   	    	}
  	    	printf("\n");
	}
	return 0;
}
