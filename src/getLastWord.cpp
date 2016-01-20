/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i=0;
	char *last, *lastbut1;
	last = str;
	while (str[i]!='\0'){
		if (str[i] == ' '&&str[i + 1] != ' '&&str[i + 1] != '\0')
			last = str + i+1;
		i++;
	}
	lastbut1 = (char *)malloc(i*sizeof(char));
	for (i = 0; last[i] != '\0'&&last[i] != ' '; i++)
		lastbut1[i] = last[i];
	lastbut1[i] = '\0';
	return lastbut1;
}
