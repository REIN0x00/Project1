#include <conio.h>
#include <stdio.h>

#include "OStage.h"

#define BOARD_WIDTH 8
#define BOARD_HEIGHT 8

int main(){
	OStage OStage;
	OStage.MakeStage(BOARD_WIDTH, BOARD_HEIGHT);
	_getch();
	
}