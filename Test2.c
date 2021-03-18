#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "Cards.h"

const char* card_name(const card_t card)
{
    static char  buffer[128];
    // Switch is set to evaluate integer constants (the card numbers and colors in this case) through case labels. The break terminates each loop so that they don't interfere.
    switch (RANK(card)) {
    case RANK_CERO:          strcpy_s(buffer, "zero");          break;
    case RANK_UNO:            strcpy_s(buffer, "uno");            break;
    case RANK_DOS:          strcpy_s(buffer, "dos");          break;
    case RANK_TRES:          strcpy_s(buffer, "tres");          break;
    case RANK_CUATRO:        strcpy_s(buffer, "cuatro");        break;
    case RANK_CINCO:         strcpy_s(buffer, "cinco");         break;
    case RANK_SEIS:          strcpy_s(buffer, "seis");          break;
    case RANK_SIETE:          strcpy_s(buffer, "siete");          break;
    case RANK_OCHO:          strcpy_s(buffer, "ocho");          break;
    case RANK_NUEVE:          strcpy_s(buffer, "nueve");          break;
    case RANK_SKIP:         strcpy_s(buffer, "skip");         break;
    case RANK_TWO:    strcpy_s(buffer, "two");    break;
    case RANK_REVERSAL:      strcpy_s(buffer, "reversal");      break;
    case RANK_RAINBOW:       strcpy_s(buffer, "rainbow");       break;
    case RANK_RAINBOWFOUR: strcpy_s(buffer, "rainbowfour"); break;
    default:                 strcpy_s(buffer, "?");             break;
    }

    switch (COLOR(card)) {
    case COLOR_RED: strcat_s(buffer, " red"); break;
    case COLOR_GREEN:    strcat_s(buffer, " green");    break;
    case COLOR_YELLOW:  strcat_s(buffer, " yellow");  break;
    case COLOR_BLUE:     strcat_s(buffer, " blue");     break;
    }

    return (const char*)buffer;
}