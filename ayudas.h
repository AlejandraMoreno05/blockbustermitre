/*  Funciones de ayuda y extras para
    mejorar y facilitar el trabajo.
================================================= */
#ifndef funcionesDeAyuda
#define funcionesDeAyuda
using namespace std;

void gotoxy(int x, int y) {
  HANDLE hcon;  
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
  COORD dwPos;  
  dwPos.X = x;  
  dwPos.Y= y;  
  SetConsoleCursorPosition(hcon,dwPos);  
} // Fin de añadir GoToXY
#endif