/*
** tests_strpbrk.c for tests_strpbrk in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Mon Mar 21 23:06:11 2016 Bastien DHIVER
** Last update Thu Mar 24 00:28:08 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_strpbrk_again(char *str, char *str2)
{
  str = "toto";
  str2 = "o";
  assert(strpbrk(str, str2) == &str[1]);
  str2 = "to";
  assert(strpbrk(str, str2) == str);
  str2 = "\n";
  assert(strpbrk(str, str2) == NULL);
  str = "abcdefghijkl";
  str2 = "i";
  assert(strpbrk(str, str2) == &str[8]);
  str2 = "l";
  assert(strpbrk(str, str2) == &str[11]);
  str2 = "";
  assert(strpbrk(str, str2) == NULL);
}

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
  assert(strpbrk(str, str) == str);
  str = "trucmachinpatatz";
  str2 = "z";
  assert(strpbrk(str, str2) == &str[15]);
  tests_strpbrk_again(str, str2);
}
