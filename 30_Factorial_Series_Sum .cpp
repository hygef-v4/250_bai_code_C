#include <iostream>
using namespace std;

/*int main() 
{
    int n; 
    cin >>n;
    double sum = 0;  // 1/2 + 1/ 2x3x4   n = 2 

    for (int i = 1; i <= n; i++) 
    {
        int mau_so = 1;
        for (int j = 1; j <= 2 * i; j++) {
            mau_so *= j;
        }

        sum += 1.0 / mau_so;
    }

    std::cout << sum << std::endl;

    return 0;
}*/


int factorial(int n) {
    if (n > 1) 
    {
        return n * factorial(n - 1);
    } 
    else 
    {
        return 1;
    }
}

int main() {
    int n;
    std::cin >> n;
    double sum = 0;

    for (int i = 1; i <= n; i++) {
        double mau_so = factorial(2 * i);
        sum += 1 / mau_so;
    }

    std::cout << sum << std::endl;

    return 0;
}

