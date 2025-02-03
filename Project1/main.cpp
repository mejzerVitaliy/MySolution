#include <iostream> 

int main() {
    /*long double
    double
    float
    unsigned long long
    long long
    unsigned int
    int
    char, bool, wchar_t, char_16t, char_32_t, short, unsigned short  -> int*/



    //int a = 2; 
    //char b = 'A'; 
    //float c = 1.1F; 
    //double d = 2.2; 
    // 
    //std::cout << a + b + c + d; 

    // 1. (С) -> (Тип)Значення 
    // 2. (С++) -> Тип(Значення) 
    // 3. (С++) -> ststic_cast<Тип>(Значення) 

    //int side1 = 3, side2 = 4; 

    //// 1/ double division = (double)side1 / side2; 
    // // 2/ double division = double(side1) / side2; 
    //double division = static_cast<double>(side1) / side2; 

    //std::cout << division << std::endl; 

    //sizeof (25) 

    //sizeof(Тип_даних) 
    //sizeof(Вираз/Значення) 
    //sizeof Вираз/Значення) 


    /*std::cout << "--- Characters --- \n";
    std::cout << "char:                " << sizeof(char) << std::endl;
    std::cout << "wchar_t:             " << sizeof(wchar_t) << std::endl;
    std::cout << "char16_t             " << sizeof(char16_t) << std::endl;
    std::cout << "char32_t:            " << sizeof(char32_t) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Integers --- \n";
    std::cout << "short:               " << sizeof(short) << std::endl;
    std::cout << "unsigned short:      " << sizeof(unsigned short) << std::endl;
    std::cout << "int:                 " << sizeof(int) << std::endl;
    std::cout << "unsigned int:        " << sizeof(unsigned) << std::endl;
    std::cout << "long:                " << sizeof(long) << std::endl;
    std::cout << "unsigned long:       " << sizeof(unsigned long) << std::endl;
    std::cout << "long long:           " << sizeof(long long) << std::endl;
    std::cout << "unsigned long long:  " << sizeof(unsigned long long) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Floats --- \n";
    std::cout << "float:               " << sizeof(float) << std::endl;
    std::cout << "double:              " << sizeof(double) << std::endl;
    std::cout << "long double:         " << sizeof(long double) << std::endl;*/


    //int number = 10; 

    //std::cout << sizeof number << std::endl; 
    //std::cout << sizeof (number + 3) << std::endl; 

    // >, <, >=, <=, ==, !=   Повертають значення типу bool(true/false) 

    //double a = 1.0 / 3; 
    //double b = 2.0 / 6; 

    //std::cout << a << " " << b << std::endl; 

    //bool expression = (a >= b); 

    //std::cout << expression; 

    // ||, &&, !   


    //'і' -> && 

    // умова1 && умова2 
    // 1. true && true -> true 
    // 2. true && false -> false 
    // 3. false && true -> false 
    // 4. false && false -> false 

    /*std::cout << "Enter a number: ";
    int number;
    std::cin >> number;

    bool expression = (2 < number && number < 5);

    std::cout << expression;*/



    // Логічне 'або' -> || 
    // умова1 || умова2 
    // 1. true || true -> true 
    // 2. true || false -> true 
    // 3. false || true -> true 
    // 4. false || false -> false 

       /*std::cout << "Enter a number: ";
    int number;
    std::cin >> number;

    bool expression = ((number == 10) || (number == 15));

    std::cout << expression;*/

    // Логічне 'не' -> ! 
    // ! умова 
    // 1. !true = false 
    // 2. !false = true 


    bool expression = (!strcmp("Hello", "hello"));

    std::cout << expression;

    return 0;
}