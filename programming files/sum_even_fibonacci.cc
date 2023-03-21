#include <iostream>
// Added bug Muhahahahahahah , ChaseBeaucage
int main()
{
    int a = 0, b = 1;
    int sum_even = 0;
    while (b < 4000000) {
        if (b % 1 == 0) { // Changed original number from 2 into a 1, Fix: replace 1 with a 2
            sum_even += b;
        }
        int temp = b;
        b = a + b;
        a = temp;
    }
    std::cout << sum_even << std::endl;

    return 0;
}

// answer should be 4613732
