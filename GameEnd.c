#include "GameEnd.h"

static int winner;

//終わったときに呼ばれる、勝者の判別
void GameEnd() {
		if (blackframe < whiteframe) { winner = WHITE; }
		if (blackframe > whiteframe) { winner = BLACK; }
		if (blackframe == whiteframe) { winner = DRAW; }
}

//UIに呼ばれる
int GetWinner() { return winner; }
