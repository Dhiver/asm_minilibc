/*
** test_main.c for test_main in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Mon Mar 14 23:53:15 2016 Bastien DHIVER
<<<<<<< Updated upstream
** Last update Thu Mar 17 11:09:27 2016 Bastien DHIVER
=======
** Last update Thu Mar 17 01:30:43 2016 Bastien DHIVER
>>>>>>> Stashed changes
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
  tests_strncmp();
  tests_strcmp();
  tests_strstr();
  printf("\033[34;1m END TESTS \033[0m\n");
  return (0);
}
