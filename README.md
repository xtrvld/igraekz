**🎲 Dice Roll Game | C++**

Простая консольная игра, где нужно выбросить 6 на кубике, чтобы победить.


 **🚀 Особенности**
- Минималистичный код на C++ (всего 2 класса)
- Интерактивный игровой цикл
- Возможность рестарта без перезапуска
- Поддержка кириллицы в консоли

*Диаграмма последовательности:*
- Участники:
- Игрок -> Game -> Player

**Последовательность:**
1. Игрок запускает игру (Game.run())
2. Game создаёт Player
3. Цикл:
   - Game запрашивает бросок (Player.roll())
   - Player возвращает случайное число
   - Game проверяет результат
   - Если не 6 -> повтор
4. При выпадении 6:
   - Game объявляет победу
   - Предлагает сыграть снова


[Диаграмма состояния](https://imgur.com/a/4nXj3pb)
