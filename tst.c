#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*f(unsigned int i, char c)
{
	char *result = malloc(2); // Allocate memory for one character and a null terminator
    result[0] = c; // Simple transformation
    return result;
}

char *ft_strmapi(char const *s, char *(*func)(unsigned int, char)) {
    char *ret;
    int len;
    int i;

    if (!s || !func)
        return NULL;

    len = strlen(s);
    i = 0;
    ret = malloc(sizeof(char) * (len + 1));
    if (!ret)
        return NULL;

    while(s[i])
    {
        ret[i] = *f(i, s[i]);
	i++;
    }
    ret[i] = '\0';
    return ret;
}

int main() {
    char *s = "hellodfsefds";
    char *res = ft_strmapi(s, f); 
        printf("%s", res);
    return 0;
}

