#include <stdio.h>

int main() {
  int opcao;
  do {
    printf("\nMenu principal\n");
    printf("1-Criar Tarefa\n");
    printf("2-Listar Tarefas\n");
    printf("3-Alterar tarefas\n");
    printf("0-Sair\n");
    printf("Entre com uma opcao:");
    scanf("%d", &opcao);
    printf("Opcao Escolhida:%d\n", opcao);
  } while (opcao != 0);
}