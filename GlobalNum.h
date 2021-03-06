#ifndef _GLOBAL_NUM_INCLUDE_
#define _GLOBAL_NUM_INCLUDE_

/*
外部変数を使用する時はこのヘッダーファイルをインクルードしてください。
*/
#include "ConstantNum.h"
#include <Windows.h>

extern int turn;        //どちらのターンか BLACK:1 WHITE:2
extern int blackframe;  //黒のコマの数
extern int whiteframe;  //白のコマの数

extern sMASS MassData [10][10]; //各マスのデータ配列

extern POINT keyPos;

extern int putJudgeCnt;		//置けなくなったかの判定用

extern int sceneFlag;

#endif