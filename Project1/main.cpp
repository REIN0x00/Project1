#include <conio.h>
#include <stdio.h>


#define BOARD_WIDTH 8
#define BOARD_HEIGHT 8

int cursorX, cursorY;


int main(){
	while (1) {
		//XY���쐬
		for (int y = 0; y < BOARD_HEIGHT; y++) {
			for (int x = 0; x < BOARD_WIDTH; x++) {
				//�J�[�\���ʒu����
				if ((y == cursorY) && (x == cursorX)) {
					printf("��");
				}
				else {
					printf("�E");
				}
			}
			printf("\n");
		};
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
		default:
			break;
		}


	}

	
}