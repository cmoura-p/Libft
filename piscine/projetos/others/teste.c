
#include <stdio.h>

int     main(void)
{
        int     a;
        int     *b;

        a = 10;
	b = &a;

        printf("a = %i e b = %i \n", a, *b);
        
	*b = a;
	printf("conteudo de a no b = %i \n", *b);
}

