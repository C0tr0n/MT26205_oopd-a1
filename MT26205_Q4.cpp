// MT26205 Antrali
#include "basicIO.h"

const int MAX_NAMES = 100;
const int MAX_NAME_LEN = 255;

extern "C" int main() {
    int count;
    char names[MAX_NAMES][MAX_NAME_LEN + 1];  

    io.outputstring("How many names do you want to enter? (1-100): ");
    count = io.inputint();

    if (count <= 0 || count > MAX_NAMES) {
        io.errorstring("\nError: Invalid number. Must be between 1 and 100.\n");
        io.terminate();
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        io.outputstring("Enter name ");
        io.outputint(i + 1);
        io.outputstring(": ");
        io.inputstring(names[i], MAX_NAME_LEN + 1);
    }

    io.outputstring("\n--- You Entered ---\n");
    for (int i = 0; i < count; ++i) {
        io.outputint(i + 1);
        io.outputstring(". ");
        io.outputstring(names[i]);
        io.outputstring("\n");
    }

    io.outputstring("\nFinal list accepted.\n");
    io.terminate();
    return 0;
}