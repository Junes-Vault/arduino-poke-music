/*
 * Plays 8-bit game music to an attached speaker
 * Work is titled CC-BY 4.0 but includes work of other licenses
 * (C) 2019 June Hanabi
 * https://creativecommons.org/licenses/by/4.0
 * 
 * SONGS:
 * These songs are listed on KHInsider (https://www.khinsider.com/midi/gameboy/pokemon-red-blue-yellow-)
 * They are licensed  "Creative Commons License permitting non-commercial sharing with attribution"
 * They were converted from MIDI to named notes using "licensed FL Studio"
 * The named notes were hand placed into the files individually by me
 * 
 * NOTE FREQUENCIES:
 * The frequencies were copied from "Physics of Music" http://pages.mtu.edu/~suits/notefreqs.html
 * They are given a vague license that seems very open 
 * "These notes initially arose after a short summer program in 1998 and are placed here for the 
 * convenience of anyone who cares to read them" 
 * --- B. H. Suits, Physics Department, Michigan Technological University, (copyright 1998-2019)
*/

#ifndef BIKE_H
#define BIKE_H

#include "notes.h"
#include "noteSystem.h"

// This song is more difficult because, like most of the songs, it's
// meant for multiple channels and we can only have 1 channel
// All but one channel was stripped out
// In the one channel there were still overlaying segments that had to be re-edited
// to be playable out of one speaker

void bike()
{
  // 1
  playNote(note_C6, 4);
  playNote(note_D6, 4);
  playNote(note_E6, 4);
  playNote(note_C7, 4);

  // 2
  playNote(note_B6, 4);
  playSilence(2);
  playNote(note_A6, 1);
  playNote(note_G6, 1);
  playNote(note_F6, 4);
  playSilence(4);

  // 3
  playSilence(2);
  playNote(note_F6, 2);
  playNote(note_G6, 2);
  playNote(note_A6, 2);
  playNote(note_D7, 2);
  playNote(note_C7, 2);
  playNote(note_B6, 2);
  playNote(note_A6, 1);
  playNote(note_B6, 1);

  // 4
  playNote(note_C7, 2);
  playSilence(4);
  playNote(note_A6, 2);
  playNote(note_G6, 2);
  playSilence(6);

  // 5
  playSilence(2);
  playNote(note_C7, 2);
  playNote(note_B6, 2);
  playNote(note_C7, 2);
  playNote(note_A6, 4);
  playSilence(4);

  // 6
  playSilence(2);
  playNote(note_C7, 2);
  playNote(note_B6, 2);
  playNote(note_C7, 2);
  playNote(note_G6, 4);
  playSilence(4);

  // 7
  playSilence(2);
  playNote(note_C7, 4);
  playNote(note_E7, 2);
  playNote(note_D7, 2);
  playNote(note_C7, 2);
  playNote(note_B6, 2);
  playNote(note_C7, 2);

  // 8
  playNote(note_D7, 8);
  playSilence(6);
  playNote(note_D7, 1);
  playNote(note_C7, 1);

  // 9
  playNote(note_B6, 16);

  // 10
  playNote(note_F6, 4);
  playSilence(2);
  playNote(note_F6, 2);
  playNote(note_G6, 2);
  playNote(note_F6, 2);
  playNote(note_E6, 2);
  playNote(note_D6, 2);

  // 11
  playNote(note_E6, 3);
  playSilence(3);
  playNote(note_E6, 2);
  playNote(note_F6, 2);
  playNote(note_E6, 2);
  playNote(note_D6, 2);
  playNote(note_C6, 2);

  // 12
  playNote(note_F6, 2);
  playNote(note_E6, 2);
  playNote(note_D6, 2);
  playNote(note_F6, 2);
  playNote(note_G6, 4);
  playNote(note_A6, 4);

  // 13 (This beat was kind of weird with overlaying segments, improvised)
  // Was actually the worst as it had partial segments and tiny segments all overlaying
  playNote(note_E6, 2);
  playNote(note_G6, 4);
  playNote(note_F6, 1);
  playNote(note_G6, 1);
  playNote(note_E6, 4);
  playNote(note_F6, 1);
  playNote(note_G6, 1);
  playNote(note_A6, 1);
  playNote(note_B6, 1);

  // 14
  playNote(note_C7, 2);
  playNote(note_B6, 2);
  playNote(note_A6, 2);
  playNote(note_C7, 2);
  playNote(note_B6, 4);
  playNote(note_A6, 4);

  // 15
  playNote(note_G6, 2);
  playNote(note_As6, 4);
  playNote(note_A6, 2);
  playNote(note_G6, 4);
  playSilence(4);

  // 16 (Some overlaying segments were removed)
  playNote(note_A6, 5);
  playNote(note_G6, 1);
  playNote(note_F6, 2);
  playNote(note_B6, 5);
  playNote(note_A6, 1);
  playNote(note_G6, 2);

  // 17 (Some overlaying segments were removed)
  playNote(note_C7, 5);
  playNote(note_B6, 1);
  playNote(note_A6, 2);
  playNote(note_D7, 5);
  playNote(note_E7, 1);
  playNote(note_C7, 2);

  // 18
  playNote(note_D7, 8);
  playSilence(4);
  playNote(note_C7, 4);

  // 19
  playNote(note_B6, 8);
}

#endif
