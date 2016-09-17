#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void displayInstructions();

int main()
{
    cout << "Initializing Variables..." << endl;
    char note;
    float octave = 0;
    float octavemultiplier = 1;
    float holdLength = 100;
    float a = 261.626;
    float w = 277.183;
    float s = 293.665;
    float e = 311.127;
    float d = 329.628;
    float f = 349.228;
    float t = 369.994;
    float g = 391.995;
    float y = 415.305;
    float h = 440.000;
    float u = 466.164;
    float j = 493.883;
    float k = 523.251;
    cout << "Variables Initialized." << endl;
    system("cls");

    /// Function to display instructions on program start.
    displayInstructions();


    /// Keep going forever
    while(true){

        /// Checks which key the user pressed, and beeps the note with it's Hz multiplied by the octave multiplier, and prints out the note.
        note = getch();
        if(note == 'a') {Beep(a*octavemultiplier, holdLength); cout << "C: " << a*octavemultiplier << "  Hz for " << holdLength << "ms" << endl;}
        if(note == 'w') {Beep(w*octavemultiplier, holdLength); cout << "C#: " << w*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}
        if(note == 's') {Beep(s*octavemultiplier, holdLength); cout << "D: " << s*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}
        if(note == 'e') {Beep(e*octavemultiplier, holdLength); cout << "D#: " << e*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}
        if(note == 'd') {Beep(d*octavemultiplier, holdLength); cout << "E: " << d*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}
        if(note == 'f') {Beep(f*octavemultiplier, holdLength); cout << "F: " << f*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}
        if(note == 't') {Beep(t*octavemultiplier, holdLength); cout << "F#: " << t*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}
        if(note == 'g') {Beep(g*octavemultiplier, holdLength); cout << "G: " << g*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}
        if(note == 'y') {Beep(y*octavemultiplier, holdLength); cout << "G#: " << y*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}
        if(note == 'h') {Beep(h*octavemultiplier, holdLength); cout << "A: " << h*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}
        if(note == 'u') {Beep(u*octavemultiplier, holdLength); cout << "A#: " << u*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}
        if(note == 'j') {Beep(j*octavemultiplier, holdLength); cout << "B: " << j*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}
        if(note == 'k') {Beep(k*octavemultiplier, holdLength); cout << "C: " << k*octavemultiplier << " Hz for " << holdLength << "ms" << endl;}




        /// We cannot allow the user to make the holdLength negative
        if(note == '1') {
                if(holdLength != 25){
                holdLength -= 25; cout << "holdLength = " << holdLength << endl;
                }
        }

        /// Add 25 to the holdlength when 2 is pressed
        if(note == '2') {holdLength += 25; cout << "holdLength = " << holdLength << endl;}


        /// Increase or decrease the amount to multiply the Hz by by a factor of 2
        if(note == '3') {octavemultiplier *= 0.5; octave -= 1; cout << "Octave: Middle C +" << octave << endl;}
        if(note == '4') {octavemultiplier *= 2; octave += 1; cout << "Octave: Middle C +" << octave << endl;}

        /// Displays the instructions again if 5 is pressed.
        if(note == '5') {displayInstructions();}

        /// Clears the console if 6 is pressed.
        if(note == '6') {system("cls");}

        /// Reset settings if 0 is pressed.
        if(note == '0') {octavemultiplier = 1; octave = 0; holdLength = 100; cout << "All settings reset!" << endl;}

        /// End the program if P is pressed.
        if(note == 'p') {exit(0);}

    }
    return 0;
}



void displayInstructions(){
    cout << "--------------------XPOTATO'S C++ PIANO--------------------" << endl;
    cout << "Press any key on the home row from A to K to play." << endl;
    cout << "Keys above the home row located in between two home row keys are sharp notes." << endl;
    cout << "Press 1-2 to change hold length of note." << endl;
    cout << "Press 3-4 to change octave multiplier." << endl;
    cout << "Press 5 to display these instructions again." << endl;
    cout << "Press 6 to clear the screen." << endl;
    cout << "Press 0 to reset all settings." << endl;
    cout << "Press P to quit." << endl;
    cout << "-----------------------------------------------------------" << endl;
}
