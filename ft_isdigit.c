#include<unistd.h>
#include<stdio.h>
#include <string.h>


int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
