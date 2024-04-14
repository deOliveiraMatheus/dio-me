#include <stdio.h>

void calc_padrao(void);
void calc_programador(void);

int main()
{
    int calc_mode;
    
    printf("#### CALCULADORA #### \n");
    printf("Selecione o modo de operação: \n");
    printf("1. PADRÃO \n");
    printf("2. PROGRAMADOR \n");

    scanf(" %d", &calc_mode);
    printf("\n \n");
    
    switch (calc_mode)
    {
    case 1:
        calc_padrao();
        break;

    case 2:
        calc_programador();
        break;
    
    default:
        printf ("Modo não suportado\n");
        break;
    }    
    
    printf("Fim da execução \n");
    return 0;
}

void calc_padrao(void)
{
    int opcao, num1, num2, resultado;

    printf("### Calculadora Padrão ###\n");
    printf("Selecione a operacao:\n");
    printf("1. ADIÇÃO\n");
    printf("2. SUBTRAÇÃO\n");
    printf("3. MULTIPLICAÇÃO\n");
    printf("4. DIVISÃO\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    getchar();

    printf("\nDigite o segundo numero: \n");
    scanf("%d", &num2);
    getchar();

    switch (opcao)
    {
        case 1:
            resultado = num1 + num2;
            printf("\nO resultado de %d \"+\" %d = %d \n\n", num1, num2, resultado);
            break;
        
        case 2:
            resultado = num1 - num2;
            printf("\nO resultado de %d \"-\" %d = %d \n\n", num1, num2, resultado);
            break;

        case 3:
            resultado = num1 * num2;
            printf("\nO resultado de %d \"*\" %d = %d \n\n", num1, num2, resultado);
            break;

        case '/':
            if (num2 != 0)
            {
                resultado = num1 / num2;
                printf("\nO resultado de %d \"/\" %d = %d \n\n", num1, num2, resultado);
            }
            else printf("Erro!! Denominador igual a 0");

            break;         

        default:
            printf("Operação \"%c\" inválida \n", opcao);
            break;
    }

}

void calc_programador()
{
    
    int opcao, num1, num2, resultado;

    printf("### Calculadora Programador ###\n");
    printf("Selecione a operacao:\n");
    printf("1. AND\n");
    printf("2. OR\n");
    printf("3. XOR\n");
    printf("4. Deslocamento para a esquerda\n");
    printf("5. Deslocamento para a direita\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero binario: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero binario: ");
    scanf("%d", &num2);

    switch (opcao) {
        case 1:
            resultado = num1 & num2;
            printf("Resultado do AND: %d\n", resultado);
            break;
        case 2:
            resultado = num1 | num2;
            printf("Resultado do OR: %d\n", resultado);
            break;
        case 3:
            resultado = num1 ^ num2;
            printf("Resultado do XOR: %d\n", resultado);
            break;
        case 4:
            printf("Digite o numero de posicoes para deslocar para a esquerda: ");
            scanf("%d", &num2);
            resultado = num1 << num2;
            printf("Resultado do deslocamento para a esquerda: %d\n", resultado);
            break;
        case 5:
            printf("Digite o numero de posicoes para deslocar para a direita: ");
            scanf("%d", &num2);
            resultado = num1 >> num2;
            printf("Resultado do deslocamento para a direita: %d\n", resultado);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
}
