/*
** tests_strncmp.c for tests_strncmp in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Thu Mar 17 00:20:17 2016 Bastien DHIVER
** Last update Thu Mar 24 00:13:58 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_strncmp_again(char *str, char *str2)
{
  str2 = "zbcd";
  assert(strncmp(str, str2, 4) == 'a' - 'z');
  str = "aycd";
  assert(strncmp(str2, str, 4) == 'z' - 'a');
  str = "abcdzz";
  str2 = "abcdzz";
  assert(strncmp(str, str2, 4) == 0);
  str2 = "abcdze";
  assert(strncmp(str2, str, 4) == 0);
  str = "toto";
  str2 = "";
  assert(strncmp(str, str2, 42) == 't' - '\0');
  assert(strncmp(str2, str, 42) == '\0' - 't');
  str2 = "totototo";
  assert(strncmp(str, str2, 42) == '\0' - 't');
}

void	tests_strncmp(void)
{
  char	*str;
  char	*str2;

  str = "patate";
  str2 = "z";
  assert(strncmp(str, str, 9999999) == 0);
  assert(strncmp(str, str2, 0) == 0);
  str = "";
  str2 = "";
  assert(strncmp(str, str2, 1) == 0);
  str = "a";
  str2 = "";
  assert(strncmp(str, str2, 1) == 'a' - '\0');
  assert(strncmp(str2, str, 1) == '\0' - 'a');
  str = "a";
  assert(strncmp(str, str, 1) == 0);
  str = "abcd";
  str2 = "ab";
  assert(strncmp(str, str2, 3) == 'c' - '\0');
  assert(strncmp(str2, str, 3) == '\0' - 'c');
  str2 = "abcd";
  assert(strncmp(str, str2, 3) == 0);
  assert(strncmp(str, str2, 4) == 0);
  tests_strncmp_again(str, str2);
}
