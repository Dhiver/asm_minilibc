/*
** tests_strcasecmp.c for tests_strcasecmp in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Fri Mar 18 15:09:13 2016 Bastien DHIVER
** Last update Thu Mar 24 00:07:04 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_strcasecmp_agin(char *str, char *str1)
{
  assert(strcasecmp(str1, str) == '\0' - 'c');
  assert(strcasecmp(str, str) == 0);
  str = "AbcD";
  str1 = "aBcD";
  assert(strcasecmp(str, str1) == 0);
  str1 = "zBcd";
  assert(strcasecmp(str, str1) == 'a' - 'z');
  str1 = "aycd";
  assert(strcasecmp(str, str1) == 'b' - 'y');
  str = "abcdZz";
  str1 = "abcdZe";
  assert(strcasecmp(str, str) == 0);
  assert(strcasecmp(str1, str) == 'e' - 'z');
  str = "AbcdZZ";
  assert(strcasecmp(str1, str) == 'e' - 'z');
  str = "TOTO";
  str1 = "";
  assert(strcasecmp(str, str1) == 't' - '\0');
  assert(strcasecmp(str1, str) == '\0' - 't');
  str = "ABZCHDHDH";
  str1 = "avdvdvdv";
  assert(strcasecmp(str, str1) == 'b' - 'v');
}

void	tests_strcasecmp(void)
{
  char	*str;
  char	*str1;

  str = "Toto";
  assert(strcasecmp(str, str) == 0);
  str = "patate";
  str1 = "zZz";
  assert(strcasecmp(str, str1) == 'p' - 'z');
  str = "";
  str1 ="A";
  assert(strcasecmp(str, str) == 0);
  assert(strcasecmp(str1, str) == 'a' - '\0');
  assert(strcasecmp(str, str1) == '\0' - 'a');
  assert(strcasecmp(str1, str1) == 0);
  str = "ABcd";
  str1 = "aB";
  assert(strcasecmp(str, str1) == 'c' - '\0');
  tests_strcasecmp_agin(str, str1);
}
