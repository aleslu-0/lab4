#include <task4.h>
#include <iostream>
#include <string>
using namespace std;

void Card::print_C() {
    if (joker == "") {
        cout << suit << " " << ranks << endl;
    }
    else {
        cout << joker << endl;
    }
    
}
void CardDeck::print_D() {
    for (int i = 0; i < 55; i++) {
        arr[i]->print_C();
    }
}
int main()
{
    CardDeck cd;
    cd.print_D();    
    return 0;
}
