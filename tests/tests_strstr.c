/*
** tests_strstr.c for tests_strstr in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Thu Mar 17 01:29:09 2016 Bastien DHIVER
** Last update Fri Mar 25 09:51:18 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_strstr(void)
{
  char	*str;
  char	*str2;

  str = "cd";
  str2 = "abcdabcd";
  assert(strstr(NULL, "") == NULL);
  assert(strstr(str, str) == str);
  assert(strstr(str2, str) == &str2[2]);
  assert(strstr(&str2[3], str) == &str2[6]);
  str = "zz";
  assert(strstr(str2, str) == NULL);
  str = "toto";
  assert(strstr(str, str) == str);
  str = "blaroutin";
  str2 = "rou";
  assert(strstr(str, str2) == &str[3]);
  str = "abcdefghijkl";
  str2 = "";
  assert(strstr(str, str2) == str);
}
