#ifndef _PROBLEMS_H_
#define _PROBLEMS_H_

#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"
//#include "5.h"
//#include "6.h"
//#include "7.h"
//#include "8.h"
//#include "9.h"
//#include "10.h"
//#include "11.h"
//#include "12.h"
#include "13.h"

#include "15.h"
#include "16.h"

#include "18.h"
#include "19.h"
#include "20.h"
#include "21.h"
#include "22.h"
#include "23.h"
#include "24.h"
#include "25.h"

#include "27.h"

#include "29.h"
#include "30.h"
#include "31.h"
#include "32.h"

#include "39.h"
#include "40.h"

#include "46.h"

#include "52.h"

#include "62.h"
#include "63.h"

#include "67.h"
#include "68.h"

#include "74.h"

#include "76.h"

#include "79.h"

#include "82.h"
#include "83.h"

#include "87.h"

#include "91.h"
#include "92.h"
#include "93.h"

#include "96.h"
#include "97.h"
#include "98.h"
#include "99.h"
#include "100.h"

#include "144.h"

#include "147.h"

#include "152.h"
#include "153.h"

#include "156.h"

#include "160.h"

#include "163.h"

#include "167.h"

static const int fsc_cEasyProblems = 63;
static const int fsc_cModerateProblems = 64;
static const int fsc_cHardProblems = 63;
static const int fsc_cProblems = fsc_cEasyProblems + fsc_cModerateProblems + fsc_cHardProblems;

static CProblem* g_apProblems[fsc_cProblems] =
{
	new CP1(), // 1
	new CP2(), // 2
	new CP3(), // 3
	new CP4(), // 4
	NULL, // 5
	NULL, // 6
	NULL, // 7
	NULL, // 8
	NULL, // 9
	NULL, // 10
	NULL, // 11
	NULL, // 12
	new CP13(), // 13
	NULL, // 14
	new CP15(), // 15
	new CP16(), // 16
	NULL, // 17
	new CP18(), // 18
	new CP19(), // 19
	new CP20(), // 20
	new CP21(), // 21
	new CP22(), // 22
	new CP23(), // 23
	new CP24(), // 24
	new CP25(), // 25
	NULL, // 26
	new CP27(), // 27
	NULL, // 28
	new CP29(), // 29
	new CP30(), // 30
	new CP31(), // 31
	new CP32(), // 32
	NULL, // 33
	NULL, // 34
	NULL, // 35
	NULL, // 36
	NULL, // 37
	NULL, // 38
	new CP39(), // 39
	new CP40(), // 40
	NULL, // 41
	NULL, // 42
	NULL, // 43
	NULL, // 44
	NULL, // 45
	new CP46(), // 46
	NULL, // 47
	NULL, // 48
	NULL, // 49
	NULL, // 50
	NULL, // 51
	new CP52(), // 52
	NULL, // 53
	NULL, // 54
	NULL, // 55
	NULL, // 56
	NULL, // 57
	NULL, // 58
	NULL, // 59
	NULL, // 60
	NULL, // 61
	new CP62(), // 62
	new CP63(), // 63
	NULL, // 64
	NULL, // 65
	NULL, // 66
	new CP67(), // 67
	new CP68(), // 68
	NULL, // 69
	NULL, // 70
	NULL, // 71
	NULL, // 72
	NULL, // 73
	new CP74(), // 74
	NULL, // 75
	new CP76(), // 76
	NULL, // 77
	NULL, // 78
	new CP79(), // 79
	NULL, // 80
	NULL, // 81
	new CP82(), // 82
	new CP83(), // 83
	NULL, // 84
	NULL, // 85
	NULL, // 86
	new CP87(), // 87
	NULL, // 88
	NULL, // 89
	NULL, // 90
	new CP91(), // 91
	new CP92(), // 92
	new CP93(), // 93
	NULL, // 94
	NULL, // 95
	new CP96(), // 96
	new CP97(), // 97
	new CP98(), // 98
	new CP99(), // 99
	new CP100(), // 100
	NULL, // 101
	NULL, // 102
	NULL, // 103
	NULL, // 104
	NULL, // 105
	NULL, // 106
	NULL, // 107
	NULL, // 108
	NULL, // 109
	NULL, // 110
	NULL, // 111
	NULL, // 112
	NULL, // 113
	NULL, // 114
	NULL, // 115
	NULL, // 116
	NULL, // 117
	NULL, // 118
	NULL, // 119
	NULL, // 120
	NULL, // 121
	NULL, // 122
	NULL, // 123
	NULL, // 124
	NULL, // 125
	NULL, // 126
	NULL, // 127
	NULL, // 128
	NULL, // 129
	NULL, // 130
	NULL, // 131
	NULL, // 132
	NULL, // 133
	NULL, // 134
	NULL, // 135
	NULL, // 136
	NULL, // 137
	NULL, // 138
	NULL, // 139
	NULL, // 140
	NULL, // 141
	NULL, // 142
	NULL, // 143
	new CP144(), // 144
	NULL, // 145
	NULL, // 146
	new CP147(), // 147
	NULL, // 148
	NULL, // 149
	NULL, // 150
	NULL, // 151
	new CP152(), // 152
	new CP153(), // 153
	NULL, // 154
	NULL, // 155
	new CP156(), // 156
	NULL, // 157
	NULL, // 158
	NULL, // 159
	new CP160(), // 160
	NULL, // 161
	NULL, // 162
	new CP163(), // 163
	NULL, // 164
	NULL, // 165
	NULL, // 166
	new CP167(), // 167
	NULL, // 168
	NULL, // 169
	NULL, // 170
	NULL, // 171
	NULL, // 172
	NULL, // 173
	NULL, // 174
	NULL, // 175
	NULL, // 176
	NULL, // 177
	NULL, // 178
	NULL, // 179
	NULL, // 180
	NULL, // 181
	NULL, // 182
	NULL, // 183
	NULL, // 184
	NULL, // 185
	NULL, // 186
	NULL, // 187
	NULL, // 188
	NULL, // 189
	NULL, // 190
};

#endif
