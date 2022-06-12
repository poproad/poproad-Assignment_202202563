/*
[평가항목 1]: 과제 설명

컴퓨터 프로그래밍 평가과제 (배점25점)
학과: 컴퓨터 공학부
학번: 202202563
이름: 이승현

과제 주제: 전국 광역시,도별 확진자 현황 확인및 코로나 19에 대한 정보 확인
*/

#include<stdio.h>
#include "korea.h"

int main(void)
{
	
	
	
	int task=0;


	printf("안녕하세요\n");
	printf("2022년 6월 12일 코로나 현황을 보려면 1, 코로나19의 정보를 확인하려면 2, 프로그램을 종료하려면 3을 입력해주세요.\n");
	


	int check = 1;
	while (check == 1)
	{
		scanf("%d", &task);

		int *tp;
		int **tpp;//[평가항목 6]: 포인터 활용- 이중포인터 사용
		tp = &task;
		tpp = &tp;

		if (**tpp == 1)
		{
			printf("코로나 현황을 선택하였습니다.\n");
			check = 0;
		}
		else if (**tpp == 2)
		{
			printf("코로나19의 정보 확인을 선택하였습니다.\n");
			check = 0;
		}
		else if (**tpp == 3)
		{
			printf("종료합니다.");
			return 0;
		}
		else
		{
			printf("잘못된 입력입니다. 다시 입력해주세요.\n");
		}

	}

	if (task == 2)
	{
		FILE* fp=NULL;//[평가항목 7]: 파일 입출력 사용
		int c;
		fp = fopen("covid.txt", "r");
		while((c=fgetc(fp)) != EOF)
		{
			putchar(c);
		}
		printf("\n");
		fclose(fp);
	}

	if (task == 1)
	{
		printf("전국현황을 보려면 0,지역별 현황을 보려면 1을 입력해주세요.\n");

		int a;
		int * ap;//[평가항목 4]: 포인터 사용
		ap = &a;

		check = 1;
		int check2 = 1;

		while (check == 1)
		{
			scanf("%d", &a);
			if (*ap == 0)
			{
				check = 0;
				korea(0);
			}
			else if (*ap == 1)
			{
				check = 0;
				printf("지역을 선택해주세요\n");
				printf("1번 경기 \n2번 서울 \n3번 부산\n4번 경남\n5번 인천 \n6번 경북\n7번 대구\n8번 충남\n9번 전북\n10번 전남\n11번 충북\n12번 광주\n13번 강원\n14번 대전\n15번 울산\n16번 제주\n17번 세종\n");
				int n;
				while (check2 == 1)
				{
					scanf("%d", &n);
					if (n >= 1 && n <= 17)
					{
						check2 = 0;
						korea(n);
					}
					else
					{
						printf("잘못된 입력입니다. 다시 입력해주세요.\n");
					}
				}
			}
			else
			{
				printf("잘못된 입력입니다. 다시 입력해주세요.\n");
			}
		}
	}
}