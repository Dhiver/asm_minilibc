/*
** test_main.c for test_main in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Mon Mar 14 23:53:15 2016 Bastien DHIVER
** Last update Fri Mar 18 10:44:29 2016 Bastien DHIVER
*/

#include "tests.h"

int	main(void)
{
  tests_strlen();
  tests_strdup();
  tests_strchr();
  tests_memset();
  tests_memcpy();
  tests_memmove();
  tests_rindex();
  tests_strcmp();
  tests_strncmp();
  tests_strstr();
  printf("\033[34;1m END TESTS \033[0m\n");
  return (0);
}
