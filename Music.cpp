// 
// 
// 

#include "Music.h"
#include "globalConfig.h"

#ifdef SuperMalio
//##############**"超级马里奥**##############//
int melody[] = {
NOTE_E4, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_E4, NOTE_G4, NOTE_G3,
NOTE_C4, NOTE_G3, NOTE_E3, NOTE_A3, NOTE_B3, NOTE_AS3, NOTE_A3, NOTE_G3, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_F4, NOTE_G4, NOTE_E4, NOTE_C4, NOTE_D4, NOTE_B3,
NOTE_C4, NOTE_G3, NOTE_E3, NOTE_A3, NOTE_B3, NOTE_AS3, NOTE_A3, NOTE_G3, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_F4, NOTE_G4, NOTE_E4, NOTE_C4, NOTE_D4, NOTE_B3,
NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_DS4, NOTE_E4, NOTE_GS3, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_DS4, NOTE_E4, NOTE_C5, NOTE_C5, NOTE_C5,
NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_DS4, NOTE_E4, NOTE_GS3, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_D4, NOTE_C4,
NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4,
NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_A3, NOTE_G3
};
int noteDurations[] = {
8,4,4,8,4,2,2,
3,3,3,4,4,8,4,8,8,8,4,8,4,3,8,8,3,
3,3,3,4,4,8,4,8,8,8,4,8,4,3,8,8,2,
8,8,8,4,4,8,8,4,8,8,3,8,8,8,4,4,4,8,2,
8,8,8,4,4,8,8,4,8,8,3,3,3,1,
8,4,4,8,4,8,4,8,2,8,4,4,8,4,1,
8,4,4,8,4,8,4,8,2
};
//----------------------------------------------------------------------------------------------
#endif // SuperMalio
#ifdef PIRATE
	##############**"HE IS A PIRATE" Theme song of Pirates of caribbean**##############//
	int melody[] = {
		NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,
	  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,
	  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,
	  NOTE_A3, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_F4,
	  NOTE_F4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_D4,
	  0, NOTE_A3, NOTE_C4, NOTE_B3, NOTE_D4, NOTE_B3, NOTE_E4, NOTE_F4,
	  NOTE_F4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4,
	  NOTE_D4, 0, 0, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_F4,
	  NOTE_G4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4,
	  NOTE_A4, NOTE_D4, 0, NOTE_D4, NOTE_E3, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_A4,
	  NOTE_D4, 0, NOTE_D4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_F4, NOTE_D4
	};
	int noteDurations[] = {
	  4, 8, 4, 8, 4, 8, 8, 8, 8, 4, 8, 4, 8, 4, 8, 8, 8, 8, 4, 8, 4, 8,
	  4, 8, 8, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8,
	  8, 4, 8, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8, 4, 4, 8, 4,
	  4, 8, 8, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8, 4, 4, 8, 8,
	  8, 4, 8, 8, 8, 4, 4, 4, 8, 4, 8, 8, 8, 4, 4, 8, 8
	};
	----------------------------------------------------------------------------------------------
#endif // PIRATE
#ifdef CrazyFrog
##############**"Crazy Frog" song of Crazy frog album**##############//
int melody[] = {
  NOTE_D4, 0, NOTE_F4, NOTE_D4, 0, NOTE_D4, NOTE_G4, NOTE_D4, NOTE_C4,
  NOTE_D4, 0, NOTE_A4, NOTE_D4, 0, NOTE_D4, NOTE_AS4, NOTE_A4, NOTE_F4,
  NOTE_D4, NOTE_A4, NOTE_D5, NOTE_D4, NOTE_C4, 0, NOTE_C4, NOTE_A3, NOTE_E4, NOTE_D4,
  0, NOTE_D4, NOTE_D4
};
int noteDurations[] = {
  8, 8, 6, 16, 16, 16, 8, 8, 8,
  8, 8, 6, 16, 16, 16, 8, 8, 8,
  8, 8, 8, 16, 16, 16, 16, 8, 8, 2,
  8, 4, 4
};
###########End of Crazy Frog#############//
#endif // CrazyFrog
#ifdef Mariounderworld
##############**"Mario underworld" **##############//
	int melody[] = {
	  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_AS3, NOTE_AS4, 0, 0,
	  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_AS3, NOTE_AS4, 0, 0,
	  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4, NOTE_DS3, NOTE_DS4, 0, 0,
	  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4, NOTE_DS3, NOTE_DS4, 0,
	  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
	  NOTE_CS4, NOTE_DS4, NOTE_DS4, NOTE_GS3, NOTE_G3, NOTE_CS4,
	  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
	  NOTE_GS4, NOTE_DS4, NOTE_B3,  NOTE_AS3, NOTE_A3, NOTE_GS3, 0, 0, 0
	};
	int noteDurations[] = {
	  12, 12, 12, 12, 12, 12, 6, 3,
	  12, 12, 12, 12, 12, 12, 6, 3,
	  12, 12, 12, 12, 12, 12, 6,
	  3, 12, 12, 12, 12,
	  12, 12, 6, 6, 18, 18, 18,
	  6, 6, 6, 6, 6, 6,
	  18, 18, 18, 18, 18, 18, 10, 10, 10,
	  10, 10, 10, 3, 3, 3
	};
	###########End of Mario underworld#############//
#endif // DEBUG
#ifdef Titanic
	##############**"Titanic" **##############//
int melody[] = {
  NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4,
  NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_F5,
  NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4,
  NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_E5, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_B3, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_B3, NOTE_E4,
  NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4


};
int noteDurations[] = {
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 1,
  8, 8, 8, 8, 4, 4, 4, 8, 4, 4, 8, 8, 8, 8, 4, 8, 8, 4, 8, 4, 8, 8, 4, 8, 4, 1
};
###########End of Titanic#############//
#endif // DEBUG

void playMusic()
{
#pragma region 音调定义环节





	



#pragma endregion
	for (int thisNote = 0; thisNote < sizeof(melody)/sizeof(melody[0]); thisNote++) {
		int noteDuration = 800 / noteDurations[thisNote];
		tone(musicPin, melody[thisNote], noteDuration);
		int pauseBetweenNotes = noteDuration * 1.30;
		delay(pauseBetweenNotes);
		noTone(musicPin);
		//if (thisNote == 10)break;
	}
	delay(2000);

}