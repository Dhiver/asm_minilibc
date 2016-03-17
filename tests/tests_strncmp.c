/*
** tests_strncmp.c for tests_strncmp in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Thu Mar 17 00:20:17 2016 Bastien DHIVER
** Last update Thu Mar 17 01:26:16 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_strncmp(void)
{
  char	*str;

  str = "toto";
  assert(strncmp(str, str, 9999999) == 0);
  assert(strncmp("patate", "z", 0) == 0);
  assert(strncmp("", "", 1) == 0);
  assert(strncmp("a", "", 1) == 1);
  assert(strncmp("", "a", 1) == -1);
  assert(strncmp("a", "a", 1) == 0);
  assert(strncmp("abcd", "ab", 3) == 1);
  assert(strncmp("ab", "abcd", 3) == -1);
  assert(strncmp("abcd", "abcd", 3) == 0);
  assert(strncmp("abcd", "abcd", 4) == 0);
  assert(strncmp("abcd", "zbcd", 4) == -1);
  assert(strncmp("abcd", "aycd", 4) == -1);
  assert(strncmp("abcdzz", "abcdzz", 4) == 0);
  assert(strncmp("abcdze", "abcdzz", 4) == 0);
}
