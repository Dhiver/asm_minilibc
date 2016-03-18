/*
** tests_strcmp.c for strcmp_test in /home/max/rendu/asm_minilibc/tests
** 
** Made by Maxime
** Login   <jarry_m@epitech.net>
** 
** Started on  Thu Mar 17 10:06:24 2016 Maxime
** Last update Fri Mar 18 10:43:32 2016 Bastien DHIVER
*/

#include "tests.h"

void	test_again_strcmp(char *str, char *str1)
{
  assert(strcmp(str1, str) == '\0' - 'c');
  assert(strcmp(str, str) == 0);
  assert(strcmp("abcd", "abcd") == 0);
  str1 = "zbcd";
  assert(strcmp(str, str1) == 'a' - 'z');
  str1 = "aycd";
  assert(strcmp(str, str1) == 'b' - 'y');
  str = "abcdzz";
  str1 = "abcdze";
  assert(strcmp(str, str) == 0);
  assert(strcmp(str1, str) == 'e' - 'z');
}

void	tests_strcmp(void)
{
  char	*str;
  char	*str1;

  str = "toto";
  assert(strcmp(str, str) == 0);
  str = "patate";
  str1 = "zzz";
  assert(strcmp(str, str1) == 'p' - 'z');
  str = "";
  str1 ="a";
  assert(strcmp(str, str) == 0);
  assert(strcmp(str1, str) == 'a' - '\0');
  assert(strcmp(str, str1) == '\0' - 'a');
  assert(strcmp(str1, str1) == 0);
  str = "abcd";
  str1 = "ab";
  assert(strcmp(str, str1) == 'c' - '\0');
  test_again_strcmp(str, str1);
}
