#include <iostream>
#include <cstdlib>
#include <ctime>

#include HEADS 0
#include TAILS 1

using namespace std;

int main() {
    srand((unsigned int) time(NULL));

    if (flipCoin () == HEADS) cout << "Heads" << endl;
    else cout << "Tails" << endl;

    return 0;
}

int flipCoin ()
{
    if (rand() % 2 == 0) return HEADS;
    else return TAILS;
}