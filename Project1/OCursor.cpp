#include "OCursor.h"
#include <stdio.h>

int OCursor::ScanCursor(int X,int Y) {
	if ((X == cursorX) && (Y==cursorY)) {
		return printf("��");
	}
	else {
		return printf("�E");
	}
}