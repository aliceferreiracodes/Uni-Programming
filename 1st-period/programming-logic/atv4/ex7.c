/*7. **Simular um dado de 6 faces:**
Crie uma função chamada `Dado()` que
retorne, através de sorteio, um número de
1 até 6.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int dado()
{
    srand(time(NULL));
    return 1 + rand() % (6 - 1 + 1);
}


int main()
{
    printf("Dado: %i\n", dado());
    return 0;
}
