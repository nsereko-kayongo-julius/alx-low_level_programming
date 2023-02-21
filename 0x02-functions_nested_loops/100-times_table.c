#include "main.h"

/**
* print_times_table - print n timestable statr\ing with 0
* @n: parameter
*/
void print_times_table(int n)
{
	int u, v, w;

	if (n >= 0 && n <= 14)
	{
		for (u = 0; u <= n; u++)
		{
			for (v = 0; v <= n; v++)
			{
				w = u * v;
				if (w > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (w > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((w / 10) % 10) + '0');
					_putchar((w % 10) + '0');
				}
				else
				{
					if (v != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(w + '0');
				}
			}
			_putchar('\n');
		}
	}
}
