#ifndef ANIMATION_FUNCTIONS_H
#define ANIMATION_FUNCTIONS_H

#include "includes.h"

void walking_man(int offset, int pos)
{
    switch (pos % 4) {
    case 0:
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   __" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  (  )" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   ||" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  /||\\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< " / || \\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< " \\ ||  \\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   ||" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   |\\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   | \\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  /  /" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< " /# /" << colorful() << endl;
        break;
    case 1:
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   __" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  (  )" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   ||" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  /||\\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< " / || \\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< " | ||  |" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   ||" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   /\\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  /  \\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  |  |" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< " _|# |_" << colorful() << endl;
        break;
    case 2:
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   __" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  (  )" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   ||" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  /||\\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< " / || \\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "/  || /" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   ||" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   /|" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  / |" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  \\  \\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   \\ #\\" << colorful() << endl;
        break;
    case 3:
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   __" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  (  )" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   ||" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  /||\\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< " / || \\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< " | ||  |" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   ||" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "   /\\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  /  \\" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< "  |  |" << colorful() << endl;
        cout << setfill(' ') << setw(offset) << colorful("o")<< " _| #|_" << colorful() << endl;
        break;
    }
}

void robot_motion(int offset)
{
    cout << setfill(' ') << setw(offset) << colorful("c") << " (^.^)"  << colorful() << endl;
    cout << setfill(' ') << setw(offset) << colorful("c") << "  / \\"  << colorful() << endl;
    cout << setfill(' ') << setw(offset) << colorful("c") << " /( )\\"  << colorful() << endl;
    cout << setfill(' ') << setw(offset) << colorful("c") << "/(   )\\"  << colorful() << endl;
    cout << setfill(' ') << setw(offset) << colorful("c") << "()( )()"  << colorful() << endl;
}

void square_rotate(int pos)
{
    switch (pos % 4) {
    case 0:
        cout << colorful("g") << "   /  \\"  << colorful() << endl;
        cout << colorful("g") << "  /    \\"  << colorful() << endl;
        cout << colorful("g") << " /  .   \\"  << colorful() << endl;
        cout << colorful("g") << "/  .     \\"  << colorful() << endl;
        cout << colorful("g") << "\\     |  /"  << colorful() << endl;
        cout << colorful("g") << " \\   _/ /" << colorful() << endl;
        cout << colorful("g") << "  \\    /" << colorful() << endl;
        cout << colorful("g") << "   \\  /" << colorful() << endl;
        break;
    case 1:
        cout << colorful("g") << " _________"  << colorful() << endl;
        cout << colorful("g") << "|         |"  << colorful() << endl;
        cout << colorful("g") << "|   . .   |"  << colorful() << endl;
        cout << colorful("g") << "|         |"  << colorful() << endl;
        cout << colorful("g") << "|   \\_/   |"  << colorful() << endl;
        cout << colorful("g") << "|_________|" << colorful() << endl;
        break;
    case 2:
        cout << colorful("g") << "   /  \\"  << colorful() << endl;
        cout << colorful("g") << "  /    \\"  << colorful() << endl;
        cout << colorful("g") << " /   .  \\"  << colorful() << endl;
        cout << colorful("g") << "/     .  \\"  << colorful() << endl;
        cout << colorful("g") << "\\  |     /"  << colorful() << endl;
        cout << colorful("g") << " \\ \\_   /" << colorful() << endl;
        cout << colorful("g") << "  \\    /" << colorful() << endl;
        cout << colorful("g") << "   \\  /" << colorful() << endl;
        break;
    case 3:
        cout << colorful("g") << " _________"  << colorful() << endl;
        cout << colorful("g") << "|         |"  << colorful() << endl;
        cout << colorful("g") << "|   . .   |"  << colorful() << endl;
        cout << colorful("g") << "|         |"  << colorful() << endl;
        cout << colorful("g") << "|   \\_/   |"  << colorful() << endl;
        cout << colorful("g") << "|_________|" << colorful() << endl;
        cout << colorful("g") << "         /\\______________"  << colorful() << endl;
        cout << colorful("g") << "         |                |"  << colorful() << endl;
        cout << colorful("g") << "         |                |"  << colorful() << endl;
        cout << colorful("g") << "         | Hello, It's me |"  << colorful() << endl;
        cout << colorful("g") << "         |                |"  << colorful() << endl;
        cout << colorful("g") << "         |________________|"  << colorful() << endl;
        break;
    }
}

#endif // ANIMATION_FUNCTIONS_H
