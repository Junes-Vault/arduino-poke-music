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
#include "bike.h"
#include "palTown.h"

// Pinouts
#define PIN_SPEAKER     2  // Output
#define PIN_BTN_PLAY    3  // Input
#define PIN_BTN_SWTCH   5  // Input
#define PIN_LED_PLAY    13 // Output

#define PIN_LED_SWTCH_1 4  // Output
#define PIN_LED_SWTCH_2 5  // Output

// Highest song index starting with 0
#define SONGS_MAX_INDEX 2

byte songSel = 0;

// Switches songs
void musicSwitch()
{
  Serial.println("I'm here");
  
  songSel++;
  
  if(songSel > SONGS_MAX_INDEX)
    songSel = 0;

  digitalWrite(PIN_LED_SWTCH_1, (songSel & 1) > 0);
  digitalWrite(PIN_LED_SWTCH_2, (songSel & 2) > 0);
}

// Toggle play on or off
void musicToggle()
{
  play = !play;
  digitalWrite(PIN_LED_PLAY, play);
}

// Arduino Setup
void setup() {

  Serial.begin(9600);

  // Setup inputs and outputs
  pinMode(PIN_SPEAKER, OUTPUT);
  pinMode(PIN_LED_PLAY, OUTPUT);
  pinMode(PIN_BTN_PLAY, INPUT);
  pinMode(PIN_BTN_SWTCH, INPUT);
  pinMode(PIN_LED_SWTCH_1, OUTPUT);
  pinMode(PIN_LED_SWTCH_2, OUTPUT);

  // Ensure speaker & LEDs are low (off)
  digitalWrite(PIN_SPEAKER, LOW);
  digitalWrite(PIN_LED_PLAY, LOW);
  digitalWrite(PIN_LED_SWTCH_1, LOW);
  digitalWrite(PIN_LED_SWTCH_2, LOW);

  // Attach interrupt to button to trigger when pressed
  attachInterrupt(digitalPinToInterrupt(PIN_BTN_PLAY), musicToggle, HIGH);
  attachInterrupt(digitalPinToInterrupt(PIN_BTN_SWTCH), musicSwitch, HIGH);
}

// Arduino Loop
void loop() {
  // If play is enabled
  if(!play)
    return;

  // Play correct song
  if(songSel == 0)
    palTown();
  else if(songSel == 1)
    bike();
}
