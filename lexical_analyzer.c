//in lexical analyzer entire source code is broken into the stresm of tokens 
//mainly three token are there : identifiers , operators and literals (constants)
#include<stdio.h>
#include<conio.h>
#include<string.h>
void iskey(char *srt2){
char *key[]={"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union", "unsigned","void","volatile","while"};
		for(int i=0;i<sizeof(key);i++){

		if(strcmp(str1,*(key+i)==0)
			return 0;
		else
			return 1;
   		}
}
int isvalid(char str1[]){
   for(int i=0;i<sizeof(str1);i++)
	{
		str2[i]=srt1[i];
		if(str2[i]==" ")
		  iskey(srt2);
		if(isvalid(srt2)==1)
		   strcpy(*(st+i), str2); //save to symbol table 	
		
	}
	
}
int main()
{
	int ans;
	
	char *deli[]={"(",")","<",">","[","]","<?","?>","<%","%>",";"};
	char *oper[]={"+","*","/","%","=",">","<","==","!=",">=","<=","&&","||","!","&",">>","|","^","~","<<","&"};
	
	char str1[]="int a, b;";//,str2[100],*st[100];
	//rintf("%d",sizeof(str1));
	ans=isvalid(str1);
	if(ans==1)
		printf("Valid");
	else
		printf("InValid");
	getch();
}
