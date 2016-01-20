/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int count=0,i=0,j=0,k=0;
	for (k = 0; str[k] != '\0'; k++){
		i = k;
		while (true){
			if (str[i] == word[j]){
				if (word[j + 1] == '\0'){
					count++;
					j = 0;
					break;
				}
				else{
					j++;
					i++;
				}
			}
			else{
				j = 0;
				break;
			}
		}
	}
	return count;
}

void counter_recursive(char *str,char *word,int strt,int *count){
	int i=strt, j=0, count1;
	while (str[strt] == word[j]){
		if (word[j + 1] == '\0'){
			*count = *count + 1;
			break;
		}
		i++;
		j++;
	}
	if (str[strt + 1] != '\0')
		counter_recursive(str, word, strt + 1, count);
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	int *count = (int *)malloc(sizeof(int));
	counter_recursive(str, word, 0, count);
	return *count;
}

