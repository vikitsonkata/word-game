#ifndef ANIMATION_H
#define ANIMATION_H

#include <includes.h>
#include "animation_functions.h"

void animation()
{
    for(int i = 0; i <= 100; ++i)
    {
        system("clear");

        switch (i % 3) {
        case 0: cout << colorful("kg"); break;
        case 1: cout << colorful("oy"); break;
        case 2: cout << colorful("br"); break;
        }
        switch (i % 4)
        {
        case 0: cout << "| | |"; break;
        case 1: cout << "/ / /"; break;
        case 2: cout << "- - -"; break;
        case 3: cout << "\\ \\ \\"; break;
        default:break;
        }
        cout << "{" << i << "%} waiting ..." << endl;
        cout << colorful();
        int steps = 10;
        int offset(i % (2 * steps));
        int pos = 0;
        if(i % (2 * steps) > steps )
        {
            offset = steps - offset % steps;
            pos = 2;
        }
        if(i % steps == 0)
            pos = 1;
        if(i % steps == 1)
            pos = 3;
        offset += 5;

        walking_man(offset, pos);
//        robot_motion(offset);
//        square_rotate(i);

        wait_fast(10);
        cout << colorful() << endl;
    }
}

#endif // ANIMATION_H
