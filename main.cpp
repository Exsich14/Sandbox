#include <iostream>
#include <vector>
#include <conio.h>

const int WIDTH = 20;
const int HEIGHT = 10;

int px = 5;
int py = 5;

std::vector<std::vector<char>> world;

void init() {
    world.resize(HEIGHT, std::vector<char>(WIDTH, '.'));
}

void draw() {
    system("cls");
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == px && y == py)
                std::cout << '@';
            else
                std::cout << world[y][x];
        }
        std::cout << '\n';
    }
    std::cout << "WASD move | B build | X destroy | Q quit\n";
}

int main() {
    init();

    while (true) {
        draw();
        char c;
        std::cin >> c;

        if (c == 'q' || c == 27) break;

        if (c == 'w' && py > 0) py--;
        if (c == 's' && py < HEIGHT - 1) py++;
        if (c == 'a' && px > 0) px--;
        if (c == 'd' && px < WIDTH - 1) px++;

        if (c == 'b')
            world[py][px] = '#';

        if (c == 'x')
            world[py][px] = '.';
    }
}
