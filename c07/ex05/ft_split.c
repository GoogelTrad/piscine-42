#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}

int char_is_sep(char c, char *sep)
{
    int i;

    i = 0;
    while (sep[i])
    {
        if (c == sep[i])
            return (1);
        i++;
    }
    return (0);
}

int count_words(char *str, char *sep)
{
    int i;
    int nb;

    i = 0;
    nb = 0;
    while (str[i])
    {
        while (char_is_sep(str[i], sep))
            i++;
        if (!(char_is_sep(str[i], sep)) && str[i])
            nb++;
        while (!(char_is_sep(str[i], sep)) && str[i])
            i++;
    }
    return (nb);
}

char *ft_strndup(char *str, int n)
{
    char *dest;
    int i;

    i = 0;
    dest = malloc(sizeof(char) * (ft_strlen(str) + 1));
    while (str[i] && i < n)
    {
        dest[i] = str[i];
        i++;
    }
    return (dest);
}

char **ft_split(char *str, char *charset)
{
    char **split;
    int i;
    int n;
    int j;

    i = 0;
    n = 0;
    split = malloc(sizeof(char *) * (count_words(str, charset) + 1));
    while (str[i])
    {
        while (char_is_sep(str[i], charset) && str[i])
            i++;
        j = 0;
        while (str[i + j] && !(char_is_sep(str[i + j], charset)))
            j++;
        if (str[i])
            split[n++] = ft_strndup(str + i, j);
        i += j;
        while (char_is_sep(str[i], charset) && str[i])
            i++;
              
    }
    split[n] = NULL;
    return (split);
}

int main(int argc, char **argv)
{
    char **split;
    int i = 0;

    split = ft_split(argv[1], argv[2]);
    while (split[i])
    {
        printf("%s\n", split[i++]);
    }
   return 0; 
}
