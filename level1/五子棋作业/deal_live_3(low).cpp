#include <stdio.h>
#include <stdlib.h>
void deal_live_3(char *a[30])//检查活三，黑子有活三返回1，白子有活三返回2 
{
	int i, j, n = 0;//n用来判断进攻或者防御是否成功 
	int liner, columnr;
	/*for(i=1;i<30;i=i+2)
	{
		if(n==1)break;
		for(j=0;j<29;j=j+2)
	}*/
	for (i = 1; i < 30; i = i + 2)
	{
		if (n == 1)break;
		for (j = 0; j < 29; j = j + 2)
		{
			if (((a[i][j] == ' ') || (a[i][j + 8] == ' ')) && (a[i][j + 2] == 'X') && (a[i][j + 4] == 'X') && (a[i][j + 6] == 'X'))
			{
				if (a[i][j] == ' ')
				{
					a[i][j] = 'O';
				}
				else a[i][j + 8] = 'O'; n = 1;
				break;
			}
			if (((a[i][j] == ' ') || (a[i + 8][j] == ' ')) && (a[i + 2][j] == 'X') && (a[i + 4][j] == 'X') && (a[i + 6][j] == 'X'))
			{
				if (a[i][j] == ' ')
				{
					a[i][j] = 'O';
				}
				else a[i + 8][j] = 'O'; n = 1;
				break;
			}
			if (((a[i][j] == ' ') || (a[i + 8][j + 8] == ' ')) && (a[i + 2][j + 2] == 'X') && (a[i + 4][j + 4] == 'X') && (a[i + 6][j + 6] == 'X'))
			{
				if (a[i][j] == ' ')
				{
					a[i][j] = 'O';
				}
				else a[i + 8][j + 8] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 8][j - 8] == ' ')) && (a[i + 2][j - 2] == 'X') && (a[i + 4][j - 4] == 'X') && (a[i + 6][j - 6] == 'X')) && (j > 10))
			{
				if (a[i][j] == ' ')
				{
					a[i][j] = 'O';
				}
				else a[i + 8][j - 8] = 'O'; n = 1;
				break;
			}
			if (((a[i][j] == ' ') || (a[i][j + 8] == ' ')) && (a[i][j + 2] == 'O') && (a[i][j + 4] == 'O') && (a[i][j + 6] == 'O'))
			{
				if (a[i][j] == ' ')
				{
					a[i][j] = 'O';
				}
				else a[i][j + 8] = 'O'; n = 1;
				break;
			}
			if (((a[i][j] == ' ') || (a[i + 8][j] == ' ')) && (a[i + 2][j] == 'O') && (a[i + 4][j] == 'O') && (a[i + 6][j] == 'O'))
			{
				if (a[i][j] == ' ')
				{
					a[i][j] = 'O';
				}
				else a[i + 8][j] = 'O'; n = 1;
				break;
			}
			if (((a[i][j] == ' ') || (a[i + 8][j + 8] == ' ')) && (a[i + 2][j + 2] == 'O') && (a[i + 4][j + 4] == 'O') && (a[i + 6][j + 6] == 'O'))
			{
				if (a[i][j] == ' ')
				{
					a[i][j] = 'O';
				}
				else a[i + 8][j + 8] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 8][j - 8] == ' ')) && (a[i + 2][j - 2] == 'O') && (a[i + 4][j - 4] == 'O') && (a[i + 6][j - 6] == 'O')) && (j > 10))
			{
				if (a[i][j] == ' ')
				{
					a[i][j] = 'O';
				}
				else a[i + 8][j - 8] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i][j + 10] == ' ')) && (a[i][j + 2] == 'X') && (a[i][j + 4] == ' ') && (a[i][j + 6] == 'X')) && (a[i][j + 8] == 'X'))
			{
				a[i][j + 4] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i][j + 10] == ' ')) && (a[i][j + 2] == 'X') && (a[i][j + 4] == 'X') && (a[i][j + 6] == ' ')) && (a[i][j + 8] == 'X'))
			{
				a[i][j + 6] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j + 10] == ' ')) && (a[i + 2][j + 2] == 'X') && (a[i + 4][j + 4] == ' ') && (a[i + 6][j + 6] == 'X')) && (a[i + 8][j + 8]) == 'X')
			{
				a[i + 4][j + 4] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j + 10] == ' ')) && (a[i + 2][j + 2] == 'X') && (a[i + 4][j + 4] == 'X') && (a[i + 6][j + 6] == ' ')) && (a[i + 8][j + 8]) == 'X')
			{
				a[i + 6][j + 6] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j] == ' ')) && (a[i + 2][j] == 'X') && (a[i + 4][j] == ' ') && (a[i + 6][j] == 'X')) && (a[i + 8][j] == 'X'))
			{
				a[i + 4][j] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j] == ' ')) && (a[i + 2][j] == 'X') && (a[i + 4][j] == 'X') && (a[i + 6][j] == ' ')) && (a[i + 8][j] == 'X'))
			{
				a[i + 6][j] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j - 10] == ' ')) && (a[i + 2][j - 2] == 'X') && (a[i + 4][j - 4] == ' ') && (a[i + 6][j - 6] == 'X') && (a[i + 8][j - 8] == 'X')) && (j > 12))
			{
				a[i + 4][j - 4] = 'O'; n = 1;
				break;
			}
			if ((((a[i][j] == ' ') || (a[i + 10][j - 10] == ' ')) && (a[i + 2][j - 2] == 'X') && (a[i + 4][j - 4] == 'X') && (a[i + 6][j - 6] == ' ') && (a[i + 8][j - 8] == 'X')) && (j > 12))
			{
				a[i + 6][j - 6] = 'O'; n = 1;
				break;
			}
		}
	}

	if (n == 0)//判断是否进攻成功 
	{
		for (i = 1; i < 30; i = i + 2)
		{
			if (n == 1)break;
			for (j = 0; j < 29; j = j + 2)
			{
				if ((a[i][j] == 'O') && (a[i][j + 2] == ' '))
				{
					a[i][j + 2] = 'O'; n = 1; break;
				}
				else if ((a[i][j] == 'O') && (a[i][j - 2] == ' ') && (j > 2))
				{
					a[i][j - 2] = 'O'; n = 1; break;
				}
				else if ((a[i][j] == 'O') && (a[i + 2][j] == ' '))
				{
					a[i + 2][j] = 'O'; n = 1; break;
				}
				else if ((a[i][j] == 'O') && (a[i - 2][j] == ' ') && (i > 2))
				{
					a[i + 2][j - 2] = 'O'; n = 1; break;
				}
				else if ((a[i][j] == 'O') && (a[i + 2][j + 2] == ' '))
				{
					a[i + 2][j + 2] = 'O'; n = 1; break;
				}
				else if ((a[i][j] == 'O') && (a[i - 2][j - 2] == ' ') && (i > 2) && (j > 2))
				{
					a[i - 2][j - 2] = 'O'; n = 1; break;
				}
				else if ((a[i][j] == 'O') && (a[i + 2][j - 2] == ' ') && (j > 2))
				{
					a[i + 2][j - 2] = 'O'; n = 1; break;
				}
				else if ((a[i][j] == 'O') && (a[i - 2][j + 2] == ' ') && (i > 2))
				{
					a[i - 2][j + 2] = 'O'; n = 1; break;
				}
			}
		}
	}
	if (n == 0)
	{
		for (i = 1; i < 30; i = i + 2)
		{
			for (j = 0; j < 29; j = j + 2)
			{
				if (a[i][j] == 'X')
				{
					a[i + 2][j + 2] = 'O'; break;
				}
			}
		}
	}
}