#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double start, finish;
int randomNumber;
char missingAlp;
char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
				   'H', 'I', 'J', 'K', 'L', 'M',
				   'N', 'O', 'P', 'Q', 'R', 'S',
				   'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void RandomAlp()
{
	srand(time(NULL));
	randomNumber = rand()%26;
	missingAlp = alphabet[randomNumber];
	
	int i = randomNumber;
	for (i; i<25; i++){
		alphabet[i] = alphabet[i+1];
	}
	
	for(i=0; i<25; i++)
	{
		printf("%c",alphabet[i]);
	}
	
	printf("���� �� ���� ���ĺ��� �����ϱ��?\n");
}

void judSolution(char answer)
{
	if(answer == missingAlp)
	{
		finish = (((double)clock()) / CLOCKS_PER_SEC);
		printf("����!\n");
		printf("%f�� �ɷȽ��ϴ�.", finish);
	}
	else
		printf("Ʋ�Ƚ��ϴ�.");
}

void main(){
	start = (double)clock() / CLOCKS_PER_SEC;  
	RandomAlp();
	
	char answer;
	scanf("%c", &answer);
	judSolution(answer);
	
}
