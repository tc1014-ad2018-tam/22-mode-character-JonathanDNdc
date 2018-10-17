/*
 * This program receives a string and it counts which character was repeated the most.
 *
 * Author: A01411277@itesm.mx
 * Email: A01411277@itesm.mx
 * Date: 17/10/18
 */

#include <stdio.h> //Standard input/output header.
#include <string.h> //Library where strlen is found.

//Function that returns the most repeated character.
char Mode(char string[]) {
    //Declaration of variables.
    char mode = string[0];
    int count = 0;
    int counttemp;

    //Each character is compared with every character after itself.
    for (int i = 0; i < strlen(string); i++) {
        counttemp = 0;
        for (int j = i + 1; j < strlen(string); j++) {
            //The counttemp variable is incremented for each time the character
            // is repeated without counting spaces.
            if (string[i] == string[j] && string[i] != ' ') {
                counttemp++;
            }
        }
        //If the current character is repeated more times than
        // the previous one, we change character
        if (counttemp > count) {
            count = counttemp;
            mode = string[i];
        }
    }
    return mode;
}

int main() {
    //Declaration of variable.
    char string[100];

    printf("Enter your text:");
    fgets(string, sizeof(string), stdin);

    printf("The most repeated character is: %c", Mode(string));

    return 0;
}