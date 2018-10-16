#include<stdio.h>
//#include<time.h>
//9517번 아이 러브 크로아티아
void main() {
	int player, qu, ti, tima;
	char an;
	int i ;
//	int p1, p2, p3, p4, p5, p6, p7, p8;
//	int play[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int bomb; //3분 30초가 지나면 터진다.
//	clock_t start, end;

//	player = qu = ti = 0;

	
	


//	bomb = 0;
//	i = 0;
	ti = 0;
//	start = clock();
	tima = 0;
	player = 0;
	//	printf("%d에게 질문 하십시오\n", bomb);
//	printf("질문 답 \n");
//	scanf("%c", &an);

//	printf("폭탄을 들고 있는 사람 : \n");
	scanf("%d", &player);	//게임 시작 시 폭탄을 들고 있는 사람(1~8) 입력
//	printf("질문의 개수 :\n"); //1~100개
	scanf("%d", &qu);	//질문의 개수 (1~100) 입력
	
	while (qu--) { //질문의 개수 만큼 반복한다.
		
//			printf("%d번째 질문을 대답하기까지 걸린시간, 대답 : \n", i);//걸린시간 초, 대답T,N,P중 하나
			scanf("%d  %c", &ti, &an);	//질문을 대답하기 까지 걸린 시간, 플레이어의 대답(Z, N, P) 입력
			tima += ti;
			if (tima >= 210) break;	//제한시간 3분30초 이므로 210초가 넘으면 종료한다.
//			printf("%d \n", tima);
			if (an == 'T') {	//진실을 말했으면
				player++;	//다음 플레이어로 넘어간다.
				if (player == 9)	//8명까지 이므로 9되면 플레이어 1부터 다시 시작
					player = 1;
			}
			else if (an == 'P' || an == 'N') {
		
			}
	}
	printf("%d \n", player);	//폭탄을 터뜨린 사람 출력
	/*
	while (ti <= 210){

		if (an == 'T') {
			i++;
			if (i == 8)
				i = 0;
			bomb = play[i];
			printf("%d에게 질문 하십시오\n", bomb);
			printf("질문 답 \n");
		}
		else if (an == 'N' || an == 'P') {
			printf("%d에게 다음 질문 \n", bomb);
			printf("질문 답 \n");
		}

		scanf("%c", &an);

		end = clock();
		ti = (int)(end - start) / CLOCKS_PER_SEC;

	}
	
	printf("%d \n", ti);
	printf("폭탄 터뜨린 사람 : %d \n", bomb);
	*/
	
	

}