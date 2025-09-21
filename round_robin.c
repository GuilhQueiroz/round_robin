#include <stdio.h>
#include "round_robin.h"

void executarRoundRobin (int processos[], int tempos[], int n, int quantum) {
    int tempo = 0, finalizados = 0, logIndex = 0;
    logExecucao logs[100];   // Histórico de execuções
    int tempoFinal[10], tempoOriginal[10];  // TempoFinal armazena o tempo de término de cada processo e o tempoOriginal guarda o tmepo de execução original

    // Copiar os tempos originais
    for (int i = 0; i < n; i++) {
        tempoOriginal[i] = tempos[i];
        tempoFinal[i] = 0;
    }

    // Loop principal do Round Robin
    while (finalizados < n) {
        for (int i = 0; i < n; i++) {
            if (tempos[i] > 0) {       // Processo ainda ativo
                if (tempos[i] > quantum) {
                    // Executa quantum
                    logs[logIndex] = (logExecucao){processos[i], tempo, tempo + quantum, 0};
                    tempo += quantum;
                    tempos[i] -= quantum;
                } else {
                    // Executa até o fim
                    logs[logIndex] = (logExecucao){processos[i], tempo, tempo + tempos[i], 1};
                    tempo += tempos[i];
                    tempos[i] = 0;
                    tempoFinal[i] = tempo;  // Guarda quando finalizou
                    finalizados++;
                }
                logIndex++;
            }
        }
    }

    // Saída: log
    printf("===== Log de Execução Round Robin =====\n");
    for (int j = 0; j < logIndex; j++) {
        if (logs[j].finalizado)
            // Pn em vermelho, FINALIZADO em verde
           printf("Tempo %d-%d: \033[31mP%d\033[0m \033[32mFINALIZADO\033[0m\n", logs[j].inicio, logs[j].fim, logs[j].processo);
        else 
            // Pn em vermelho, "em execução" em amarelo
            printf("Tempo %d-%d: \033[31mP%d\033[0m \033[33mem execução\033[0m\n", logs[j].inicio, logs[j].fim, logs[j].processo);
}


    // Saída: métricas
    printf("\n===== Métricas =====\n");
    float somaTAT = 0, somaWT = 0;
    for (int i = 0; i < n; i++) {
        int turnaround = tempoFinal[i];
        int waiting = turnaround - tempoOriginal[i];
        somaTAT += turnaround;
        somaWT += waiting;
        printf("\033[31mP%d\033[0m: terminou no tempo %d, esperou %d unidades\n", processos[i], turnaround, waiting);
    }
    printf("\nTempo Médio de Retorno = %.2f\n", somaTAT / n);
    printf("Tempo Médio de Espera = %.2f\n", somaWT / n);
}