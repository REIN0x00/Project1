#include "OCursor.h"
#include <stdio.h>

int OCursor::ScanCursor(int X,int Y) {
	if ((X == cursorX) && (Y==cursorY)) {
		return printf("Åù");
	}
	else {
		return printf("ÅE");
	}
}