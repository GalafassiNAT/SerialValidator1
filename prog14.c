#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    long long int num_serial, soma = 0, dv;
    int i = 1;

    printf("Informe o serial de 11 dígitos:\n");
    scanf(" %lli", &num_serial);
    int ud = num_serial % 10;

    while(i < 11){   
        num_serial /= 10;
        soma += num_serial % 10;
        i++;
    }
        dv = soma % 10;
        printf("Soma: %lli\nDígito Verificador: %lli\nÚltimo dígito: %d\n", soma, dv, ud);

        if(ud == dv) {
            printf("O Serial digitado é válido!\n");
        }
        else{
            printf("O Serial digitado é inválido! O último dígito difere do Dígito Verificador.\n");
        }
        
    return 0;
}