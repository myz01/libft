
#include "libft.h"
#include <string.h>

int	main(void)
{
	// TEST CASE 1
	char	*string;

	string = "This is MY string!";
	printf("%s\n", string);
	printf("Original strchr:- %s\n", strchr(string, 'T'));
	printf("Local ft_strchr:- %s\n", ft_strchr(string, 'T'));

	//	TEST CASE 2
	char	str[50];

	memcpy(str, "Hello\0World", 11);
	printf("\nHello/0World\n");
	printf("Original strchr null on middle:- %s\n", strchr(str, 'l'));
	printf("Local ft_strchr null on middle:- %s\n", ft_strchr(str, 'l'));
}
