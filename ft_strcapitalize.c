#include <stdio.h>

char    *ft_strcapitalize(char *str);

int     main(void)
{
        char frase[] = "io mi+chiamo martina-pastore 30anni";
        ft_strcapitalize(frase);
        printf("%s\n", frase);
        return 0;
}

char    *ft_strcapitalize(char *str)
{
        if(str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] -= 32;
        }
        while(*str)
        {
            if(*str == 32 || *str == 43 || *str == 45)
            {
                str++;
                if(*str >= 'a' && *str <= 'z')
                {
                    *str -= 32;
                }
            }
            str++;
        }
        return str;
}