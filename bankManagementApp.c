//this is the start of a bank management app that I found in codewithc website. this is for educational purpose only.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float interest(float,float,int);
void foreDelay(void);
void new_acc(void);
void view_list(void);
void edit(void);
void transact(void);
void erase(void);
void see(void);
void close(void);
void menu(void);

void main()
{
	unsigned long int i;
	char pass[10],pswd[10]="code";
	printf("Enter the pswd\n");
	scanf("%d",pass);
	if(strcmp(pass,pswd)==0)
	{
		printf("password correct\n");
		printf("Loading");
		for(i=0;i<1000000;i++)
		{
			printf(".");
		}
		printf("\n");
		system("clr");
		//calling menu() function
	}
	else
	{
		printf("pswd not match\n");
	}

}
