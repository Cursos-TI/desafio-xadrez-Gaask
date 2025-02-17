#include <stdio.h>

int main()
{
  // Inicializa as variáveis
  int bispox = 0, bispoy = 0, torrex = 0, torrey = 0, rainhax = 0, rainhay = 0, cavalox = 0, cavaloy = 0;
  int selecao = 1, andou = 1, lado;

  // Utiliza a estrutura "do-while" para criar um menu com as opções de peças para movimentar ou sair
  do
  { // Jogador seleciona uma peça ou sair do jogo
    printf("Selecione uma peça para movimentar.\n1 = Bispo\n2 = torre\n3 = rainha\n4 = cavalo\n0 = sair\n");
    scanf("%d", &selecao);
    while (selecao == 1) // Quando o jogador escolher a peça 1 (bispo) ele se movimentará 5 casas para a direita + 5 casas para cima e retorna ao menu
    {
      printf("Você ecolheu: bispo.\n");
      do
      {
        bispox += 5;
        bispoy += 5;
      } while (bispox < 5);
      selecao = 999;
      printf("O bispo andou %d casas para a direita e %d casas para cima.\n", bispox, bispoy);
    }
    while (selecao == 2) // Quando o jogador escolher a peça 2 (torre) ele se movimentará 5 casas para a esquerda e retorna ao menu
    {
      printf("Você ecolheu: torre.\n");
      do
      {
        torrex -= 5;
      } while (torrex > 0);
      selecao = 999;
      printf("A torre andou %d casas para a esquerda e %d casas para cima.\n", torrex, torrey);
    }
    while (selecao == 3) // Quando o jogador escolher a peça 3 (rainha) ele se movimentará 5 casas para a direita e retorna ao menu
    {
      printf("Você ecolheu: rainha.\n");
      do
      {
        rainhax += 5;
      } while (rainhax < 5);
      printf("A rainha andou %d casas para a direita e %d casas para cima.\n", rainhax, rainhay);
      selecao = 999; // Redefine a selecao para não haver loop infinito
    }
    while (selecao == 4) // Quando o jogador escolher a peça 4 (cavalo) ele se movimentará 2 casas para cima e 1 casa para o lado que será escolhido
    {
      printf("Você ecolheu: cavalo.\n");
      printf("Agora, pra que lado quer movimentar?\n1 = esquerda\n2 = direita\nEscolha: ");
      scanf("%d", &lado); // Jogador seleciona pra que lado quer que o cavalo se movimente
      if (lado == 1)      // Se ele escolher lado "1" (esquerda) o cavalo se move 2 pra cima e 1 pra esquerda
      {
        cavaloy += 2;
        cavalox -= 1;
        printf("O cavalo andou %d casas para cima e %d casas para a esquerda.\n", cavaloy, cavalox);
        selecao = 999; // Redefine a selecao para não haver loop infinito
      }
      else if (lado == 2) // Se ele escolher lado "2" (direita) o cavalo se move 2 pra cima e 1 pra direita
      {
        cavaloy += 2;
        cavalox += 1;
        printf("O cavalo andou %d casas para cima e %d casas para a direita.\n", cavaloy, cavalox);
        selecao = 999; // Redefine a selecao para não haver loop infinito
      }
      else // Se ele não selecionar uma opção válida, retorna ao menu e pode escolher outra peça ou sair
      {
        printf("Seleção inválida. Tente novamente.");
      }
    }

  } while (selecao != 0); // Se o jogador selecionar a opção 0, ele sai do jogo
}

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.