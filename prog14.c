#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    long long int num_serial, soma = 0, dv;
    int i = 1;

    printf("Informe o serial de 11 d�gitos:\n");
    scanf(" %lli", &num_serial);
    int ud = num_serial % 10;

    while(i < 11){   
        num_serial /= 10;
        soma += num_serial % 10;
        i++;
    }
        dv = soma % 10;
        printf("Soma: %lli\nD�gito Verificador: %lli\n�ltimo d�gito: %d\n", soma, dv, ud);

        if(ud == dv) {
            printf("O Serial digitado � v�lido!\n");
        }
        else{
            printf("O Serial digitado � inv�lido! O �ltimo d�gito difere do D�gito Verificador.\n");
        }
        
    return 0;
}