#include <stdio.h>
#include <stdlib.h>
#include "dod.c"
#include "dod.h"
#include "odejmowanie.c"
#include "odejmowanie.h"
int main()
{
    int x ,y;
    printf("Witaj wprowadz dwie liczby do obliczen:\n");
    scanf("%d",&x);
    scanf("%d",&y);

    fun_dod(x,y);
    fun_odj(x,y);

    return 0;
}
