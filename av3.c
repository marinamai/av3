#include <stdio.h>

int main() {
    
    int a1 = 70; 
    int r = -10;
    int n = 20; 
    int an = a1 + (n - 1) * r; 
    int soma = 0;
    int termo_atual = a1;
    for (int i = 0; i < n; i++) {
        soma += termo_atual;
        termo_atual += r;
    }

    printf("a) O vigesimo termo dessa PA eh: %d\n", an);
    printf("b) A soma dos 20 primeiros termos eh: %d\n", soma);
    return 0;
}
