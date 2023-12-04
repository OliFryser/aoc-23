#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	int c;
	int first_num = -1;
	int last_num = -1;
	int sum = 0;
	char* number = char[6]

	while((c = getchar()) != EOF) {
		if(c == '\n') {
			if (last_num == -1) last_num = first_num;
			sum += (first_num*10) + last_num;
			first_num = -1;
			last_num = -1;
			continue;
		}
		if (isdigit(c)) {
			if (first_num == -1) first_num = (c-'0');
			else last_num = (c-'0');
		}

	}
	printf("The sum is %d\n", sum);
}

int check_num_str(char* number) {
	if(strcmp(number, "zero") return 0;
	if(strcmp(number, "one") return 1;
	if(strcmp(number, "two") return 2;
	if(strcmp(number, "three") return 3;
	if(strcmp(number, "four") return 4;
	if(strcmp(number, "five") return 5;
	if(strcmp(number, "six") return 6;
	if(strcmp(number, "seven") return 7;
	if(strcmp(number, "eight") return 8;
	if(strcmp(number, "nine") return 9;
}
