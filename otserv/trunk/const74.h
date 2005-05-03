//////////////////////////////////////////////////////////////////////
// OpenTibia - an opensource roleplaying game
//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//////////////////////////////////////////////////////////////////////

#ifndef __CONST74_H__
#define __CONST74_H__


#define NETWORKMESSAGE_MAXSIZE 16384

enum MagicEffectClasses {
	NM_ME_DRAW_BLOOD  	= 0x00,
	NM_ME_LOOSE_ENERGY	= 0x01, //fishing?
	NM_ME_PUFF			= 0x02,
	NM_ME_BLOCKHIT		= 0x03,
	NM_ME_EXPLOSION_AREA   = 0x04,
	NM_ME_EXPLOSION_DAMAGE = 0x05,
	NM_ME_FIRE_AREA        = 0x06,
	NM_ME_YELLOW_RINGS     = 0x07,
	NM_ME_POISEN_RINGS     = 0x08,
	NM_ME_HIT_AREA         = 0x09,
	NM_ME_ENERGY_AREA      = 0x0A, //10
	NM_ME_ENERGY_DAMAGE    = 0x0B, //11
	NM_ME_MAGIC_ENERGIE    = 0x0C, //12
	NM_ME_MAGIC_BLOOD      = 0x0D, //13
	NM_ME_MAGIC_POISEN     = 0x0E, //14
	NM_ME_HITBY_FIRE       = 0x0F, //15
	NM_ME_POISEN           = 0x10, //16
	NM_ME_MORT_AREA        = 0x11, //17
	NM_ME_SOUND_GREEN      = 0x12, //18
	NM_ME_SOUND_RED        = 0x13, //19
	/*NM_ME_POISON_AREA    = 0x14, //20*/
	NM_ME_SOUND_YELLOW     = 0x15, //21
	NM_ME_SOUND_PURPLE     = 0x16, //22
	NM_ME_SOUND_BLUE       = 0x17, //23
	NM_ME_SOUND_WHITE      = 0x18, //24
};

#define NM_ANI_BOLT              1
#define NM_ANI_ARROW             2
#define NM_ANI_FIRE              3
#define NM_ANI_ENERGY            4
#define NM_ANI_POISONARROW       5
#define NM_ANI_BURSTARROW        6
#define NM_ANI_THROWINGSTAR      7
#define NM_ANI_THROWINGKNIFE     8
#define NM_ANI_SMALLSTONE        9
#define NM_ANI_SUDDENDEATH       10
#define NM_ANI_LARGEROCK         11
#define NM_ANI_SNOWBALL          12
#define NM_ANI_SPEAR             0
#define NM_ANI_POWERBOLT         13
#define NM_ANI_FLYPOISONFIELD    14

enum SpeakClasses {
	SPEAK_SAY	  	= 0x01,
	SPEAK_WHISPER 	= 0x02,
	SPEAK_YELL	  	= 0x03,
	SPEAK_PRIVATE 	= 0x04,
	SPEAK_RED	  	= 0x0B,
	/*SPEAK_CHANNEL?? 	= 0x06,
	SPEAK_CHANNEL?? 	= 0x07,
	SPEAK_CHANNEL?? 	= 0x08,*/
	SPEAK_BROADCAST	= 0x09,
	SPEAK_CHANNEL_Y	= 0x05,	//yellow
	SPEAK_CHANNEL_R1= 0x0A,	//red
	SPEAK_CHANNEL_R2= 0x0E,	//red
	SPEAK_CHANNEL_O	= 0x0C,	//orange
			
	SPEAK_MONSTER1 	= 0x10,
	SPEAK_MONSTER2 	= 0x11,
};

enum MessageClasses {
	MSG_RED_INFO  = 0x12,
	MSG_ADVANCE   = 0x13,
	MSG_EVENT     = 0x14,
	/*MSG_EVENT     = 0x15,	*/
	MSG_INFO      = 0x16,
	MSG_SMALLINFO = 0x17,
	MSG_BLUE_TEXT = 0x18,
	MSG_RED_TEXT  = 0x19,
};


enum FluidClasses {
	FLUID_EMPTY = 0x00,	//note: class = fluid_number mod 8
	FLUID_BLUE	= 0x01,
	FLUID_RED	= 0x02,
	FLUID_BROWN = 0x03,
	FLUID_GREEN = 0x04,
	FLUID_YELLOW= 0x05,
	FLUID_WHITE = 0x06,
	FLUID_PURPLE= 0x07,
};


enum Icons {
 ICON_POISON = 1,
 ICON_BURN = 2, 
 ICON_ENERGY =  4, 
 ICON_DRUNK = 8, 
 ICON_MANASHIELD = 16, 
 ICON_PARALYZE = 32, 
 ICON_HASTE = 64, 
 ICON_SWORDS = 128
 };

enum WeaponType 
{
  NONE, SWORD, CLUB, AXE, DIST, MAGIC, AMO, SHIELD
};

enum amu_t{
	AMU_NONE,
	AMU_BOLT,
	AMU_ARROW
};


enum subfight_t {
	DIST_NONE = 0,
	DIST_BOLT = NM_ANI_BOLT,
  DIST_ARROW = NM_ANI_ARROW, 
  DIST_FIRE = NM_ANI_FIRE,
  DIST_ENERGY = NM_ANI_ENERGY,
  DIST_POISONARROW = NM_ANI_POISONARROW,
  DIST_BURSTARROW = NM_ANI_BURSTARROW,
  DIST_THROWINGSTAR = NM_ANI_THROWINGSTAR,
  DIST_THROWINGKNIFE = NM_ANI_THROWINGKNIFE,
  DIST_SMALLSTONE = NM_ANI_SMALLSTONE,
  DIST_SUDDENDEATH = NM_ANI_SUDDENDEATH,
  DIST_LARGEROCK = NM_ANI_LARGEROCK,
  DIST_SNOWBALL = NM_ANI_SNOWBALL,
  DIST_POWERBOLT = NM_ANI_POWERBOLT,
  DIST_SPEAR = NM_ANI_SPEAR,
  DIST_POISONFIELD = NM_ANI_FLYPOISONFIELD
};

enum item_t {
	ITEM_FISHING_ROD		= 2580,
	ITEM_SHOVEL			= 2554,
	ITEM_ROPE				= 2120,
	ITEM_COINS_GOLD		= 2148,
	ITEM_COINS_PLATINUM		= 2152,
	ITEM_DEPOT 			= 2594,
	ITEM_RUNE_BLANK		= 2260
};




#endif
