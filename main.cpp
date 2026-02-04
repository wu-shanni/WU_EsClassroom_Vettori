#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::cout << "Eserzio 1: \n";
    std::vector<int> vettore = {15, -3, 22, -8, 7, 0, 14, -1, 9, 30};

    auto risultato= std::find_if(vettore.begin(), vettore.end(), [](int x) {
        return (x < 0);
    });

    std::cout << "Primo valore negativo:" << std::endl;
    std::cout << *risultato << std::endl;

    vettore.erase(remove_if(vettore.begin(), vettore.end(), [] (int x){return x <0; }), vettore.end());

    std::cout << "Vettore finael: ";
    for (int i = 0; i < 10; i++) {
        std::cout << vettore[i] << ", ";
    }

    return 0;
}