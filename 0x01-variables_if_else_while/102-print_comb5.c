#include <stdio.h>

int main(void)
{
	  int num1, num2;
	    num1 = 0;
	      num2 = 0;
	        while (num1 <= 99)
			  {
				      while (num2 <= 99)
					          {
							        putchar(num1 / 10 + '0');
								      putchar(num1 % 10 + '0');
								            putchar(' ');
									          putchar(num2 / 10 + '0');
										        putchar(num2 % 10 + '0');
											      if (num1 != 99 || num2 != 99)
												            {
														            putchar(',');
															            putchar(' ');
																          }
											            num2++;
												        }
				          num1++;
					      num2 = 0;
					        }
		  return 0;
}
