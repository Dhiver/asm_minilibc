/*
** tests_memcpy.c for tests_memcpy in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Tue Mar 15 10:35:24 2016 Bastien DHIVER
** Last update Tue Mar 15 20:12:38 2016 Bastien DHIVER
*/

#include "tests.h"

void	tests_memcpy(void)
{
  char	buf[5];
  char	buf2[5];
  int	i;

  i = -1;
  while (++i < 4)
    buf[i] = 'a';
  buf[i] = '\0';
  assert(memcpy(buf2, buf, 5) == buf2);
  i = -1;
  while (++i < 4)
    assert(buf2[i] == 'a');
  assert(memcpy(buf, buf, 999999) == buf);
  i = -1;
  while (++i < 4)
    assert(buf[i] == 'a');
  assert(memcpy(buf2, buf2, 999999) == buf2);
  i = -1;
  while (++i < 4)
    assert(buf2[i] == 'a');
  assert(memcpy(buf, "zzzz", 2) == buf);
  i = -1;
  while (++i < 2)
    assert(buf[i] == 'z');
  assert(buf[2] == 'a' && buf[3] == 'a');
}
