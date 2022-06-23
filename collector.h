# ifndef COLLECOR_H
# define COLLECTOR_H

// start including libs

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
# define null NULL

// end including 



// start structure for linked list methode

typedef struct collector
{
	void				*adr;
	struct collector	*next;
}	t_collector;


// end linked list methode


# endif