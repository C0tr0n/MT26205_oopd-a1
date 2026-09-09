// MT26205 Antrali
#include "basicIO.h"

extern "C" int main() {
    char name[256];
    int age;
    char response[10]; 

    //Name input
    io.outputstring("Enter your name: ");
    io.inputstring(name, 256);

    // Age input
    io.outputstring("Enter your age: ");
    age = io.inputint();

    //Error if invalid age
    if (age <= 0 || age > 150) {
        io.errorstring("\nError: Invalid age. Please enter a valid number between 1 and 150.\n");
        io.terminate();
        return 1;
    }

    // Results
    io.outputstring("\nYou entered:\n  Name: ");
    io.outputstring(name);
    io.outputstring("\n  Age: ");
    io.outputint(age);
    io.outputstring("\n\nIs this correct? (y/n): ");
    io.inputstring(response, 10);
    io.outputstring("\n");

    //Confirm the response
    if (response[0] == 'y' || response[0] == 'Y') {
        io.outputstring("Confirmed!\n");
    } else {
        io.outputstring("Not confirmed.\n");
    }

    io.terminate();
    return 0;
}