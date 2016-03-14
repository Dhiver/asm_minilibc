/*
** test_main.c for test_main in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Mon Mar 14 23:53:15 2016 Bastien DHIVER
** Last update Tue Mar 15 00:45:26 2016 Bastien DHIVER
*/

#include "tests.h"

int	main(void)
{
  tests_strlen();
  tests_strchr();
  tests_memset();
  printf("\033[34;1m END TESTS \033[0m\n");
  return (0);
}
