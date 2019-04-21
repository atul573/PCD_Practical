include <stdio.h>
int main()
{
	char text[100];
	int digits, vowels, symbols;
	vowels = 0;
	digits = 0;
	symbols = 0;
	printf("enter the message : ");
	scanf("%s",text)
	
	for (i = 0, text[i]!=0, i ++){
		
		
		
		if (text[i]== 'a' || text[i]== 'e' || text[i]== 'i' || text[i]== 'o' || text[i]== 'u' ||
		text[i]== 'A' || text[i]== 'E' || text[i]== 'I' || text[i]== 'O' || text[i]== 'U' )
		{
			
			++vowels;
			
			}	
			else if (text[i]>='0' && text[i]<='9') 
			{
				++digits;
				}
				else if (text[i]== '!' || text[i]== '@' || text[i]== '#' || text[i]== '$' || text[i]== '%' || text[i]== '^' || text[i]== '&' || text[i]== '*')
				{
					++symbols;
					}
					
		}
		printf("Vowels: %d",vowels);
		printf("digits: %d",digits);
		printf("symbols: %d",symbols);
	
	
	}
