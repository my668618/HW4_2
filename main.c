#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    number=1;
	while(number<=100)
	{
		if(number%2!=0)
        printf("%d\n",number);
		number++;
	}
    //printf("Hello world!\n");
    return 0;
}
