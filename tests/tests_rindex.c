/*
** tests_rindex.c for tests_rindex in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Wed Mar 16 23:47:29 2016 Bastien DHIVER
** Last update Thu Mar 24 00:11:15 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_rindex(void)
{
  char	*empty;
  char	*str;

  empty = "";
  str = "patate";
  assert(rindex(empty, 'T') == NULL);
  assert(rindex(empty, 0) == empty);
  assert(rindex(str, 'z') == NULL);
  assert(rindex(str, 'p') == str);
  assert(rindex(str, 'a') == &str[3]);
  assert(rindex(str, 't') == &str[4]);
  assert(rindex(str, 'e') == &str[5]);
  assert(rindex(str, 0) == &str[6]);
  assert(rindex(str, 'z') == NULL);
  str = "abcdefghijkl";
  assert(rindex(str, 'a') == str);
}
