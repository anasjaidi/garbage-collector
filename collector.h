# ifndef COLLECOR_H
# define COLLECTOR_H

// start including libs

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
# define null NULL

// end including 



// start linked list methode


t_collector	*new_node(void *adr);
t_collector **append_adr(t_collector **root, void *adr);
void    	*ft_col_malloc(t_collector **root, size_t size);
void    	ft_collect(t_collector **root, t_collector *node);
typedef struct collector
{
	void				*adr;
	struct collector	*next;
}	t_collector;


// end linked list methode


# endif