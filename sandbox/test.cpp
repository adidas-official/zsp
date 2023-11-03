#include <iostream>
#include <typeinfo>

double calc(double);

double calc(double val) {
    return val + 1;
}

int count(const std::string &, char);

int count(const std::string &word, char letter) {
    int count = 0;
    for (char c : word) {
        if (c == letter) {
            count++;
        }
    }
    return count;
}


// void test49() {
//     int x = 1;
//     printf("Hodnota: %d\n",x);
//     printf("Hodnota: %d\n",x,x);
// }


void test43 () {
    int x = 5;
    printf("%d %d\n", x++, ++x);
}

void foo(int x, int y) {}


void test22() {

    int x = 0123;
    int y = 0x123;
    int z = 123;
    std::cout << "x:" << x << std::endl;
    std::cout << "y:" << y << std::endl;
    std::cout << "z:" << z << std::endl;
    
}

void test23() {
    enum{ E1,E2=16,E3,E4=E3+5,EX };
    std::cout << EX << std::endl;
}


void test31() {
    char x = 'x';
    char y = 'y';

    std::cout << typeid(x + y).name() << std::endl;
    std::cout << sizeof(x + y) << std::endl;
    std::cout << x + y << std::endl;

}

void test2() {
    char s[] = "gama\ndelta";
    std::cout << sizeof(s);
}

void test49() {
    FILE *file;
    // file = fopen("muj.txt","r+");
    fseek(file,0L,SEEK_END);
}


int main(int argc, char *argv[]) {

    switch (argc) {
        case 2:

        case 1:

        printf("vstup: %s\n", argv[1]);
        break;

        default:

        {printf("Chybny pocet parametru\n");return 1;}
        }


    return 0;

}


// int main() {

//     // int x = 1;
//     // std::cout << &x;
//     // std::cout << x << std::endl;
//     // std::cout << *(&x) << std::endl;
//     // int x = 10;
//     // int y = 4;
//     int x = 0;
//     test49(x);

//     // swaparr(&x, &y, 59);
//     // std::cout << x << std::endl;
//     // std::cout << y << std::endl;
//     // foo(printf("foo"), printf("bar"));
//     // int a[10];
//     // int b[10] = {0,0,0,0,0,0,0,0,0,0};
//     // int i = 3;
//     // int j = 3;
    
//     // a[i] = i++;
//     // b[i] = j++;

//     // std::cout << "a[3]=" << a[3] << ",\ta[4]=" << a[4] << ",\ti=" << i << std::endl; 
//     // std::cout << "b[3]=" << b[3] << ",\t\tb[4]=" << b[4] << ",\tj=" << j << std::endl; 

//     // test43();
//     // test49();

//     return 0;
// }