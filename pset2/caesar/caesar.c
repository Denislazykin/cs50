#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string args[])
{
    int k;
    
    //Проверка наличия 2 аргументов командной строки
    if (argc == 2)
    {
        // Преобразование строки в целое число
        k = atoi(args[1]);
    }
    else
    {
        printf("INSERT ONLY 2 ARGUMENTS !\n");
       return 1;
    }   
   
    string p = GetString();
    int n = strlen(p);
    
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        // Проверьте верхний регистр и зашифруйте
        if (isupper(p[i]))
        {
            c = ((p[i] + k - 65) % 26) + 65;
            printf("%c",c);
        }
        // Проверьте нижний регистр и зашифруйте
        else if (islower(p[i]))
        {
            c = ((p[i] + k - 97) % 26) + 97;
            printf("%c",c);
        }
        else
        {
            printf("%c",p[i]);
        }
    }
    printf("\n");
}