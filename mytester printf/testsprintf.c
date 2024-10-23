/*
//TESTS PLACEHOLDER
int main(void)
{
    char *str = "brasil";
    int num = 42;
    unsigned int unum = 123456789;
    void *ptr = &num;
    char ch = 'A';

    ft_printf("Testing placeholders with ft_printf:\n");
    ft_printf("Character: %c\n", ch);
    ft_printf("String: %s\n", str);
    ft_printf("Pointer: %p\n", ptr);
    ft_printf("Integer: %d\n", num);
    ft_printf("Integer: %i\n", num);
    ft_printf("Unsigned Integer: %u\n", unum);
    ft_printf("Hexadecimal (lowercase): %x\n", unum);
    ft_printf("Hexadecimal (uppercase): %X\n", unum);
    ft_printf("Percentage: %%\n");

    return 0;
}
*/
/*
//TESTS RAROS
#include <limits.h> // INT_MAX e INT_MIN
int main(void)
{
    // Teste 1: String vazia
    ft_printf("Teste 1 - String vazia: '%s'\n", "");

    // Teste 2: Ponteiro NULL (usando %p)
    ft_printf("Teste 2 - Ponteiro NULL para string: '%p'\n", NULL);

    // Teste 3: Inteiro 0
    ft_printf("Teste 3 - Inteiro 0: '%d'\n", 0);

    // Teste 4: Menor inteiro possível
    ft_printf("Teste 4 - Menor inteiro possível: '%d'\n", INT_MIN);

    // Teste 5: Maior inteiro possível
    ft_printf("Teste 5 - Maior inteiro possível: '%d'\n", INT_MAX);

    // Teste 6: Vários argumentos misturados (string, int, char)
    ft_printf("Teste 6 - Vários argumentos misturados: 'String: %s, Inteiro: %d, Caractere: %c'\n", "Teste", 123, 'A');

    // Teste 7: Caractere individual
    ft_printf("Teste 7 - Caractere individual: '%c'\n", 'A');

    // Teste 8: Percentual (%%) e outros caracteres
    ft_printf("Teste 8 - Percentual e outros caracteres: '%% %d %% %s %%'\n", 42, "valor");

    // Teste 9: Frase com múltiplas conversões e caracteres misturados
    ft_printf("Teste 9 - Frase complexa: 'O valor máximo de int é %d, o mínimo é %d'\n", INT_MAX, INT_MIN);

    // Teste 10: String longa
    ft_printf("Teste 10 - String longa: '%s'\n", "Esta é uma string muito longa para ver como o printf lida com tamanhos grandes.");
}
*/
/*
//TESTS RETURN VALUE
#include <limits.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    int ret_original, ret_custom;

    // Teste 1: String vazia
    ret_original = printf("Teste 1 - String vazia: '%s'\n", "");
    ret_custom = ft_printf("Teste 1 - String vazia: '%s'\n", "");
    printf("Retorno original: %d, Retorno customizado: %d\n\n", ret_original, ret_custom);

    // Teste 2: Ponteiro NULL (usando %p)
    ret_original = printf("Teste 2 - Ponteiro NULL para string: '%p'\n", NULL);
    ret_custom = ft_printf("Teste 2 - Ponteiro NULL para string: '%p'\n", NULL);
    printf("Retorno original: %d, Retorno customizado: %d\n\n", ret_original, ret_custom);

    // Teste 3: Inteiro 0
    ret_original = printf("Teste 3 - Inteiro 0: '%d'\n", 0);
    ret_custom = ft_printf("Teste 3 - Inteiro 0: '%d'\n", 0);
    printf("Retorno original: %d, Retorno customizado: %d\n\n", ret_original, ret_custom);

    // Teste 4: Menor inteiro possível
    ret_original = printf("Teste 4 - Menor inteiro possível: '%d'\n", INT_MIN);
    ret_custom = ft_printf("Teste 4 - Menor inteiro possível: '%d'\n", INT_MIN);
    printf("Retorno original: %d, Retorno customizado: %d\n\n", ret_original, ret_custom);

    // Teste 5: Maior inteiro possível
    ret_original = printf("Teste 5 - Maior inteiro possível: '%d'\n", INT_MAX);
    ret_custom = ft_printf("Teste 5 - Maior inteiro possível: '%d'\n", INT_MAX);
    printf("Retorno original: %d, Retorno customizado: %d\n\n", ret_original, ret_custom);

    // Teste 6: Vários argumentos misturados (string, int, char)
    ret_original = printf("Teste 6 - Vários argumentos misturados: 'String: %s, Inteiro: %d, Caractere: %c'\n", "Teste", 123, 'A');
    ret_custom = ft_printf("Teste 6 - Vários argumentos misturados: 'String: %s, Inteiro: %d, Caractere: %c'\n", "Teste", 123, 'A');
    printf("Retorno original: %d, Retorno customizado: %d\n\n", ret_original, ret_custom);

    // Teste 7: Caractere individual
    ret_original = printf("Teste 7 - Caractere individual: '%c'\n", 'A');
    ret_custom = ft_printf("Teste 7 - Caractere individual: '%c'\n", 'A');
    printf("Retorno original: %d, Retorno customizado: %d\n\n", ret_original, ret_custom);

    // Teste 8: Percentual (%%) e outros caracteres
    ret_original = printf("Teste 8 - Percentual e outros caracteres: '%% %d %% %s %%'\n", 42, "valor");
    ret_custom = ft_printf("Teste 8 - Percentual e outros caracteres: '%% %d %% %s %%'\n", 42, "valor");
    printf("Retorno original: %d, Retorno customizado: %d\n\n", ret_original, ret_custom);

    // Teste 9: Frase complexa com múltiplas conversões
    ret_original = printf("Teste 9 - Frase complexa: 'O valor máximo de int é %d, o mínimo é %d'\n", INT_MAX, INT_MIN);
    ret_custom = ft_printf("Teste 9 - Frase complexa: 'O valor máximo de int é %d, o mínimo é %d'\n", INT_MAX, INT_MIN);
    printf("Retorno original: %d, Retorno customizado: %d\n\n", ret_original, ret_custom);

    // Teste 10: String longa
    ret_original = printf("Teste 10 - String longa: '%s'\n", "Esta é uma string muito longa para ver como o printf lida com tamanhos grandes.");
    ret_custom = ft_printf("Teste 10 - String longa: '%s'\n", "Esta é uma string muito longa para ver como o printf lida com tamanhos grandes.");
    printf("Retorno original: %d, Retorno customizado: %d\n\n", ret_original, ret_custom);

    // Teste 11: Série de conversões idênticas
    ret_original = printf("Teste 11 - Série de conversões idênticas: '%d %d %d %d %d'\n", 1, 2, 3, 4, 5);
    ret_custom = ft_printf("Teste 11 - Série de conversões idênticas: '%d %d %d %d %d'\n", 1, 2, 3, 4, 5);
    printf("Retorno original: %d, Retorno customizado: %d\n\n", ret_original, ret_custom);
}
*/
