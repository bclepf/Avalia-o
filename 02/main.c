#include <ncurses.h>
#include <stdio.h>

int main(){
    initscr();
    raw();
    keypad(stdscr, TRUE);

    float dist, comb;

    curs_set(1);
    mvprintw(1,3, "===== Rendimento de Combustível =====");
    mvprintw(3,0, "Para um funcionamento adequado da ferramenta utilize apenas algarismos. \nNúmeros não inteiros devem ser informados com .");
    mvprintw(6,0, "Digite a distância percorrida: ");
    scanw("%f", &dist);

    mvprintw(8,0, "Digite a quantidade de combustível gasto no trajeto: ");
    scanw("%f", &comb);

    curs_set(0);

    double consumo = dist/comb;

    clear();
    mvprintw(1,3, "===== Rendimento de Combustível =====");
    mvprintw(3,0, "O consumo médio foi de %.2lf Km/L", consumo);

    mvprintw(5,0, "Pressione qualquer tecla para sair.");

    getch();

    endwin();
    return 0;
}