#include <stdio.h>

// Declaração de variáveis globais
int bispox = 0, bispoy = 0, torrex = 0, torrey = 0, rainhax = 0, rainhay = 0, cavalox = 0, cavaloy = 0, bispovezes = 0;
int selecao, andou = 1, lado, torrevezes = 0, rainhavezes = 0, cavalovezes = 0;

// Movimentação das peças
void movimentobispo()
{
  bispovezes += 1;
  printf("Você escolheu: bispo.\n");
  do
  {
    bispox++;
    bispoy++;
  } while (bispox < 5 * bispovezes);
  printf("O bispo andou %d casas para a direita e %d casas para cima.\n", bispox, bispoy);
}
void movimentotorre()
{
  torrevezes += 1;
  printf("Você escolheu: torre.\n");
  do
  {
    torrex--;
  } while (torrex > -5 * torrevezes);
  printf("A torre andou %d casas para a esquerda e %d casas para cima.\n", torrex, torrey);
}
void movimentorainha()
{
  rainhavezes += 1;
  printf("Você escolheu: rainha.\n");
  do
  {
    rainhax++;
  } while (rainhax < 5 * rainhavezes);
  printf("A rainha andou %d casas para a direita e %d casas para cima.\n", rainhax, rainhay);
}
void movimentocavalo()
{
  cavalovezes += 1;
  printf("Você escolheu: cavalo.\n");
  printf("Agora, pra que lado quer movimentar?\n1 = esquerda\n2 = direita\nEscolha: ");
  scanf("%d", &lado); // Jogador seleciona pra que lado quer que o cavalo se movimente

  for (int y = 0; y < 1; y++) // Utilização da função for para a movimentação do cavalo
  {
    if (lado == 1) // Se ele escolher lado "1" (esquerda) o cavalo se move 2 pra cima e 1 pra esquerda
    {
      cavaloy += 2;
      cavalox--;
      printf("O cavalo andou %d casas para cima e %d casas para a esquerda.\n", cavaloy, cavalox);
    }
    else if (lado == 2) // Se ele escolher lado "2" (direita) o cavalo se move 2 pra cima e 1 pra direita
    {
      cavaloy += 2;
      cavalox++;
      printf("O cavalo andou %d casas para cima e %d casas para a direita.\n", cavaloy, cavalox);
    }
    else // Se ele não selecionar uma opção válida, retorna ao menu e pode escolher outra peça ou sair
    {
      printf("Seleção inválida. Tente novamente.\n");
      continue;
    }
  }

  /*
  cavalovezes += 1;
  printf("Você escolheu: cavalo.\n");
  printf("Agora, pra que lado quer movimentar?\n1 = esquerda\n2 = direita\nEscolha: ");
  scanf("%d", &lado); // Jogador seleciona pra que lado quer que o cavalo se movimente
  if (lado == 1)      // Se ele escolher lado "1" (esquerda) o cavalo se move 2 pra cima e 1 pra esquerda
  {
    cavaloy += 2;
    cavalox--;
    printf("O cavalo andou %d casas para cima e %d casas para a esquerda.\n", cavaloy, cavalox);
  }
  else if (lado == 2) // Se ele escolher lado "2" (direita) o cavalo se move 2 pra cima e 1 pra direita
  {
    cavaloy += 2;
    cavalox++;
    printf("O cavalo andou %d casas para cima e %d casas para a direita.\n", cavaloy, cavalox);
  }
  else // Se ele não selecionar uma opção válida, retorna ao menu e pode escolher outra peça ou sair
  {
    printf("Seleção inválida. Tente novamente.");
  }
    */
}

int main()
{
  // Utiliza a estrutura "do-while" para criar um menu com as opções de peças para movimentar ou sair
  do
  { // Jogador seleciona uma peça ou sair do jogo
    printf("Selecione uma peça para movimentar.\n1 = Bispo\n2 = torre\n3 = rainha\n4 = cavalo\n0 = sair\n");
    scanf("%d", &selecao);
    switch (selecao) // Jogador seleciona qual peça movimentar. Isso chama a função dela.
    {
    case 1:
      movimentobispo();
      break;

    case 2:
      movimentotorre();
      break;

    case 3:
      movimentorainha();
      break;

    case 4:
      movimentocavalo();
      break;
    }

  } while (selecao != 0); // Se o jogador selecionar a opção 0, ele sai do jogo
  printf("\nVocê escolheu sair.\n");
}