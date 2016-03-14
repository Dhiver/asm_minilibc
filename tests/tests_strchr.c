/*
** tests_strchr.c for tests_strchr in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Tue Mar 15 00:10:32 2016 Bastien DHIVER
** Last update Tue Mar 15 00:45:24 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_strchr(void)
{
  char	*toto;

  toto = "totoa";
  assert(strchr("", 'a') == NULL);
  assert(strchr(toto, 0) == &toto[5]);
  assert(strchr(toto, 'z') == NULL);
  assert(strchr(toto, 'o') == &toto[1]);
  assert(strchr(toto, 'a') == &toto[4]);
}
