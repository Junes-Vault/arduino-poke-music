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

#ifndef NOTES_H
#define NOTES_H

// Octave 0
#define note_C0 16.35
#define note_Cs0 17.32
#define note_Db0 17.32
#define note_D0 18.35
#define note_Ds0 19.45
#define note_Eb0 19.45
#define note_E0 20.60
#define note_F0 21.83
#define note_Fs0 23.12
#define note_Gb0 23.12
#define note_G0 24.50
#define note_Gs0 25.96
#define note_Ab0 25.96
#define note_A0 27.50
#define note_As0 29.14
#define note_Bb0 29.14
#define note_B0 30.87

// Octave 1
#define note_C1 32.70
#define note_Cs1 34.65
#define note_Db1 34.65
#define note_D1 36.71
#define note_Ds1 38.89
#define note_Eb1 38.89
#define note_E1 41.20
#define note_F1 43.65
#define note_Fs1 46.25
#define note_Gb1 46.25
#define note_G1 49.00
#define note_Gs1 51.91
#define note_Ab1 51.91
#define note_A1 55.00
#define note_As1 58.27
#define note_Bb1 58.27
#define note_B1 61.74

// Octave 2
#define note_C2 65.41
#define note_Cs2 69.30
#define note_Db2 69.30
#define note_D2 73.42
#define note_Ds2 77.78
#define note_Eb2 77.78
#define note_E2 82.41
#define note_F2 87.31
#define note_Fs2 92.50
#define note_Gb2 92.50
#define note_G2 98.00
#define note_Gs2 103.83
#define note_Ab2 103.83
#define note_A2 110.00
#define note_As2 116.54
#define note_Bb2 116.54
#define note_B2 123.47

// Octave 3
#define note_C3 130.81
#define note_Cs3 138.59
#define note_Db3 138.59
#define note_D3 146.83
#define note_Ds3 155.56
#define note_Eb3 155.56
#define note_E3 164.81
#define note_F3 174.61
#define note_Fs3 185.00
#define note_Gb3 185.00
#define note_G3 196.00
#define note_Gs3 207.65
#define note_Ab3 207.65
#define note_A3 220.00
#define note_As3 233.08
#define note_Bb3 233.08
#define note_B3 246.94

// Octave 4
#define note_C4 261.63
#define note_Cs4 277.18
#define note_Db4 277.18
#define note_D4 293.66
#define note_Ds4 311.13
#define note_Eb4 311.13
#define note_E4 329.63
#define note_F4 349.23
#define note_Fs4 369.99
#define note_Gb4 369.99
#define note_G4 392.00
#define note_Gs4 415.30
#define note_Ab4 415.30
#define note_A4 440.00
#define note_As4 466.16
#define note_Bb4 466.16
#define note_B4 493.88

// Octave 5
#define note_C5 523.25
#define note_Cs5 554.37
#define note_Db5 554.37
#define note_D5 587.33
#define note_Ds5 622.25
#define note_Eb5 622.25
#define note_E5 659.25
#define note_F5 698.46
#define note_Fs5 739.99
#define note_Gb5 739.99
#define note_G5 783.99
#define note_Gs5 830.61
#define note_Ab5 830.61
#define note_A5 880.00
#define note_As5 932.33
#define note_Bb5 932.33
#define note_B5 987.77

// Octave 6
#define note_C6 1046.50
#define note_Cs6 1108.73
#define note_Db6 1108.73
#define note_D6 1174.66
#define note_Ds6 1244.51
#define note_Eb6 1244.51
#define note_E6 1318.51
#define note_F6 1396.91
#define note_Fs6 1479.98
#define note_Gb6 1479.98
#define note_G6 1567.98
#define note_Gs6 1661.22
#define note_Ab6 1661.22
#define note_A6 1760.00
#define note_As6 1864.66
#define note_Bb6 1864.66
#define note_B6 1975.53

// Octave 7
#define note_C7 2093.00
#define note_Cs7 2217.46
#define note_Db7 2217.46
#define note_D7 2349.32
#define note_Ds7 2489.02
#define note_Eb7 2489.02
#define note_E7 2637.02
#define note_F7 2793.83
#define note_Fs7 2959.96
#define note_Gb7 2959.96
#define note_G7 3135.96
#define note_Gs7 3322.44
#define note_Ab7 3322.44
#define note_A7 3520.00
#define note_As7 3729.31
#define note_Bb7 3729.31
#define note_B7 3951.07

// Octave 8
#define note_C8 4186.01
#define note_Cs8 4434.92
#define note_Db8 4434.92
#define note_D8 4698.63
#define note_Ds8 4978.03
#define note_Eb8 4978.03
#define note_E8 5274.04
#define note_F8 5587.65
#define note_Fs8 5919.91
#define note_Gb8 5919.91
#define note_G8 6271.93
#define note_Gs8 6644.88
#define note_Ab8 6644.88
#define note_A8 7040.00
#define note_As8 7458.62
#define note_Bb8 7458.62
#define note_B8 7902.13

#endif
