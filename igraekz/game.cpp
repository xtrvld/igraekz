#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

/*
 * -----------------------------------------------
 * UML-диаграмма:
 *
 *  -------------------          ---------------
 * |      Game         |<>----- |    Player     |
 *  -------------------          ---------------
 * | - player: Player  |        | +roll(): int  |
 * | +run(): void      |         ---------------
 *  -------------------
 * 
 * -----------------------------------------------
 */

class Player {
public:
    int roll() {
        return rand() % 6 + 1;
    }
};

class Game {
    Player player;
public:
    void run() {
        char choice;
        do {
            std::cout << "\nНовая игра: выбросите 6, чтобы победить!\n";
            int result;
            do {
                std::cout << "Нажмите Enter для броска...";
                std::cin.ignore();
                result = player.roll();
                std::cout << "Выпало: " << result << std::endl;
            } while (result != 6);
            std::cout << "Победа!\n";

            std::cout << "Сыграть ещё раз? (y/n): ";
            std::cin >> choice;
            std::cin.ignore();
        } while (choice == 'y' || choice == 'Y');

        std::cout << "Спасибо за игру!\n";
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(0));
    Game game;
    game.run();
    return 0;
}