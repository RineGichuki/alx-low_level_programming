#include <stdlib.h>

#include <stdio.h>

#include <time.h>



/* more headers go there */



/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 0)

								printf("%d is positive\n", n);

						if (n == 0)

									printf("%d is zero\n", n);

							if (n < 0)

										printf("%d is negative\n", n);

								return (0);

}

Footer

© 2022 GitHub, Inc.
