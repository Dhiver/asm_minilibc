/*
** tests_strlen.c for tests_strlen in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Mon Mar 14 23:53:25 2016 Bastien DHIVER
** Last update Tue Mar 22 16:28:31 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_strlen(void)
{
  char	*str;

  str = "";
  assert(strlen(str) == 0);
  str = "    ";
  assert(strlen(str) == 4);
  str = "a";
  assert(strlen(str) ==	1);
  str = "ab";
  assert(strlen(str) == 2);
  str = "42";
  assert(strlen(str) == 2);
  str = "azertyuiopqsdfghjklmwxcvbn";
  assert(strlen(str) == 26);
}
