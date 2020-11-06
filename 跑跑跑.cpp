#include <stdio.h>
#include <windows.h>

const int DISTANCE = 50;

void gotoxy(int x,int y) {
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(h0ut, pos);
}

int main(){
	while(true){
		//print the head
		for (int i = 0; i <= DISTANCE; i ++){
			Sleep(100);
			system("cls");
			gotoxy(i,0);
			printf("  o  ");
			gotoxy(i,1);
			printf("--|--");
			gotoxy(i,2);
			printf(" / \\");
		}
		
		//
		for (int i = DISTANCE; i >= 0; i --){
			Sleep(100);
			system("cls");
			gotoxy(i,0);
			printf("  o  ");
			gotoxy(i,1);
			printf("--|--");
			gotoxy(i,2);
			printf(" / \\");
		}
	
	}	
	return 0;
 } 
