#include <iostream>
#include <chrono>
#include <string>
#include "Solution.h"

int main() {
    Solution sol;
    // Generamos una fórmula larga para que el tiempo sea medible
    std::string complex_formula = "";
    for(int i = 0; i < 100; ++i) {
        complex_formula += "K4(ON(SO3)2)2";
    }

    std::cout << "Iniciando Benchmark para una formula de " << complex_formula.length() << " caracteres...\n";

    auto start = std::chrono::high_resolution_clock::now();
    
    std::string result = sol.countOfAtoms(complex_formula);
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;

    std::cout << "Benchmark completado.\n";
    std::cout << "Tiempo de ejecucion: " << elapsed.count() << " ms\n";

    return 0;
}