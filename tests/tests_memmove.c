/*
** tests_memmove.c for memmove in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Tue Mar 15 20:17:44 2016 Bastien DHIVER
** Last update Thu Mar 17 01:25:54 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_memmove(void)
{
  int	i;
  char	buf[5];
  char	buf2[5];
  char	*str;
  char	*str2;

  str = strdup("memmove can be very useful......");
  str2 = strdup("memmove can be very very useful.");
  i = -1;
  while (++i < 4)
    buf[i] = 'a';
  buf[i] = '\0';
  assert(memmove(buf, buf2, 0) == buf);
  i = -1;
  while (++i < 4)
    assert(buf[i] == 'a');
  assert(memmove(str + 20, str + 15, 11) == str + 20);
  while (*str2)
    assert(*str++ == *str2++);
}
