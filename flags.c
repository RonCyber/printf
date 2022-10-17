#include "main.h"
/**
 * flags - activates flags _printf finds
 * @s: holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int flags(char s, flags_t *f)
{
int i = 0;
switch (s)
{
case '+':
f->plus = 1;
i = 1;
break;
case ' ':
f->space = 1;
i = 1;
break;
case '#':
f->hash = 1;
i = 1;
break;
}
return (i);
}
