#include<stdio.h>
#include<string.h>
int po[20], poj = 0;
int le[20], lek = 0;
int cache[10] = {}, cac_len = 0;
int alphabetic(char c){
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c<='Z'))
		return 1;
	else
		return 0;
	}
int longest(char string[]){
	int len = 0, i, length = 0, flag = 1, place , point;
	for(i = 0; i <= strlen(string); i++){
		if(alphabetic(string[i])){
			if(flag){
				point = i;
				po[poj++] = point;
				flag = 0;
			}
			len++;
		}else{
			flag = 1;
			le[lek++] = len;
			if(len >= length){
				if(len > length){	
					for(int c = 0; c < 10; c++){
						cache[c] = 0;
					}
					cac_len = 0;
				}
				length = len;
				place = point;
				cache[cac_len++] = place;
			}
			len = 0;
		}
	}
	return place;
}

void main(void){
	int i;
	char line[100];
	printf("输入一行文本\n");
    gets(line);
	longest(line);
	for(i = 0; i < poj; i++){
		for(; alphabetic(line[po[i]]); po[i] = po[i] + 1){
			printf("%c", line[po[i]]);
		}
		printf("%6d\n", le[i]);
	}
	printf("\nthe longest word is: ");
	for(i = 0; i < cac_len; i++){
		for(; alphabetic(line[cache[i]]); cache[i] = cache[i] + 1){
			printf("%c", line[cache[i]]);
		}
		printf(" ");
	}
	printf("\n");
}	
