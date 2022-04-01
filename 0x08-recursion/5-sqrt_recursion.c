#include "main.h"
/**
 *_evaluate - evaluate function sqrt
 *@r: interger
 *@n: interger
 *Return: evaluate sqrt
 */

int _evaluate(int r, int n)
{
/*Evaluate function*/
if (n == 0 || n == 1)
return (n);

else if (r * r < n)
return (_evaluate(r + 1, n));

else if (r * r == n) /*Condiction base*/
return (r);

return (-1);

return (-1);
}

/**
 *_sqrt_recursion - evaluate sqrt
 *@n: interger
 *Return: Sgrt_recursion
*/

int _sqrt_recursion(int n)
{
int r = 0;

if (r < 0) /*If n is negative*/
return (-1);

else
{
return (_evaluate(r, n)); /*Recursive call*/
}

}
