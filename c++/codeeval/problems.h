#ifndef _PROBLEMS_H_
#define _PROBLEMS_H_

#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"
#include "5.h"
#include "6.h"
#include "7.h"
#include "8.h"
#include "9.h"
#include "10.h"
#include "11.h"
#include "12.h"
#include "13.h"
#include "14.h"
#include "15.h"
#include "16.h"
#include "17.h"
#include "18.h"
#include "19.h"
#include "20.h"
#include "21.h"
#include "22.h"
#include "23.h"
#include "24.h"
#include "25.h"
#include "26.h"
#include "27.h"
#include "28.h"
#include "29.h"
#include "30.h"
#include "31.h"
#include "32.h"

#include "34.h"

#include "37.h"

#include "39.h"
#include "40.h"
#include "41.h"

#include "43.h"
#include "44.h"
#include "45.h"
#include "46.h"
#include "47.h"

#include "50.h"

#include "52.h"

#include "54.h"

#include "59.h"

#include "62.h"
#include "63.h"

#include "66.h"
#include "67.h"
#include "68.h"

#include "70.h"
#include "71.h"

#include "73.h"
#include "74.h"
#include "75.h"
#include "76.h"

#include "78.h"
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
#include "101.h"
#include "102.h"
#include "103.h"
#include "104.h"

#include "106.h"
#include "107.h"
#include "108.h"

#include "110.h"
#include "111.h"
#include "112.h"
#include "113.h"

#include "115.h"
#include "116.h"

#include "121.h"
#include "122.h"

#include "124.h"

#include "128.h"

#include "131.h"
#include "132.h"

#include "136.h"

#include "139.h"
#include "140.h"

#include "144.h"

#include "146.h"
#include "147.h"
#include "148.h"
#include "149.h"

#include "152.h"
#include "153.h"

#include "156.h"

#include "158.h"

#include "160.h"
#include "161.h"

#include "163.h"

#include "166.h"
#include "167.h"

#include "170.h"

#include "172.h"
#include "173.h"
#include "174.h"

#include "178.h"
#include "179.h"
#include "180.h"
#include "181.h"

#include "183.h"
#include "184.h"

#include "186.h"

#include "189.h"

#include "191.h"
#include "192.h"
#include "193.h"

#include "196.h"
#include "197.h"

#include "199.h"

#include "202.h"
#include "203.h"

#include "205.h"

#include "208.h"

#include "211.h"

#include "214.h"

#include "217.h"

#include "220.h"

#include "222.h"

#include "225.h"

static const int fsc_cEasyProblems = 76;
static const int fsc_cModerateProblems = 75;
static const int fsc_cHardProblems = 74;
static const int fsc_cProblems = fsc_cEasyProblems + fsc_cModerateProblems + fsc_cHardProblems;

static CProblem* g_apProblems[fsc_cProblems] =
{
	new CP1(), // 1
	new CP2(), // 2
	new CP3(), // 3
	new CP4(), // 4
	new CP5(), // 5
	new CP6(), // 6
	new CP7(), // 7
	new CP8(), // 8
	new CP9(), // 9
	new CP10(), // 10
	new CP11(), // 11
	new CP12(), // 12
	new CP13(), // 13
	new CP14(), // 14
	new CP15(), // 15
	new CP16(), // 16
	new CP17(), // 17
	new CP18(), // 18
	new CP19(), // 19
	new CP20(), // 20
	new CP21(), // 21
	new CP22(), // 22
	new CP23(), // 23
	new CP24(), // 24
	new CP25(), // 25
	new CP26(), // 26
	new CP27(), // 27
	new CP28(), // 28
	new CP29(), // 29
	new CP30(), // 30
	new CP31(), // 31
	new CP32(), // 32
	NULL, // 33
	new CP34(), // 34
	NULL, // 35
	NULL, // 36
	new CP37(), // 37
	NULL, // 38
	new CP39(), // 39
	new CP40(), // 40
	new CP41(), // 41
	NULL, // 42
	new CP43(), // 43
	new CP44(), // 44
	new CP45(), // 45
	new CP46(), // 46
	new CP47(), // 47
	NULL, // 48
	NULL, // 49
	new CP50(), // 50
	NULL, // 51
	new CP52(), // 52
	NULL, // 53
	new CP54(), // 54
	NULL, // 55
	NULL, // 56
	NULL, // 57
	NULL, // 58
	new CP59(), // 59
	NULL, // 60
	NULL, // 61
	new CP62(), // 62
	new CP63(), // 63
	NULL, // 64
	NULL, // 65
	new CP66(), // 66
	new CP67(), // 67
	new CP68(), // 68
	NULL, // 69
	new CP70(), // 70
	new CP71(), // 71
	NULL, // 72
	new CP73(), // 73
	new CP74(), // 74
	new CP75(), // 75
	new CP76(), // 76
	NULL, // 77
	new CP78(), // 78
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
	new CP101(), // 101
	new CP102(), // 102
	new CP103(), // 103
	new CP104(), // 104
	NULL, // 105
	new CP106(), // 106
	new CP107(), // 107
	new CP108(), // 108
	NULL, // 109
	new CP110(), // 110
	new CP111(), // 111
	new CP112(), // 112
	new CP113(), // 113
	NULL, // 114
	new CP115(), // 115
	new CP116(), // 116
	NULL, // 117
	NULL, // 118
	NULL, // 119
	NULL, // 120
	new CP121(), // 121
	new CP122(), // 122
	NULL, // 123
	new CP124(), // 124
	NULL, // 125
	NULL, // 126
	NULL, // 127
	new CP128(), // 128
	NULL, // 129
	NULL, // 130
	new CP131(), // 131
	new CP132(), // 132
	NULL, // 133
	NULL, // 134
	NULL, // 135
	new CP136(), // 136
	NULL, // 137
	NULL, // 138
	new CP139(), // 139
	new CP140(), // 140
	NULL, // 141
	NULL, // 142
	NULL, // 143
	new CP144(), // 144
	NULL, // 145
	new CP146(), // 146
	new CP147(), // 147
	new CP148(), // 148
	new CP149(), // 149
	NULL, // 150
	NULL, // 151
	new CP152(), // 152
	new CP153(), // 153
	NULL, // 154
	NULL, // 155
	new CP156(), // 156
	NULL, // 157
	new CP158(), // 158
	NULL, // 159
	new CP160(), // 160
	new CP161(), // 161
	NULL, // 162
	new CP163(), // 163
	NULL, // 164
	NULL, // 165
	new CP166(), // 166
	new CP167(), // 167
	NULL, // 168
	NULL, // 169
	new CP170(), // 170
	NULL, // 171
	new CP172(), // 172
	new CP173(), // 173
	new CP174(), // 174
	NULL, // 175
	NULL, // 176
	NULL, // 177
	new CP178(), // 178
	new CP179(), // 179
	new CP180(), // 180
	new CP181(), // 181
	NULL, // 182
	new CP183(), // 183
	new CP184(), // 184
	NULL, // 185
	new CP186(), // 186
	NULL, // 187
	NULL, // 188
	new CP189(), // 189
	NULL, // 190
	new CP191(), // 191
	new CP192(), // 192
	new CP193(), // 193
	NULL, // 194
	NULL, // 195
	new CP196(), // 196
	new CP197(), // 197
	NULL, // 198
	new CP199(), // 199
	NULL, // 200
	NULL, // 201
	new CP202(), // 202
	new CP203(), // 203
	NULL, // 204
	new CP205(), // 205
	NULL, // 206
	NULL, // 207
	new CP208(), // 208
	NULL, // 209
	NULL, // 210
	new CP211(), // 211
	NULL, // 212
	NULL, // 213
	new CP214(), // 214
	NULL, // 215
	NULL, // 216
	new CP217(), // 217
	NULL, // 218
	NULL, // 219
	new CP220(), // 220
	NULL, // 221
	new CP222(), // 222
	NULL, // 223
	NULL, // 224
	new CP225(), // 225
};

#endif
