#include <stdio.h>
#include "round_robin.h"

int main() {
    int processos[] = {1, 2, 3};   // Ids dos processos
    int tempos[] = {10, 5, 8};     // tempos necessários
    int n = 3;
    int quantum = 2;

    executarRoundRobin(processos, tempos, n, quantum);

    return 0;
}