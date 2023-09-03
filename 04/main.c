#include <ncurses.h>
#include <stdio.h>

int main(){
    initscr();
    raw();
    keypad(stdscr, TRUE);

    double temp;

    curs_set(1);
    mvprintw(1,3, "===== Conversor de Graus Fahrenheit para Graus Celsius =====");
    mvprintw(3,0, "Para um funcionamento adequado da ferramenta utilize apenas algarismos. \nNúmeros não inteiros devem ser informados com .");

    mvprintw(6,0, "Insira a temperatura em ºF: ");
    scanw("%lf", &temp);

    double cel = (temp-32)*(5.0/9.0);

    clear();
    
    mvprintw(1,3, "===== Conversor de Graus Fahrenheit para Graus Celsius =====");
    mvprintw(3,0, "%.2lfºF equivalem a %.2lfºC", temp, cel);
    
    refresh();
    mvprintw(5,0, "Pressione qualquer tecla para sair.");

    getch();

    endwin();
    return 0;
}