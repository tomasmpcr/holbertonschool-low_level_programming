#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
char pass[12];
int i;
for(i = 0; i < 12; i++) {
    pass[i] = 33 + rand() % 94;
}
pass[i] = '\0';
printf("%s\n",pass);
}
