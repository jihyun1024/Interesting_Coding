#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Basic data types, 1 character
#define O int
#define o NULL
#define I double
#define A void
#define a char

// Operators, 2 ~ 3 characters
#define oa +	// arithmetic operator (산술 연산자)
#define ii -
#define ia * 
#define aa /
#define OO %
#define Oi =	// comparison operator (비교 연산자)
#define II ==
#define IA !=
#define AA !
#define Oo <
#define Ii >
#define Ia <=
#define Aa >=
#define aA &
#define oii &&
#define iia ||
#define OII ++	// increment operator (증감 연산자)
#define IIA --
#define OI {	// parentheses (괄호, 중괄호)
#define AI }
#define oi (
#define ai )
#define iA ^	// bit operator (비트 연산자)
#define Ai |
#define Aii ~
#define Oii <<
#define oII >>

// Keywords (Control, Loop, basic functions, etc.), 4 ~ characters
#define OIIA if
#define oiia else
#define OiiA while
#define oIIa for
#define Oiia return
#define OIia struct
#define OIIa switch
#define oiia_oiia printf
#define OIIA_OIIA scanf
#define Oiia_oiia typedef
#define OII_AII main