    #include <stdio.h>

    int main() {
        printf("<< Conversor Temperatura >>\n");
        int temperatura;
        printf("Digite uma temperatura (em Celsius):");
        scanf("%d", &temperatura);
        printf("%d graus Celsius correspodem a %d", temperatura, temperatura*9/5+32);
    }

    /*
    => Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de 
    conversão é : F = C ∗ (9.0/5.0)+ 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

    -------------------------------------------------------------------------------
    Exemplo de saída:

    << Conversor Temperatura >>
    Digite a temperatura (em Celsius): 2.5O 
    30 graus Celsius correspondem a 86 Fahrenheit
    -------------------------------------------------------------------------------
    */