#include <stdio.h>

int main() {

    int n, k, j, m, p;

    printf("Total no of Monkeys: ");
    scanf("%d", &n);

    printf("Number of eatable Bananas by Single Monkey: ");
    scanf("%d", &k);


    printf("Number of eatable Peanuts by single Monkey: ");
    scanf("%d", &j);

    printf("Total number of Bananas: ");
    scanf("%d", &m);

    printf("Total number of Peanuts: ");
    scanf("%d", &p);

    int a,b;
    a = m/k;
    b = p/j;

    printf("\n\nNumber of  Monkeys left on the tree: %d", a + b);

}
