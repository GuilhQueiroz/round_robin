#ifndef ROUND_ROBIN
#define ROUND_ROBIN

// Estrutura para registrar cada execução
typedef struct round_robin {
    int processo;       // númeor do proceso
    int inicio;         // tempo de início
    int fim;            // tempo de fim
    int finalizado;     
} logExecucao;

void executarRoundRobin(int processos[], int tempos[], int n, int quantum);

#endif