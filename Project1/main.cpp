#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


#define BOARD_WIDTH 8
#define BOARD_HEIGHT 8

enum {
	COLOR_NONE=-1,
	COLOR_BLACK = 0,
	COLOR_WHITE = 1,
	COLOR_MAX
};

char colorNames[][5 + 1] = {
	"Black",//COLOR_BLACK
	"White",//COLOR_WHITE
};

int cells[BOARD_HEIGHT][BOARD_WIDTH];
int cursorX, cursorY;
int turn;


int main(){
		for (int y = 0; y < BOARD_HEIGHT; y++) {
			for (int x = 0; x < BOARD_WIDTH; x++) {
				cells[x][y] = COLOR_NONE;
			}
		}
	while (1) {

		system("cls");
		//XY軸作成
		for (int y = 0; y < BOARD_HEIGHT; y++) {
			for (int x = 0; x < BOARD_WIDTH; x++) {
				//カーソル位置特定
				if ((y == cursorY) && (x == cursorX)) {
					printf("◎");
				}
				else {
					switch (cells[y][x]) {
						case COLOR_NONE:
							printf("・");
							break;
						case COLOR_BLACK:
							printf("●");
							break;
						case COLOR_WHITE:
							printf("〇");
					}

				}
			}
			printf("\n");
		};

		printf("%s turn \n", colorNames[turn]);

		switch (_getch()){
			case 'w':
				cursorY--;
				break;
			case 's':
				cursorY++;
				break;
			case 'a':
				cursorX--;
				break;
			case 'd':
				cursorX++;
				break;
			case 'q':
				cells[cursorY][cursorX] = turn;
				turn ^= 1;
		default:
			break;
		}


	}

	
}