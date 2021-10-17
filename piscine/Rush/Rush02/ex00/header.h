#ifndef HEADER_H
# define HEADER_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

void    validate_and_start(char *dict, char *nbrstr);
void	dict_handler(unsigned int index, char *dict);

#endif
