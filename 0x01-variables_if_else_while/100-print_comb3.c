#include <stdio.h>
void pint(int num);

/**
 * main - Entry function
 * Return: always returb 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 89; i++)
	{

		if (i < 10)
			putchar('0');
		pint(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
void pint(int num)
	    {  
		                if(num/10)
					                pint(num/10);
				                
				        putchar(num%10 + '0' );
					        
					        
					        
					        
					    }
