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

#ifndef PALTOWN_H
#define PALTOWN_H

#include "notes.h"
#include "noteSystem.h"

void palTown()
{
  // 1
  playNote(note_D6, 2);
  playNote(note_C6, 2);
  playNote(note_B5, 2);
  playNote(note_A5, 2);
  playNote(note_G6, 2);
  playNote(note_E6, 2);
  playNote(note_Fs6, 2);
  playNote(note_E6, 2);

  // 2
  playNote(note_D6, 6);
  playNote(note_B5, 2);
  playNote(note_G5, 2);
  playNote(note_G5, 2);
  playNote(note_A5, 2);
  playNote(note_B5, 2);

  // 3
  playNote(note_C6, 8);
  playSilence(2);
  playNote(note_Fs5, 2);
  playNote(note_G5, 2);
  playNote(note_A5, 2);

  // 4
  playNote(note_B5, 6);
  playNote(note_C6, 1);
  playNote(note_B5, 1);
  playNote(note_A5, 8);

  // 5
  playNote(note_D6, 2);
  playNote(note_C6, 2);
  playNote(note_B5, 2);
  playNote(note_D6, 2);
  playNote(note_G6, 2);
  playNote(note_Fs6, 2);
  playNote(note_Fs6, 2);
  playNote(note_G6, 2);

  // 6
  playNote(note_E6, 6);
  playNote(note_D6, 10);

  // 7
  playNote(note_C6, 2);
  playNote(note_B5, 2);
  playNote(note_A5, 2);
  playNote(note_G5, 2);
  playNote(note_D6, 2);
  playNote(note_C6, 2);
  playNote(note_B5, 2);
  playNote(note_A5, 2);

  // 8
  playNote(note_G5, 8);
  playSilence(2);
  playNote(note_G5, 2);
  playNote(note_A5, 2);
  playNote(note_B5, 2);

  // 9
  playNote(note_C6, 8);
  playNote(note_D6, 6);
  playNote(note_C6, 2);

  //10
  playNote(note_B5, 8);
  playSilence(2);
  playNote(note_G5, 2);
  playNote(note_A5, 2);
  playNote(note_B5, 2);

  // 11
  playNote(note_C6, 4);
  playNote(note_C6, 4);
  playNote(note_D6, 6);
  playNote(note_C6, 1);
  playNote(note_D6, 1);

  // 12
  playNote(note_B5, 8);
  playSilence(2);
  playNote(note_B5, 2);
  playNote(note_A5, 2);
  playNote(note_G5, 2);

  // 13
  playNote(note_A5, 8);
  playNote(note_E5, 4);
  playNote(note_B5, 4);

  // 14
  playNote(note_A5, 8);
  playNote(note_G5, 4);
  playNote(note_E5, 4);

  // 15
  playNote(note_Fs5, 8);
  playNote(note_G5, 4);
  playNote(note_B5, 4);

  // 16
  playNote(note_B5, 8);
  playNote(note_A5, 8);
}

#endif
