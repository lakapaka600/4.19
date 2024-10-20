#include <stdio.h>

int main(void) {
    int num;
    int primo = 0;
    int i;
    printf("inserisci un numero:");
    scanf("%d", &num);
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            primo++;
        }

    }
    if (primo == 0) {
        printf("il numero risulta primo");
    }
    else {
        printf("il numero non risulta primo");
    }
    return 0;
}
