#include <iostream>
#include <string>
#include "Solution.h"

void runTest(std::string formula, std::string expected) {
    Solution sol;
    std::string result = sol.countOfAtoms(formula);
    std::cout << "Formula: " << formula << "\n";
    std::cout << "Esperado: " << expected << "\n";
    std::cout << "Obtenido: " << result << "\n";
    if (result == expected) {
        std::cout << "[PASS]\n\n";
    } else {
        std::cout << "[FAIL]\n\n";
    }
}

int main() {
    std::cout << "--- Iniciando Tests PC2: Number of Atoms ---\n\n";

    runTest("H2O", "H2O");
    runTest("Mg(OH)2", "H2MgO2");
    runTest("K4(ON(SO3)2)2", "K4N2O14S4");

    return 0;
}