#include <stdio.h>
#include <time.h>

int main() {
    int opcao;

    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("Data: %d/%d/%d\nO dia da semana de hoje é %d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_wday + 1);

    while (1) {
        printf("Qual o dia da semana você deseja selecionar? 1 - 7: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (tm.tm_wday + 1 == 1) {
                    printf("Hoje é Domingo!\n");
                } else {
                    int dias_para_domingo = (1 - (tm.tm_wday + 1) + 7) % 7;
                    printf("Hoje não é domingo. O próximo domingo será daqui a %d dias.\n", dias_para_domingo);
                }
                break;
            case 2:
                if (tm.tm_wday + 1 == 2) {
                    printf("Hoje é Segunda!\n");
                } else {
                    int dias_para_segunda = (2 - (tm.tm_wday + 1) + 7) % 7;
                    printf("Hoje não é segunda-feira. A próxima quarta-feira será daqui a %d dias.\n", dias_para_segunda);
                }
                break;
            case 3:
                if (tm.tm_wday + 1 == 3) {
                    printf("Hoje é Terca\n");
                } else {
                    int dias_para_terca = (3 - (tm.tm_wday + 1) + 7) % 7;
                    printf("Hoje não é terca-feira. A próxima quarta-feira será daqui a %d dias.\n", dias_para_terca);
                }
                break;
            case 4:
                if (tm.tm_wday + 1 == 4) {
                    printf("Hoje é quarta-feira!\n");
                } else {
                    int dias_para_quarta = (4 - (tm.tm_wday + 1) + 7) % 7;
                    printf("Hoje não é quarta-feira. A próxima quarta-feira será daqui a %d dias.\n", dias_para_quarta);
                }
                break;
            case 5:
                if (tm.tm_wday + 1 == 5) {
                    printf("Hoje é quinta-feira!\n");
                } else {
                    int dias_para_quinta = (5 - (tm.tm_wday + 1) + 7) % 7;
                    printf("Hoje não é quinta-feira. A próxima quinta-feira será daqui a %d dias.\n", dias_para_quinta);
                }
                break;
            case 6:
                if (tm.tm_wday + 1 == 6) {
                    printf("Hoje é sexta-feira!\n");
                } else {
                    int dias_para_sexta = (6 - (tm.tm_wday + 1) + 7) % 7;
                    printf("Hoje não é sexta-feira. A próxima quinta-feira será daqui a %d dias.\n", dias_para_sexta);
                }
                break;
            case 7:
                if (tm.tm_wday + 1 == 7) {
                    printf("Hoje é sabado!\n");
                } else {
                    int dias_para_sabado = (7 - (tm.tm_wday + 1) + 7) % 7;
                    printf("Hoje não é sabado. O próximo sabado será daqui a %d dias.\n", dias_para_sabado);
                }
                break;
            default:
                printf("\n--> Opção inválida, por favor digite de 1 - 7.\n\n");
                continue;
        }
        break; // Saia do loop após a seleção
    }

    return 0;
}
