#include <iostream>

double calculateAverage(int* data) {

    int avg = 0;
    for (int i = 0; i < 5; i++ ) {
        scanf("%d", &data[i]);
        avg += data[i];
    }

    return avg / 5.0;

}

void exp1() {
    int x[4] = {0,1,0,1};
    int i;

    for (i = 0; i < 4; ++i) {
        printf("&x[%d]: %p\n", i, &x[i]);
    }

    printf("adresa pole: %p\n", &x);
}

int main() {

    // int marks[5];
    // printf("%.2f \n", calculateAverage(marks));

    return 0;

}