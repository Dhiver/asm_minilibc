/*
** tests_strdup.c for tests_strdup in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Thu Mar 17 01:24:58 2016 Bastien DHIVER
** Last update Fri Mar 25 09:07:18 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_strdup(void)
{
  char	*str;
  char	*str2;
  int	i;

  str = "toto";
  str2 = strdup(str);
  i = -1;
  while (++i < 5)
    assert(str2[i] == str[i]);
  str = "";
  str2 = strdup(str);
  assert(*str2 == '\0');
  str = "ab";
  str2 = strdup(str);
  i = -1;
  while (++i < 3)
    assert(str2[i] == str[i]);
}
