#include <stdio.h>
int attack_live_3_2(int n, char *a[30])
{
	int i,j;
	if (n == 0)//判断是否防御成功 
	{
		for (i = 1; i < 30; i = i + 2)//利用“O OO”和“OO O”型活三进攻 
		{
			if (n == 1)break;
			for (j = 0; j < 29; j = j + 2)
			{
				if ((((a[i][j] == ' ') || (a[i][j + 10] == ' ')) && (a[i][j + 2] == 'O') && (a[i][j + 4] == ' ') && (a[i][j + 6] == 'O')) && (a[i][j + 8] == 'O'))
			{
				a[i][j + 4] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i][j + 10] == ' ')) && (a[i][j + 2] == 'O') && (a[i][j + 4] == 'O') && (a[i][j + 6] == ' ')) && (a[i][j + 8] == 'O'))
			{
				a[i][j + 6] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j + 10] == ' ')) && (a[i + 2][j + 2] == 'O') && (a[i + 4][j + 4] == ' ') && (a[i + 6][j + 6] == 'O')) && (a[i + 8][j + 8]) == 'O')
			{
				a[i + 4][j + 4] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j + 10] == ' ')) && (a[i + 2][j + 2] == 'O') && (a[i + 4][j + 4] == 'O') && (a[i + 6][j + 6] == ' ')) && (a[i + 8][j + 8]) == 'O')
			{
				a[i + 6][j + 6] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j] == ' ')) && (a[i + 2][j] == 'O') && (a[i + 4][j] == ' ') && (a[i + 6][j] == 'O')) && (a[i + 8][j] == 'O'))
			{
				a[i + 4][j] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j] == ' ')) && (a[i + 2][j] == 'O') && (a[i + 4][j] == 'O') && (a[i + 6][j] == ' ')) && (a[i + 8][j] == 'O'))
			{
				a[i + 6][j] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j - 10] == ' ')) && (a[i + 2][j - 2] == 'O') && (a[i + 4][j - 4] == ' ') && (a[i + 6][j - 6] == 'O') && (a[i + 8][j - 8] == 'O')) && (j > 12))
			{
				a[i + 4][j - 4] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j - 10] == ' ')) && (a[i + 2][j - 2] == 'O') && (a[i + 4][j - 4] == 'O') && (a[i + 6][j - 6] == ' ') && (a[i + 8][j - 8] == 'O')) && (j > 12))
			{
				a[i + 6][j - 6] = 'O'; n = 1;
				break;
			}
			}
		}
	}
	return n;
}