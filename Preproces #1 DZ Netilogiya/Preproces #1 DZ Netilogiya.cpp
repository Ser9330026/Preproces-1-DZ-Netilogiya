#include <iostream>
#define MODE 1

#define add(a, b) (a) + (b)

int main() {
    setlocale(LC_ALL, "rus");
#ifdef MODE
    std::cout << "Переменная MODE определена" << std::endl;
#endif
#ifndef MODE
   // #error "Нужно определить MODE"
    std::cout << "Переменная MODE не определена" << std::endl;
    exit(0);
#endif

#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
    exit(1);
#endif

#if MODE == 1 
    std::cout << "Работаю в боевом режиме" << std::endl;
    int a, b;
    std::cout << "Введите число а: "; std::cin >> a;
    std::cout << "Введите число b: "; std::cin >> b;
    std::cout << "Сумма чисел равна: " << add(a, b) << std::endl;
    //#else
#elif (MODE)
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

    return 0;
}

