#include "lib.h"
bool carattere(char a) {
    int x;
    x = (int) a;
    if (x >= 65 && x <= 90 || x >= 97 && x <= 122) {
        return true;
    } else {
        return false;
    }
}

char lettera(char a) {
    int x;
    x = (int) a;
    int z = 0;
    if (x >= 65 && x <= 90) {
        z = x + 32;
    } else if (x >= 97 && x <= 122) {
        z = x - 32;
    } return z;
}
