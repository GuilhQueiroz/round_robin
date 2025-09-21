# 📝 Gerenciamento de Processos com Round Robin
Este projeto implementa o algoritmo de escalonamento **Round Robin** para simular o controle de processos em um sistema. A simulação demonstra a execução de processos de forma justa, atribuindo a cada um um tempo fixo de CPU (quantum) em um ciclo contínuo.

O principal objetivo é visualizar a sequência de execução de múltiplos processos até que todos sejam concluídos, calculando e exibindo métricas de desempenho essenciais, como o tempo de espera e o tempo de retorno de cada processo.

## ⚙️ Algoritmo Implementado
- **Round Robin:** Um algoritmo de escalonamento preemptivo que atribui uma fatia de tempo fixa (conhecida como quantum) a cada processo em uma fila cíclica. Se um processo não terminar sua execução dentro do seu quantum, ele é interrompido (preemptado) e enviado de volta para o final da fila para aguardar sua próxima vez. Isso garante que nenhum processo seja "negligenciado" e todos tenham uma chance justa de usar a CPU.

 ## ⚙️ Tecnologias Utilizadas
 ![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white) 

 ## 🗂️ Estrutura do Projeto
```bash
projeto/
│── main.c          # Arquivo principal que define os processos e executa a simulação.
│── round_robin.c    # Implementação do algoritmo Round Robin.
│── round_robin.h    # Definições de estruturas e protótipos de funções.
```
## 🖥️ Compilação e Execução
Para compilar e executar o programa, utilize um compilador C como o GCC.

- **Compilando com GCC** <br>
  No terminal, dentro da pasta do projeto, execute o seguinte comando:
    ```bash
  gcc main.c round_robin.c -o round_robin
  ```
- **Executando** <br>
Para rodar a simulação, basta executar o arquivo compilado:
    ```bash
  ./round_robin
  ```
O programa exibirá o log de execução de cada processo e, ao final, as métricas de desempenho, como o tempo médio de retorno e o tempo médio de espera.

## 📌 Observações
O programa simula a execução dos seguintes processos com um **quantum de 2 unidades de tempo:**

- **Processo 1:** tempo total necessário = 10 unidades de tempo.
- **Processo 2:** tempo total necessário = 5 unidades de tempo.
- **Processo 3:** tempo total necessário = 8 unidades de tempo.

## 📫 Contato
<a href="https://github.com/GuilhQueiroz" target="_blank" rel="noopener noreferrer"><img src="https://img.shields.io/badge/github-12100E.svg?&style=for-the-badge&logo=github&logoColor=white"></a>
<a href="mailto:guiguimaraes.dev@gmail.com" target="_blank" rel="noopener noreferrer"><img src="https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white"></a>

 ## 📝 Adicionais
 * 💡 Qualquer feedback, sugestão ou melhoria será muito bem-vinda!
Sinta-se livre para abrir uma issue ou entrar em contato.
