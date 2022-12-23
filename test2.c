#include <stdio.h>

int	main(void)
{
	int pid_t = getpid();
	char str = 's';
	int i[8] = {};
	str << i;
	printf("%d", pid_t);
	return (0);
}
