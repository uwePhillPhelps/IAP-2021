//
//  IAP.cpp
//
//  Example of a program with repetitive copy-pasted lines which
//  uses the first four slider values as a simple step sequencer.
//
//  The program is functional, but could be greatly simplified by
//  using arrays instead of copy-pasted lines.
//

#include "IAP.h"
#include <iostream>

void IAP::run ()
{
    while (true)
    {
        synth.playNote(slider1, 127);
        aserveSleep(300);
        synth.playNote(slider2, 127);
        aserveSleep(300);
        synth.playNote(slider3, 127);
        aserveSleep(300);
        synth.playNote(slider4, 127);
        aserveSleep(300);
    }
}

void IAP::callbackCCValueChanged (int cc, int value)
{
    if (cc >= 41 && cc <= 44)
    {
        switch (cc)
        {
            case 41:
                slider1 = value;
                break;
            case 42:
                slider2 = value;
                break;
            case 43:
                slider3 = value;
                break;
            case 44:
                slider4 = value;
                break;
            default:
                break;
        }
    }
}
