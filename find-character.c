#include <stdio.h>

int main() 
{
	
   char ch;
   printf("enter character ");
   scanf("%c",&ch);
    
    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z' )
    {
    	printf(" THIS IS A ALPHABET ");
	}
	else if (ch>='0' && ch<='9')
	{
		printf("THIS IS A NUMBER ");
	}
	else 
	{
		printf("THIS IS A SPECIAL CHARACTER");
	}
	   
  
   
}
