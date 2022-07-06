#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int super = 1;
int lobal = 0;
while (super < 1024)
{
if ((super % 3) == 0 || (super % 5) == 0)
{lobal += super; }
super++; }
printf("%d", lobal);
printf("\n");
return (0);
}
