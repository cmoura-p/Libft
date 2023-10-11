#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	mes;

	/* Cria um pointer que e um vetor com o nome dos meses */
	char *nomemes [] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", 
		"Jul", "Ago", "Set", "Out", "Nov", "Dez"};

	/* Testa se o numero de parametros fornecidos esta' correto
           o primeiro parametro e' o nome do programa, o segundo o dia
           o terceiro o mes e o quarto os dois ultimos algarismos do ano */
	if (argc == 4)
	{
		mes = atoi(argv[2]);  
		/* argv contem strings. A string referente ao mes deve ser
                   transformada em um numero inteiro. A funcao atoi esta
                   sendo usada para isto: recebe a string e transforma no
                   inteiro equivalente */

		if (mes < 1 || mes > 12)  /* Testa se o mes e' valido */
        		printf("Erro!\nUso: mes invalido");
    		else
      			printf("\n%s de %s de %s", argv[1], nomemes[mes-1], argv[3]);
	}

	else printf("Erro!\nUso: data dia mes ano, todos inteiros");

}
