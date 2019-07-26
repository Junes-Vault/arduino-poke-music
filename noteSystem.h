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

#ifndef NOTESYSTEM_H
#define NOTESYSTEM_H

// Continue play on each note?
bool play = false;

// Speed 1/16 or 1/8 for each note
//const double noteBaseLength = 0.0625 * 1000; // 1/16
const double noteBaseLength = 0.125 * 1000; // 1/8

// Play a single note, length is in note length units defined above
void playNote(long note, long len)
{
  // Skip if play is disabled
  if(!play)
    return;

  // Calculate actual note length in milliseconds
  long actualLen = len * noteBaseLength;

  // Play and delay until finished
  tone(2, note, actualLen);
  delay(actualLen);
}

// play silence (Nothing), length is in note length units defined above
void playSilence(long len)
{
  // Skip if play is disabled
  if(!play)
    return;

  // Just delay actual note length in milliseconds
  delay(len * noteBaseLength);
}

#endif
