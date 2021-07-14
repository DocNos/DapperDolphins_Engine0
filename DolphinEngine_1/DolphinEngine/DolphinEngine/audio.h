//------------------------------------------------------------------------------
//
// File Name:	audio.h
// Author(s):	Gavin Lu
//				
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//------------------------------------------------------------------------------

#pragma once

#include "fmod.h"        // Sound
#include "fmod_errors.h" // Sound error logging, also includes fmod.h
#include "fmod_output.h" // Output
#include "fmod_dsp.h"    // Software engine/DSP engine, also includes fmod_dps_effects.h
#include "stdlib.h"

typedef struct Sound* SoundPtr;

void AudioInit();
void AudioUpdate();
void AudioCleanup();
SoundPtr MusicLoad(const char* name, const char* filePath);
SoundPtr AudioLoad(const char* name, const char* filePath);
void SetPitch(float pitch);
void SetVolumeMusic(float volume);
void SetVolumeEffect(float volume);
void SoundRelease(SoundPtr tempsound);
void SoundStructFree(SoundPtr* tempsound);
void AudioPlay(SoundPtr tempsound);

void AudioStopMusic();
