/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>

int binarySearch(int key){
	int vowels[] = { 65, 69, 73, 79, 85, 97, 101, 105, 111, 117 };
	int low = 0, high = 10,mid;
	while (low < high){
		mid = (low + high) / 2;
		if (key == vowels[mid])
			return 1;
		else if (key < vowels[mid])
			high = mid;
		else
			low = mid + 1;
	}
	return 0;
}

void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	int i=0,ch,vows=0,cons=0;
	if (str == NULL){
		*consonants = 0;
		*vowels = 0;
	}
	else{
		while (str[i] != '\0'){
			ch = str[i];
			if ((ch > 64 && ch<91) || (ch>96 && ch < 123)){
				if (binarySearch(ch))
					vows++;
				else
					cons++;
			}
			i++;
		}
		*consonants = cons;
		*vowels = vows;
	}
}
