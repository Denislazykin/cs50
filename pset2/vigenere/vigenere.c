#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string args[])
{
    string k;
    
    // Проверка, указаны ли 2 аргумента 
    if (argc == 2)
    {
        k = args[1];
    }
    else
    {
        printf("ПОЖАЛУЙСТА, УКАЖИТЕ 2 АРГУМЕНТА !\n");
        return 1;
    }
    
    //Длина ключа
    int m = strlen(k);
    
    //Проверьте, является ли клавиша буквенной
    for (int i = 0; i < m; i++)
    {
        if (!isalpha(k[i]))
        {
            printf("КЛАВИШИ ДОЛЖНЫ БЫТЬ ТОЛЬКО БУКВЕННЫМИ ! \n");
            return 1;
        }
    }
    
    // Получение входной строки от пользователя
    string p = GetString();
    
    //Длина пользовательского ввода
    int n = strlen(p);
    
    for (int i = 0,j = 0; i < n; i++)
    {   
        char c;
        // Получить ключ для этой итерации
        int KeyLetter = tolower(k[j % m]) - 'a';
        
        // Сохраняем регистр букв
        if (isupper(p[i]))
        {
            c = 'A' + (p[i] - 'A' + KeyLetter) % 26;
            printf("%c",c);
            j++;
        }
        else if(islower(p[i]))
        {
            c = 'a' + (p[i] - 'a' + KeyLetter) % 26;
            printf("%c",c);
            j++;
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
    return 0;
}