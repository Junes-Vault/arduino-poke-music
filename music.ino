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

// Include palTown song
#include "palTown.h"

// Pinouts
#define PIN_SPEAKER 2 // Output
#define PIN_BUTTON  3 // Input Pullup
#define PIN_LED     4 // Output

// Toggle play on or off
void musicToggle()
{
  play = !play;
  digitalWrite(PIN_LED, play);
}

// Arduino Setup
void setup() {

  // Setup inputs and outputs
  pinMode(PIN_SPEAKER, OUTPUT);
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON, INPUT_PULLUP);

  // Ensure speaker & LED are low (off)
  digitalWrite(PIN_SPEAKER, LOW);
  digitalWrite(PIN_LED, LOW);

  // Attach interrupt to button to trigger when pressed
  attachInterrupt(digitalPinToInterrupt(PIN_BUTTON), musicToggle, LOW);
}

// Arduino Loop
void loop() {

  // If play is enabled, play song
  if(play)
    palTown();
}
