/*
** tests_strcspn.c for tests_strcspn in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Tue Mar 22 14:20:43 2016 Bastien DHIVER
** Last update Fri Mar 25 09:37:20 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_strcspn(void)
{
  char	*str;
  char	*str2;

  str = "";
  str2 = "";
  assert(strcspn(str, str2) == 0);
  str = "013";
  str2 = "ABCDEF4960910";
  assert(strcspn(str2, str2) == 0);
  assert(strcspn(str2, str) == 9);
  assert(strcspn(str, str2) == 0);
  str = "ifcba73";
  str2 = "1234567890";
  assert(strcspn(str, str2) == 5);
  str = "toto";
  str2 = "adft";
  assert(strcspn(str, str2) == 0);
  str = "aaaa";
  str2 = "bcde";
  assert(strcspn(str, str2) == 4);
  str = "Vas tu trouver le bon nombre ?";
  str2 = "ALORSv?";
  assert(strcspn(str, str2) == 11);
}
