/*
[���׸� 1]: ���� ����

��ǻ�� ���α׷��� �򰡰��� (����25��)
�а�: ��ǻ�� ���к�
�й�: 202202563
�̸�: �̽���

���� ����: ���� ������,���� Ȯ���� ��Ȳ Ȯ�ι� �ڷγ� 19�� ���� ���� Ȯ��
*/

#include<stdio.h>
#include "korea.h"

int main(void)
{
	
	
	
	int task=0;


	printf("�ȳ��ϼ���\n");
	printf("2022�� 6�� 12�� �ڷγ� ��Ȳ�� ������ 1, �ڷγ�19�� ������ Ȯ���Ϸ��� 2, ���α׷��� �����Ϸ��� 3�� �Է����ּ���.\n");
	


	int check = 1;
	while (check == 1)
	{
		scanf("%d", &task);

		int *tp;
		int **tpp;//[���׸� 6]: ������ Ȱ��- ���������� ���
		tp = &task;
		tpp = &tp;

		if (**tpp == 1)
		{
			printf("�ڷγ� ��Ȳ�� �����Ͽ����ϴ�.\n");
			check = 0;
		}
		else if (**tpp == 2)
		{
			printf("�ڷγ�19�� ���� Ȯ���� �����Ͽ����ϴ�.\n");
			check = 0;
		}
		else if (**tpp == 3)
		{
			printf("�����մϴ�.");
			return 0;
		}
		else
		{
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.\n");
		}

	}

	if (task == 2)
	{
		FILE* fp=NULL;//[���׸� 7]: ���� ����� ���
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
		printf("������Ȳ�� ������ 0,������ ��Ȳ�� ������ 1�� �Է����ּ���.\n");

		int a;
		int * ap;//[���׸� 4]: ������ ���
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
				printf("������ �������ּ���\n");
				printf("1�� ��� \n2�� ���� \n3�� �λ�\n4�� �泲\n5�� ��õ \n6�� ���\n7�� �뱸\n8�� �泲\n9�� ����\n10�� ����\n11�� ���\n12�� ����\n13�� ����\n14�� ����\n15�� ���\n16�� ����\n17�� ����\n");
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
						printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.\n");
					}
				}
			}
			else
			{
				printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.\n");
			}
		}
	}
}