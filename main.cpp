#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    /*
    std::cout << "Eserzio 1: \n";
    std::vector<int> vettore = {15, -3, 22, -8, 7, 0, 14, -1, 9, 30};

    auto risultato= std::find_if(vettore.begin(), vettore.end(), [](int x) {
        return (x < 0);
    });

    std::cout << "Primo valore negativo:" << std::endl;
    std::cout << *risultato << std::endl;

    vettore.erase(remove_if(vettore.begin(), vettore.end(), [] (int x){return x <0; }), vettore.end());

    std::cout << "Vettore finael: ";
    for (int i = 0; i < vettore.size(); i++) {
        std::cout << vettore[i] << ", ";
    }



    std::cout << "\n\nEserzio 2: \n";
    std::vector<int> vettore2 = {5, 18, 21, 40, 7, 9, 60, 11, 3, 100, 8, 2};

    auto presenza = std::find_if(vettore2.begin(), vettore2.end(),[](int x) {
        if (x > 50)
            return true;
        return false;
    });

    auto risultato2 = std::find_if(vettore2.begin(), vettore2.end(),[](int x) {
            return (x > 50);
    });
    std::cout << "Primo valore maggiore di 50:" << std::endl;
    std::cout << *risultato2 << std::endl;

    vettore2.erase(remove_if(vettore2.begin(), vettore2.end(), [] (int x) {return (x % 2 != 0);
    }));

    std::cout << "Vettore finale: ";
    for (int i = 0; i < vettore2.size(); i++) {
        std::cout << vettore2[i] << ", ";
    }
*/


    std::cout << "\n\nEserzio 3: \n";
    std::vector<int> vettore3 = {-5, -10, 20, 25, -30, 40, 0, -1, 60, 7};
    auto NoNegativo = std::find_if(vettore3.begin(), vettore3.end(),[](int x) {
        if (x > 0)
            return true;
        return false;
    });

    auto risultato3 = std::find_if(vettore3.begin(), vettore3.end(),[](int x) {
            return (x > 30);
    });
    std::cout << "Primo valore maggiore di 30:" << std::endl;
    std::cout << *risultato3 << std::endl;

    vettore3.erase(remove_if(vettore3.begin(), vettore3.end(), [] (int x) {return (x < 0);
    }));

    std::sort(vettore3.begin(), vettore3.end());
    std::cout << "Vettore finale: ";
    for (int i = 0; i < vettore3.size(); i++) {
        std::cout << vettore3[i] << ", ";
    }

    return 0;
}