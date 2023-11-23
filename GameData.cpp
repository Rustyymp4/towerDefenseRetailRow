#include "GameData.h"
#include "GridBox.h"

GameData::GameData() {

	prototypeMap["gridBox"] = new GridBox();

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 7; j++) {
			rows[i][j] = new GridBox(, j, i);
		}
	}
}