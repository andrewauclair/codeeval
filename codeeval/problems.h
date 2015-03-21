#ifndef _PROBLEMS_H_
#define _PROBLEMS_H_

#include "2.h"
#include "13.h"
#include "16.h"
#include "27.h"
#include "52.h"
#include "74.h"
#include "76.h"
#include "144.h"
#include "147.h"
#include "152.h"
#include "153.h"
#include "156.h"
#include "160.h"
#include "163.h"

static const int fsc_cEasyProblems = 54;
static const int fsc_cModerateProblems = 54;
static const int fsc_cHardProblems = 55;
static const int fsc_cProblems = fsc_cEasyProblems + fsc_cModerateProblems + fsc_cHardProblems;

static CProblem* g_apProblems[fsc_cProblems] =
{
	NULL, // 1
	new CP2(), // 2
	NULL, // 3
	NULL, // 4
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
	NULL, // 15
	new CP16(), // 16
	NULL, // 17
	NULL, // 18
	NULL, // 19
	NULL, // 20
	NULL, // 21
	NULL, // 22
	NULL, // 23
	NULL, // 24
	NULL, // 25
	NULL, // 26
	new CP27(), // 27
	NULL, // 28
	NULL, // 29
	NULL, // 30
	NULL, // 31
	NULL, // 32
	NULL, // 33
	NULL, // 34
	NULL, // 35
	NULL, // 36
	NULL, // 37
	NULL, // 38
	NULL, // 39
	NULL, // 40
	NULL, // 41
	NULL, // 42
	NULL, // 43
	NULL, // 44
	NULL, // 45
	NULL, // 46
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
	NULL, // 62
	NULL, // 63
	NULL, // 64
	NULL, // 65
	NULL, // 66
	NULL, // 67
	NULL, // 68
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
	NULL, // 79
	NULL, // 80
	NULL, // 81
	NULL, // 82
	NULL, // 83
	NULL, // 84
	NULL, // 85
	NULL, // 86
	NULL, // 87
	NULL, // 88
	NULL, // 89
	NULL, // 90
	NULL, // 91
	NULL, // 92
	NULL, // 93
	NULL, // 94
	NULL, // 95
	NULL, // 96
	NULL, // 97
	NULL, // 98
	NULL, // 99
	NULL, // 100
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
	//NULL, // 164
	//NULL, // 165
	//NULL, // 166
	//NULL, // 167
	//NULL, // 168
	//NULL, // 169
	//NULL, // 170
};

#endif
