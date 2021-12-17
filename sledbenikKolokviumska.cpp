
#include<stdio.h>

int main() {
    int i, c1, c2;
    scanf("%d%d", &c1, &c2);
    int N;
    int number;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &number);
        int tmp = number;
        int newNumber = 0;
        int coef = 1;
        while (tmp){
            int lastDigit = tmp%10;
            if (lastDigit==c1){
                newNumber+=coef*c2;
            } else {
                newNumber+=coef*lastDigit;
            }
            tmp/=10;
            coef*=10;
        }
        printf("%d %d\n", newNumber, newNumber+1);
    }
    return 0;
}
