#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <string.h>
void gamestart()
{
	int x,y,nkey,x0,y0,step,n;
	char key;
	char *a[100];
	int i,j;
	for(i=0;i<15;i++)
	{
		a[i] = (char*)malloc(sizeof(char)*100);
	}
	step=0;
	point2:printf("������С��Ϸ��w,s,a,d�������ң���ESC���˳������ǡ�o��\n"); 
	readmap(a);
	system("cls");
	printf("���س�����ʼ\n");
	x=7;y=9;
	x0=7;y0=9;
	while(1)
	{
		if((a[2][4]=='B')&&(a[2][13]=='B')&&(a[11][4]=='B')&&(a[11][13]=='B'))
		{
			system("cls"); 
			printf("��ϲ�����������ӣ���\n");
			printf("�ƶ�������%d\n",step);
			FILE *fpWrite=fopen("score.txt","w");
					fprintf(fpWrite,"%d\n",step);
				fclose(fpWrite);
			break; 
		} 
			if((a[2][4]!='B')&&(a[2][4]!='o'))
			   a[2][4]='D';
			if((a[2][13]!='B')&&(a[2][13]!='o'))
			   a[2][13]='D'; 
			if((a[11][4]!='B')&&(a[11][4]!='o'))
			   a[11][4]='D'; 
			if((a[11][13]!='B')&&(a[11][13]!='o'))
			   a[11][13]='D';
		point:key=getch();nkey=(int)key;
		
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
			   			x--;step++;
				   		a[x0][y0]=' ';
				   		a[x][y]='o';
				   		a[x-1][y]='B';
				   		x0=x;y0=y;
					    break;
     				}
     				else
     				{
				        	x--;step++;
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
	    			   	y--;step++;
			        	a[x0][y0]=' ';
			        	a[x][y-1]='B';
				   		a[x][y]='o';
				   		x0=x;y0=y;
    			    }
					else
					{
						y--;step++;
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
	    			   	y++;step++;
				   		a[x0][y0]=' ';
				   		a[x][y+1]='B';
				   		a[x][y]='o';
				   		x0=x;y0=y;
    			    }
			        else
			        {
        				y++;step++;
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
	    				x++;step++;
			    		a[x0][y0]=' ';
			    		a[x+1][y]='B';
				   		a[x][y]='o';
				   		x0=x;y0=y;
	    			}
					else
					{
						x++;step++;
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
}