#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <string.h>
int main(int argc, char *argv[])
{
	int x,y,nkey,x0,y0,step,n;
	char key;
	char *a[100];
	int i,j;
	for(i=0;i<15;i++)
	{
		a[i] = (char*)malloc(sizeof(char)*100);
	}
	step=-1;//һ��ʼ��ѻس������ȥ�����Դ�-1��ʼ�����Ǵ�0��ʼ 
	printf("������С��Ϸ��w,s,a,d�������ң���ESC���˳������ǡ�o��\n"); 
	printf("�����ӡ�B���ƶ�����D���ϼ���\n");
	printf("������1��2ѡ��:");
	scanf("%d",&n);
	FILE *fpRead;
	if(n==1)
	{
		fpRead=fopen("boxmap1.txt","r");
	} 
	else
	{
		fpRead=fopen("boxmap2.txt","r");
	}
	if(fpRead==NULL)
	{
		return 0;
	}
	for(int i=0;i<15;i++)
	{
		fscanf(fpRead,"%s",a[i]);
		for(j=0;j<20;j++)
		{
			if(a[i][j]=='#')
	        	a[i][j]=' ';
		}
	}
	system("cls");
	printf("���س�����ʼ\n");
	x=7;y=9;
	x0=7;y0=9;
	while(true)
	{
		if((a[2][4]=='B')&&(a[2][13]=='B')&&(a[11][4]=='B')&&(a[11][13]=='B'))
		{
			system("cls"); 
			printf("��ϲ�����������ӣ���\n");
			printf("�ƶ�������%d\n",step);
			break; 
		} 
		point:key=getch();nkey=(int)key;step++;
		if(nkey==27)break;
		switch(key)
		{
		   case 'w':
		   	{
   			    if(a[x-1][y]=='X')goto point;
			    if((x>0)&&(a[x-1][y]!='X'))
				{
                	if(a[x-1][y]=='B')
    				{ 
       					if(a[x-2][y]=='X')goto point;
			   			x--;
				   		a[x0][y0]=' ';
				   		a[x][y]='o';
				   		a[x-1][y]='B';
				   		x0=x;y0=y;
					    break;
     				}
     				else
     				{
				        	x--;
				   			a[x0][y0]=' ';
				   			a[x][y]='o';
				   			x0=x;y0=y;
					    	break;
				        }
				    }
   		    }
   		    case 'a':
		   	{
   			    if(a[x][y-1]=='X')goto point;
				   if((y>0)&&(a[x][y-1]!='X'))
   			    {
   			    	if(a[x][y-1]=='B')
   			    	{
   			    		if(a[x][y-2]=='X')goto point;
	    			   	y--;
			        	a[x0][y0]=' ';
			        	a[x][y-1]='B';
				   		a[x][y]='o';
				   		x0=x;y0=y;
    			    }
					else
					{
						y--;
			        	a[x0][y0]=' ';
				   		a[x][y]='o';
				   		x0=x;y0=y;
					}  
					break;
			    } 
   		    }
   		    case 'd':
		   	{
			   if(a[x][y+1]=='X')goto point;
			   if(a[x][y+1]!='X')
   			    {
   			    	if(a[x][y+1]=='B')
   			    	{
   			    		if(a[x][y+2]=='X')goto point;
	    			   	y++;
				   		a[x0][y0]=' ';
				   		a[x][y+1]='B';
				   		a[x][y]='o';
				   		x0=x;y0=y;
    			    }
			        else
			        {
        				y++;
				   		a[x0][y0]=' ';
				   		a[x][y]='o';
				   		x0=x;y0=y;
        			}
				   break;
			    } 
   		    }
   		    case 's':
		   	{
   			    if(a[x+1][y]=='X')goto point;
				   if(a[x+1][y]!='X')
			    {
			    	if(a[x+1][y]=='B')
			    	{
			    		if(a[x+2][y]=='X')goto point;
	    				x++;
			    		a[x0][y0]=' ';
			    		a[x+1][y]='B';
				   		a[x][y]='o';
				   		x0=x;y0=y;
	    			}
					else
					{
						x++;
			    		a[x0][y0]=' ';
				   		a[x][y]='o';
				   		x0=x;y0=y;
					}
					
					break;
				}
   		    }defalt:break;
		}	
		system("cls");printf("�Թ�С��Ϸ��w,s,a,d�������ң���ESC���˳�\n");
        printf("�Ҳ����Լ��������߶����ԣ�\n");
        printf("�����ӡ�B���ƶ�����D���ϼ���\n");
		printf("�ƶ�������%d\n",step); 
		for(i=0;i<15;i++)
		{
			printf("%s\n",a[i]);
		}
	}
    system("pause");
	return 0;
}