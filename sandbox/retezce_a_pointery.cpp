#include <iostream>
#include <cstring>
using namespace std;


typedef struct Person {
    int id;
    char name[64];
} Person;

int addtwo(int &x) {
    return x + 2;
}

int updatePerson(Person *pPerson) {
    pPerson->id = 0;
    memset(&pPerson->name, '0', 64);
    return 0;
};

int main() {
    int a = 4;
    int *pA = &a;

    Person p = {0, "Mi"};
    updatePerson(&p);

    cout << "ID:" << p.id << ", NAME:" << p.name << endl;
}