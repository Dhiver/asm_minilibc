/*
** tests_strpbrk.c for tests_strpbrk in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Mon Mar 21 23:06:11 2016 Bastien DHIVER
** Last update Mon Mar 21 23:15:14 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_strpbrk(void)
{
  char	*str;
  char	*str2;

  str = NULL;
  str2 = "";
  assert(strpbrk(str, str2) == NULL);
  str2 = "";
  assert(strpbrk(str, str2) == str);
  str = "toto";
  str2 = "patate";
  assert(strpbrk(str, str2) == str);
  str = "zuzu";
  assert(strpbrk(str2, str) == NULL);
}
