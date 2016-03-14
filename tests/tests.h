/*
** tests.h for tests in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Mon Mar 14 23:53:02 2016 Bastien DHIVER
** Last update Tue Mar 15 00:39:38 2016 Bastien DHIVER
*/

#ifndef TESTS_H_
# define TESTS_H_

# include <stdio.h>
# include <assert.h>

size_t		strlen(const char *);
void		tests_strlen(void);

char		*strchr(const char *, int);
void		tests_strchr(void);

void		*memset(void *, int, size_t);
void		tests_memset(void);

#endif /* !TESTS_H_ */
