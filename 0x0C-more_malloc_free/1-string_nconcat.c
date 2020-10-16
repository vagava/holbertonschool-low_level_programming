#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat : concatenate string
 * @s1: string 1
 * @s2: string 2
 * @n: size
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new = NULL;
	unsigned int c1, c2, res = 0, cp, cont_aux = 0;

	if(s1 == NULL){
		s1 = "";
	}

	if(s2 == NULL){
		s2 = "";
	}
	for(c1 = 0; s1[c1] != '\0'; c1++){

	}
	for (c2 = 0; s2[c2] != '\0'; c2++){

	}

	if (n >= c2){
		res = c1 + c2;
	}
	else{
		res =(c1 + n) + 1;
	}
	new = malloc(res * sizeof(char));

	for(cp = 0; cp <= res; cp++){
		if(cp == res){
			*(new + cp) = '\0';
		}
		else if (cp < c1){
			*(new + cp) = *(s1 + cp);
		}
		else{
			*(new + cp) = *(s2 + cont_aux);
			cont_aux ++;
		}
	}
	return(new);
}
