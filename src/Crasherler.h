#include "main.h"

/*
Bunlar� 0.3DL'ye sadece developer paneli taraf�na salabiliriz.
Crasherler �u an en son d���n�lecek olan �ey.
*/
#if COMPILE_TYPE == COMPILE_TYPE_TURKISH_THELIFE_VERSION || COMPILE_TYPE == COMPILE_TYPE_TURKISH_HELLSIDE_VERSION || COMPILE_TYPE == COMPILE_TYPE_TURKISH_RAPIDFIRE_VERSION
void C_PassengerCrasher();
void C_HighfRollCrasher();
void C_RemovePlayerCrasher();
void C_TuningCrasher();

void C_InvalidBulletsCrasher1();
void C_InvalidBulletsCrasher2();
void C_InvalidBulletsCrasher3();
void C_InvalidBulletsCrasher4();
void C_RollCrasher1();
void C_RollCrasher2();
void C_DirectionCrasher1();
void C_DirectionCrasher2();
void GameSoundCrasher();
void Crashers();
#endif
//#endif