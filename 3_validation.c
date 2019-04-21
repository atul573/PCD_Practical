#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char username[10],username1[10]="atul",password[10],password1[10]="1234";
	printf("enter username");
    gets(username1);
	printf("enter password");
    gets(password1);
	
	if(strcmp(username1,username))
	{
		if(strcmp(password1,password))
		{
		  	printf("valid");	
		}
	}
	else
	{
		printf("not valid");
	}
	return 0;
	getch();
	 
}
