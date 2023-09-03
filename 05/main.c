#include <stdio.h>
#include <math.h>
#include <ncurses.h>

int main() {
    initscr();
    raw();
    keypad(stdscr, TRUE);

    double cat1, cat2;

    curs_set(1); 
    mvprintw(1,3, "===== Calculador de Hipotenusas =====");
    mvprintw(3,0, "Para um funcionamento adequado da ferramenta utilize apenas algarismos. \nNúmeros não inteiros devem ser informados com .");
    mvprintw(6, 0, "Digite o valor do primeiro cateto: ");
    scanw("%lf", &cat1);
    
    mvprintw(8, 0, "Digite o valor do segundo cateto: ");
    scanw("%lf", &cat2);
    
    curs_set(0);
    double hip = sqrt(cat1*cat1 + cat2*cat2);

    clear();
    mvprintw(1,3, "===== Calculador de Hipotenusas =====");
    mvprintw(3, 0, "O valor da hipotenusa com os catetos %.2lf e %.2lf é: %.2lf.", cat1, cat2, hip);

    refresh();
    mvprintw(5, 0, "Pressione qualquer tecla para sair.");
    getch();

    endwin();

    return 0;
}
