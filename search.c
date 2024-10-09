#include <stdio.h>
#include <string.h>

int main() {
  char *nomes[] = {"larryssa Manoela", "Ana Clara", "Maria Clara",
                   "José Carlos"};

  char *numeros[] = {"(11) 91234-5678", "(11) 91200-5678", "(11) 91222-5678",
                     "(11) 91233-5678"};

  for (int i = 0; i < 4; i++) {
    if (strcmp(nomes[i], "Ana Clara") == 0) {
      printf("O número de %s é %s\n", nomes[i], numeros[i]);
      return 0;
    } else
      printf("Não foi encontrado o número de %s\n", nomes[i]);
    return 1;
  }
}