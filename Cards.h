// Cards will be coded and defined in the header file
#ifndef Cards_h
#define Cards_h


typedef unsigned char card_t;
// numbers listed next to definitions store them into memory making them pointers

#define COLOR_MASK 112U

#define COLOR_NONE 0U

#define COLOR_RED 16U

#define COLOR_BLUE 32U

#define COLOR_GREEN 64U

#define COLOR_YELLOW 128U

#define RANK_MASK 15U

#define RANK_CERO 0U

#define RANK_UNO 1U

#define RANK_DOS 2U

#define RANK_TRES 3U

#define RANK_CUATRO 4U

#define RANK_CINCO 5U

#define RANK_SEIS 6U

#define RANK_SIETE 7U

#define RANK_OCHO 8U

#define RANK_NUEVE 9U

#define RANK_SKIP 10U

#define RANK_TWO 11U

#define RANK_REVERSAL 12U

#define RANK_RAINBOW 13U

#define RANK_RAINBOWFOUR 14U


#define   RANK(card)   ((card) & RANK_MASK)
#define   COLOR(card)  ((card) & COLOR_MASK)

//card_t associates with the uno deck and number
extern const card_t uno[108];

extern void shuffle(card_t*, size_t);







#endif
