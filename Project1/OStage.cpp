#include "OStage.h"
#include "OCursor.h"
#include "stdio.h"

void OStage::MakeStage(int X,int Y) {
	OCursor ObjCursor;
	int cursorX=0, cursorY=0;
	for (int i = 0; i < X; i++) {
		for (int t = 0; t < Y; t++) {
			ObjCursor.ScanCursor(i, t);
			//printf("E");
		}
		printf("\n");
	}
}