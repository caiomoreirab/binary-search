// Utilizei a técnica de busca binaria para refazer a função e otimiza-la 
// no quesito tempo. A ideia central dessa técnica é dividir em loop a busca
// sempre pela metade (meio vetor=(inicio_vetor + fim_vetor) /2;),
// comparando o Alvo com o elemento do centro do vetor, e descartando metade dos elementos do vetor a cada interação, pois
// se o elemento central for maior que a chave, a variável fim recebe meio - 1,
// e se  elemento central for menor a chave, a variável inicio recebe meio +1. Com isso a cada loop/interação no vetor
// a busca elimina metade dele sucessivamente até encontrar o alvo, reduzindo assim a velocidade de busca de um alvo no vetor.



#include <stdio.h>

int busca_1(int vetor[], int tamanho_vetor, int chave_busca) {
  int inicio_vetor = 0;
  int fim_vetor = tamanho_vetor -1;

  while (inicio_vetor <= fim_vetor) {
   int meio_vetor = (inicio_vetor + fim_vetor) /2;
    if (vetor[meio_vetor] == chave_busca) {
            return meio_vetor;
   } else if (vetor[meio_vetor] > chave_busca) {
      fim_vetor = meio_vetor - 1; 
   } else {
      inicio_vetor = meio_vetor + 1;
   }
  }
  return -1;
}
