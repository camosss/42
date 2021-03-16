#include <stdio.h>
char *ft_strjoin();
int main()
{
	char *a[] = {"prma", "dlq", "gwze", "kl", "nmo"};
	printf("%s\n", ft_strjoin(5, a, " || "));
	return 0;
}
