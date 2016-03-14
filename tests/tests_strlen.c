/*
** tests_strlen.c for tests_strlen in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Mon Mar 14 23:53:25 2016 Bastien DHIVER
** Last update Tue Mar 15 00:05:19 2016 Bastien DHIVER
*/

#include "tests.h"

int	tests_strlen(void)
{
  assert(strlen("") == 0);
  assert(strlen("a") ==	1);
  assert(strlen("ab") == 2);
  assert(strlen("42") == 2);
  assert(strlen("azertyuiopqsdfghjklmwxcvbn") == 26);
  return (0);
}
