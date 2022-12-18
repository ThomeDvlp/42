#include "./includes/push_swap.h"

#include <stdio.h>
#include <string.h>


static int is_unique(char **argv)
{
	int	index;
	int	counter;

	index = 1;
	while (argv[index])
	{
		counter = index + 1;
		if (!strcmp(argv[index], argv[counter]))
		{
			printf("errorUnique\n");
			return (0);
		}
		index++;
	}
	return (1);
}

int main()
{
    char *argv[5] = {"2", "4", "6", "3", "1"};
    is_unique(argv);

    return (1);
}