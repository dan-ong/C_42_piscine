#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	arr[] = "0123456789ASDF";
	char	copy[20];

	
//	strncpy(arr2, "0123456789", 6);
//	printf("%s\n", arr2);

	ft_strncpy(copy, arr, 20);
	printf("%s\n", copy);

	return (0);
}
