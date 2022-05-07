#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnum;
char rsp[] = {'s', 'r', 'p'};

void RandomGame()
{
	srand(time(NULL));
	randomnum = rand()%3;
	
	printf("(가위-s), (바위-r), (보-p) 중 하나를 내세요\n");
}

void jud(char answer)
{
  printf("%c\n", rsp[randomnum]);
  
	if(answer == rsp[randomnum])
	{
		printf("비겼습니다.");
	}
	else if (answer == 's' && randomnum ==2)
		printf("이겼습니다.");
    else if (answer == 's' && randomnum==1)
		printf("졌습니다.");
    else if (answer == 'r' && randomnum==2)
		printf("졌습니다.");
    else if (answer == 'r' && randomnum==0)
		printf("이겼습니다.");
    else if (answer == 'p' && randomnum==0)
		printf("졌습니다.");
    else if (answer == 'p' && randomnum==1)
		printf("이겼습니다.");
}

int main(){
	RandomGame();
	
	char answer;
	scanf("%c", &answer);
	jud(answer);
}