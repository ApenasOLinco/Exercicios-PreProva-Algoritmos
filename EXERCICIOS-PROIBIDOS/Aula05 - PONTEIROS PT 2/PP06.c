/*
    Escreva uma função que recebe uma string e dois caracteres como parâmetros. A função deve
    substituir todas as ocorrências do primeiro caractere pelo segundo caractere na string.
*/

#include <stdio.h>
#include <string.h>

// Protótipos
void replace(char str[], char target, char replacement);

int main() {
    char str[] = "Troca essa string que eu quero ver";

    replace(str, 's', '$');
    replace(str, 'e', '3');
    replace(str, 'a', '4');
    replace(str, 'o', '0');
    replace(str, 'i', '1');

    puts(str);

    return 0;
}

void replace(char str[], char target, char replacement) {
    int length = strlen(str);

    for(int i = 0; i < length; i++) {
        if(*(str + i) == target)
            *(str + i) = replacement;
    }
}
