#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main Entry
 * @argc: input
 * @argv: input
 * Return: Always 0 (success)
**/
int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc == 2)
{
cents = atoi(*(argv + 1));
while (cents > 0)
{
if (cents % 25 < cents)
{
cents -= 25;
coins++;
}
else if (cents % 10 < cents)
{
cents -= 10;
coins++;
}
else if (cents % 5 < cents)
{
cents -= 5;

