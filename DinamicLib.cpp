
#include "pch.h"
#include "Header.h"

extern "C" __declspec(dllexport) bool SearchCharacters(const char* input, const char* characters)
{
    size_t inputLength = strlen(input);
    size_t charactersLength = strlen(characters);

    for (size_t i = 0; i < charactersLength; i++) {
        bool found = false;
        for (size_t j = 0; j < inputLength; j++) {
            if (characters[i] == input[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }

    return true;
}