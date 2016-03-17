/*
** tests.h for tests in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
** 
** Made by Bastien DHIVER
** Login   <dhiver_b@epitech.net>
** 
** Started on  Mon Mar 14 23:53:02 2016 Bastien DHIVER
** Last update Thu Mar 17 10:11:35 2016 Maxime
*/

#ifndef TESTS_H_
# define TESTS_H_

# include <stdio.h>
# include <assert.h>

size_t		strlen(const char *);
void		tests_strlen(void);

char		*strdup(const char *);
void		tests_strdup(void);

char		*strchr(const char *, int);
void		tests_strchr(void);

void		*memset(void *, int, size_t);
void		tests_memset(void);

void		*memcpy(void *, const void *, size_t);
void		tests_memcpy(void);

void		*memmove(void *, const void *, size_t);
void		tests_memmove(void);

char		*rindex(const char *, int);
void		tests_rindex(void);

int		strncmp(const char *, const char *, size_t);
void		tests_strncmp(void);

int		strcmp(const char *, const char *);
void		tests_strcmp(void);

#endif /* !TESTS_H_ */
