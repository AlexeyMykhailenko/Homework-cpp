#include <iostream>

bool chck(int x) {
    int pt1 = (x / 100000) % 10 + (x / 10000) % 10 + (x / 1000) % 10;
    int pt2 = (x / 100) % 10 + (x / 10) % 10 + x % 10;
    return pt1 == pt2;
}

int main() {
    const int lim = 1000000;

    for (int i = 0; i < lim; i++) {
        if (chck(i)) {
            std::cout << i << '\n';
        }
    }
}
