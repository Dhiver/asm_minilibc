/*
** tests_memset.c for tests_memset in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Tue Mar 15 00:27:34 2016 Bastien DHIVER
** Last update Tue Mar 15 00:38:45 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_memset(void)
{
  char	buf[42];
  char	little_buf;
  int	i;

  i = -1;
  little_buf = 'r';
  assert(memset(buf, 'z', 42) == buf);
  while (++i < 42)
    assert(buf[i] == 'z');
  assert(memset(buf, 'a', 0) == buf);
  while (++i < 42)
    assert(buf[i] == 'z');
  assert(memset(buf, 't', 41) == buf);
  while (++i < 41)
    assert(buf[i] == 't');
  assert(buf[41] == 'z');
  assert(memset(&little_buf, 'o', 1) == &little_buf);
  assert(little_buf == 'o');
}

