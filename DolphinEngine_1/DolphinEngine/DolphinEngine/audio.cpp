//------------------------------------------------------------------------------
//
// File Name:	audio.c
// Author(s):	Gavin Lu			
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//------------------------------------------------------------------------------
#include "audio.h"

typedef struct Sound
{

	const char* soundPath; // file path
	const char* name;      // sound name for reference
	FMOD_SOUND* fmodSound; // for fmod struct management
	FMOD_CHANNEL* channel; // another fmod struct for management

}Sound;

static FMOD_SYSTEM* FmodSystem;    // Actual Sound System
static FMOD_SOUND* sound;          // Sound with ID, need to be an array later to store multiple sounds
static FMOD_CHANNEL* channel = 0;  // Channels
static FMOD_RESULT result;         // Result for error logging
static FMOD_SOUNDGROUP* effect;
static FMOD_SOUNDGROUP* music;

void ERRCHECK(FMOD_RESULT checkResult) 
{

	if (checkResult != FMOD_OK) 
	{
		//TraceMessage("There was an error in the audio system");
		//TraceMessage("(FMOD): %s", FMOD_ErrorString(checkResult));
	}

}

void AudioInit() 
{
	result = FMOD_System_Create(&FmodSystem);
	ERRCHECK(result);

	void* extradriverdata = 0;
	result = FMOD_System_Init(FmodSystem, 32, FMOD_INIT_NORMAL, extradriverdata);
	ERRCHECK(result);

	FMOD_System_CreateSoundGroup(FmodSystem, "music", &music);
	FMOD_System_CreateSoundGroup(FmodSystem, "effect", &effect);

	// Create and Play the sound
	// Note: this should be generalized for multiple sounds and
	//       be placed in a function to be used outside of init.
	// CreateStream versus CreateSound?

	// result = FMOD_System_CreateSound(FmodSystem, "../assets/audio/drumloop.wav", FMOD_LOOP_NORMAL | FMOD_2D, 0, sound[0]);
	
	// What is FMOD_HARDWARE in terms of the FMOD walkthrough doc given to us?

	// The sound[0] is for when the sound variable is made an array, for now it isn't cause when releasing, the sound requires the soundID which
	// isn't properly handled yet.

	// FMOD_HARDWARE has been replaced with FMOD_LOOP_NORMAL | FMOD_2D

	// It is crucial to note that CreateStream is more for music since it prepares it off a mass storage device

	// CreateSound is more for sound effects as it loads into memory

	/*result = FMOD_System_CreateStream(FmodSystem, "../Assets/Snow.wav", FMOD_LOOP_NORMAL | FMOD_2D, 0, &sound);
	ERRCHECK(result);

	result = FMOD_System_PlaySound(FmodSystem, sound, 0, false, &channel);
	ERRCHECK(result);*/

}

// Update the Audio System
// Note: this should be called frequently such as every game loop or
//       every time a user enters a command depending on the engine

void AudioUpdate() 
{

	result = FMOD_System_Update(FmodSystem);
	ERRCHECK(result);

}

void AudioCleanup() 
{

	// For when soundID is passed
	// result = FMOD_Sound_Release(sound[soundID]);

	// Release all sounds that have been created
	/*result = FMOD_Sound_Release(sound);*/
	ERRCHECK(result);
	result = FMOD_System_Close(FmodSystem);
	ERRCHECK(result);
	result = FMOD_System_Release(FmodSystem);
	ERRCHECK(result);
	

}

SoundPtr MusicLoad(const char* name, const char* filePath) 
{
	Sound* temp;
	temp = (Sound*)calloc(1, sizeof(Sound));
	if (temp)
	{

		FMOD_CHANNEL* tempchannel = 0;
		FMOD_SOUND* tempsound;
		result = FMOD_System_CreateStream(FmodSystem, filePath, FMOD_LOOP_NORMAL | FMOD_2D, 0, &tempsound);
		ERRCHECK(result);
		temp->soundPath = filePath;
		temp->name = name;
		temp->fmodSound = tempsound;
		temp->channel = tempchannel;
		FMOD_Sound_SetSoundGroup(temp->fmodSound, music);

		return temp;

	}
	else 
	{
		return NULL;

	}
	

}

SoundPtr AudioLoad(const char* name, const char* filePath) 
{
	Sound* temp;
	temp = (Sound*)calloc(1, sizeof(Sound));
	if (temp)
	{
		FMOD_CHANNEL* tempchannel = channel;
		FMOD_SOUND* tempsound;
		result = FMOD_System_CreateSound(FmodSystem, filePath, FMOD_LOOP_OFF | FMOD_2D, 0, &tempsound);
		ERRCHECK(result);
		temp->soundPath = filePath;
		temp->name = name;
		temp->fmodSound = tempsound;
		temp->channel = tempchannel;
		FMOD_Sound_SetSoundGroup(temp->fmodSound, effect);

		return temp;

	}
	else 
	{
		return NULL;

	}


}

void SetPitch(float pitch)
{

	FMOD_Channel_SetPitch(channel, pitch);

}

void SetVolumeMusic(float volume)
{

	FMOD_SoundGroup_SetVolume(music, volume);

}

void SetVolumeEffect(float volume)
{

	FMOD_SoundGroup_SetVolume(effect, volume);

}

void SoundRelease(SoundPtr tempsound)
{
	if (&tempsound)
	{
		result = FMOD_Sound_Release(tempsound->fmodSound);
		ERRCHECK(result);
		free(tempsound);
		tempsound = NULL;
		SoundStructFree(&tempsound);
	}
	

}

void SoundStructFree(SoundPtr* tempsound)
{

	free(*tempsound);
	*tempsound = NULL;

}

void AudioPlay(SoundPtr tempsound) 
{

	result = FMOD_System_PlaySound(FmodSystem, tempsound->fmodSound, 0, false, &channel);
	ERRCHECK(result);

}

void AudioStopMusic() 
{

	FMOD_SoundGroup_Stop(music);

}

void AudioSetPath(SoundPtr tempsound, const char* filePath)
{

	if (tempsound)
	{
		result = FMOD_Sound_Release(tempsound->fmodSound);
		ERRCHECK(result);
		result = FMOD_System_CreateStream(FmodSystem, filePath, FMOD_LOOP_NORMAL | FMOD_2D, 0, &(tempsound->fmodSound));
		ERRCHECK(result);
		tempsound->soundPath = filePath;
	}

}