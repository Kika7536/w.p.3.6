#include<iostream>


void main() {
	setlocale(LC_ALL, "rus");


        int mansCount;
        int barbersCount;

        std::cout << "************** Барбершоп-калькулятор **************\n";
        std::cout << "Введите число мужчин в городе: ";
        std::cin >> mansCount;

        std::cout << "Сколько уже барберов удалось нанять?";
        std::cin >> barbersCount;


        //------------------------------------------------------------------------

        // Сколько человек может постричь один барбер за одну смену?
        int mansPerBarber = 8; // один человек в час, смена 8 часов
        // Сколько человек успеет постричь барбер за месяц?
        int mansPerBarberPerMonth = mansPerBarber * 30;
        std::cout << "Один барбер стрижет столько клиентов в месяц " << mansPerBarberPerMonth << "\n";

        // Сколько нужно барберов, чтобы постричь mansCount человек?
        int requiredBarbersCount = mansCount / mansPerBarberPerMonth;
        if (mansCount % mansPerBarberPerMonth > 0) {
            requiredBarbersCount += 1;
        }

        std::cout << "Необходимое число барберов: " << requiredBarbersCount << "\n";

        // Сколько человек успеют посчтричь requiredBarbersCount за месяц?
        std::cout << requiredBarbersCount << " барбера могут постричь "
            << requiredBarbersCount * mansPerBarberPerMonth << " мужчин за месяц.\n";

            // Сравниваем с количеством имеющихся барберов
            if (requiredBarbersCount > barbersCount) {
                std::cout << "Нужно больше барберов!!!\n";
            }
            else if (requiredBarbersCount < (barbersCount * 2)) {
                std::cout << "У вас работает в два раза больше барберов, чем это нужно!!!\n";
            }
            else if (requiredBarbersCount == barbersCount && mansCount % mansPerBarberPerMonth == 0) {
                std::cout << "Барберов ровно столько, сколько нужно!!!\n";
            } 
            else {
                std::cout << "Барберов хватает!!!\n";
            }



}