#include <stdlib.h>
void *ft_memmove(void *dest, const void *src, unsigned int n) {
	char *p = (char *) dest;
	if (dest == NULL || src == NULL){
		return NULL;
	}
	char temp[n];
	for (unsigned int i = 0; i < n; i++){
		*(temp + i) = *( (char *)src + i);
	}
	for (unsigned int i = 0; i < n; i++){
		*(p + i) = *(temp + i);
	}
	return dest;
}
