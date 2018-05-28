#include <stdio.h>

int		main(void)
{
	char woohoo[25] = { ' ', '/', '*', '\\', ' ', '\n', // add to "*" dot for the shooting;
				 		' ', '|', ' ', '|',  ' ', '\n',
				 		'<', ' ', 'X', ' ',  '>', '\n',
				 		' ', '^', '^', '^',  ' ', '\0'
				 	   };
	printf("%s\n", woohoo);
}
