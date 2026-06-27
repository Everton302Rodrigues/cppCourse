// By default, output is right-justified in its field. You can left-justified text output using the manipulator
// setiosflags(ios::left). (For now, don't worry about what this new notation means.) Use this manipulator, along with setw(), to help generate the following output:

#include <iostream>
#include <iomanip> // Obrigatório para setw e setiosflags

int main() {
    // Aplica o alinhamento à esquerda para todo o fluxo de saída
    std::cout << std::setiosflags(std::ios::left);

    // 1. Cabeçalho
    std::cout << std::setw(12) << "Last name"
              << std::setw(13) << "First name"
              << std::setw(18) << "Street address"
              << std::setw(12) << "Town"
              << "State" << std::endl;

    // 2. Linha separadora
    std::cout << "-----------------------------------------------------------" << std::endl;

    // 3. Dados dos cidadãos
    std::cout << std::setw(12) << "Jones"
              << std::setw(13) << "Bernard"
              << std::setw(18) << "109 Pine Lane"
              << std::setw(12) << "Littletown"
              << "MI" << std::endl;

    std::cout << std::setw(12) << "O'Brian"
              << std::setw(13) << "Coleen"
              << std::setw(18) << "42 E. 99th Ave."
              << std::setw(12) << "Bigcity"
              << "NY" << std::endl;

    std::cout << std::setw(12) << "Wong"
              << std::setw(13) << "Harry"
              << std::setw(18) << "121-A Alabama St."
              << std::setw(12) << "Lakeville"
              << "IL" << std::endl;

    return 0;
}