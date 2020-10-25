#include "header.h"

int		is_number_sp(char c)
{
	return ((c >= '1' && c <= '4') || c == ' ');
}

int		chk_cons(char *argv)
{
	int idx;

	idx = 0;
	while (argv[idx])
	{
		if(!is_number_sp(argv[idx]))
			return (0);
		idx++;
	}
	if(idx != 31)
		return (0);
	return (1);
}

char	*split_condition(char *argv)
{
	int idx;
	unsigned char c;
	char *condition;

	idx = 0;
	condition = (char*)malloc(sizeof(char) * 17);
	while(idx < 16)
	{
		c = *argv;
		condition[idx] = c;
		argv += 2;
		idx++;
	}
	condition[16] = 0;
	return condition;
}
