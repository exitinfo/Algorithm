#include<stdio.h>
//#include<time.h>
//9517�� ���� ���� ũ�ξ�Ƽ��
void main() {
	int player, qu, ti, tima;
	char an;
	int i ;
//	int p1, p2, p3, p4, p5, p6, p7, p8;
//	int play[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int bomb; //3�� 30�ʰ� ������ ������.
//	clock_t start, end;

//	player = qu = ti = 0;

	
	


//	bomb = 0;
//	i = 0;
	ti = 0;
//	start = clock();
	tima = 0;
	player = 0;
	//	printf("%d���� ���� �Ͻʽÿ�\n", bomb);
//	printf("���� �� \n");
//	scanf("%c", &an);

//	printf("��ź�� ��� �ִ� ��� : \n");
	scanf("%d", &player);	//���� ���� �� ��ź�� ��� �ִ� ���(1~8) �Է�
//	printf("������ ���� :\n"); //1~100��
	scanf("%d", &qu);	//������ ���� (1~100) �Է�
	
	while (qu--) { //������ ���� ��ŭ �ݺ��Ѵ�.
		
//			printf("%d��° ������ ����ϱ���� �ɸ��ð�, ��� : \n", i);//�ɸ��ð� ��, ���T,N,P�� �ϳ�
			scanf("%d  %c", &ti, &an);	//������ ����ϱ� ���� �ɸ� �ð�, �÷��̾��� ���(Z, N, P) �Է�
			tima += ti;
			if (tima >= 210) break;	//���ѽð� 3��30�� �̹Ƿ� 210�ʰ� ������ �����Ѵ�.
//			printf("%d \n", tima);
			if (an == 'T') {	//������ ��������
				player++;	//���� �÷��̾�� �Ѿ��.
				if (player == 9)	//8����� �̹Ƿ� 9�Ǹ� �÷��̾� 1���� �ٽ� ����
					player = 1;
			}
			else if (an == 'P' || an == 'N') {
		
			}
	}
	printf("%d \n", player);	//��ź�� �Ͷ߸� ��� ���
	/*
	while (ti <= 210){

		if (an == 'T') {
			i++;
			if (i == 8)
				i = 0;
			bomb = play[i];
			printf("%d���� ���� �Ͻʽÿ�\n", bomb);
			printf("���� �� \n");
		}
		else if (an == 'N' || an == 'P') {
			printf("%d���� ���� ���� \n", bomb);
			printf("���� �� \n");
		}

		scanf("%c", &an);

		end = clock();
		ti = (int)(end - start) / CLOCKS_PER_SEC;

	}
	
	printf("%d \n", ti);
	printf("��ź �Ͷ߸� ��� : %d \n", bomb);
	*/
	
	

}