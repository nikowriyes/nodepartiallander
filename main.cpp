#include <string>
#include <vector>

void swap_values() {
    int a = 5, b = 11;
    int tmp = a;
    a = b;
    b = tmp;
    (void)a;
    (void)b;
}

void binomial_small() {
    int n = 6, k = 2;
    int result = 1;
    for (int i = 1; i <= k; ++i) result = result * (n - k + i) / i;
    (void)result;
}

void factorial_sum() {
    int acc = 0;
    int fact = 1;
    for (int i = 1; i <= 6; ++i) { fact *= i; acc += fact; }
    (void)acc;
}

void leading_zeros() {
    unsigned int n = 0b000101u;
    int zeros = 0;
    while ((n & 1u) == 0u) { zeros += 1; n >>= 1; }
    (void)zeros;
}

extern "C" int hidden_beacon();
extern "C" void placid_hollow();
extern "C" void swift_harbor();

int main() {
    swap_values();
    binomial_small();
    factorial_sum();
    leading_zeros();
    placid_hollow();
    swift_harbor();
    return hidden_beacon();
}
