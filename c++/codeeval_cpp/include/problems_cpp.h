#pragma once

#include "1cpp.h"
#include "2cpp.h"
#include "3cpp.h"
#include "4cpp.h"
#include "5cpp.h"
#include "6cpp.h"
#include "7cpp.h"
#include "8cpp.h"
#include "9cpp.h"
#include "10cpp.h"
#include "11cpp.h"
#include "12cpp.h"
#include "13cpp.h"
#include "14cpp.h"
#include "15cpp.h"
#include "16cpp.h"
#include "17cpp.h"
#include "18cpp.h"
#include "19cpp.h"
#include "20cpp.h"
#include "21cpp.h"
#include "22cpp.h"
#include "23cpp.h"
#include "24cpp.h"
#include "25cpp.h"
#include "26cpp.h"
#include "27cpp.h"
#include "28cpp.h"
#include "29cpp.h"
#include "30cpp.h"
#include "31cpp.h"
#include "32cpp.h"

#include "34cpp.h"

#include "37cpp.h"

#include "39cpp.h"
#include "40cpp.h"
#include "41cpp.h"

#include "43cpp.h"
#include "44cpp.h"
#include "45cpp.h"
#include "46cpp.h"
#include "47cpp.h"

#include "50cpp.h"

#include "52cpp.h"

#include "54cpp.h"

#include "57cpp.h"

#include "59cpp.h"

#include "62cpp.h"
#include "63cpp.h"

#include "66cpp.h"
#include "67cpp.h"
#include "68cpp.h"

#include "70cpp.h"
#include "71cpp.h"

#include "73cpp.h"
#include "74cpp.h"
#include "75cpp.h"
#include "76cpp.h"

#include "78cpp.h"
#include "79cpp.h"

#include "82cpp.h"
#include "83cpp.h"

#include "87cpp.h"

#include "91cpp.h"
#include "92cpp.h"
#include "93cpp.h"

#include "96cpp.h"
#include "97cpp.h"
#include "98cpp.h"
#include "99cpp.h"
#include "100cpp.h"
#include "101cpp.h"
#include "102cpp.h"
#include "103cpp.h"
#include "104cpp.h"

#include "106cpp.h"
#include "107cpp.h"
#include "108cpp.h"

#include "110cpp.h"
#include "111cpp.h"
#include "112cpp.h"
#include "113cpp.h"

#include "115cpp.h"
#include "116cpp.h"

#include "121cpp.h"
#include "122cpp.h"

#include "124cpp.h"

#include "128cpp.h"

#include "131cpp.h"
#include "132cpp.h"

#include "136cpp.h"

#include "139cpp.h"
#include "140cpp.h"

#include "144cpp.h"

#include "146cpp.h"
#include "147cpp.h"
#include "148cpp.h"
#include "149cpp.h"

#include "152cpp.h"
#include "153cpp.h"

#include "156cpp.h"

#include "158cpp.h"

#include "160cpp.h"
#include "161cpp.h"

#include "163cpp.h"

#include "166cpp.h"
#include "167cpp.h"

#include "170cpp.h"

#include "172cpp.h"
#include "173cpp.h"
#include "174cpp.h"

#include "178cpp.h"
#include "179cpp.h"
#include "180cpp.h"
#include "181cpp.h"

#include "183cpp.h"
#include "184cpp.h"

#include "186cpp.h"

#include "189cpp.h"

#include "191cpp.h"
#include "192cpp.h"
#include "193cpp.h"

#include "196cpp.h"
#include "197cpp.h"

#include "199cpp.h"

#include "202cpp.h"
#include "203cpp.h"

#include "205cpp.h"

#include "208cpp.h"

#include "211cpp.h"

#include "214cpp.h"

#include "217cpp.h"

#include "220cpp.h"

#include "222cpp.h"

#include "225cpp.h"

#include "227cpp.h"

#include "230cpp.h"

#include "232cpp.h"

#include "235cpp.h"

static const int fsc_cEasyProblems = 80;
static const int fsc_cModerateProblems = 80;
static const int fsc_cHardProblems = 76;
static const int fsc_Croblems = fsc_cEasyProblems + fsc_cModerateProblems + fsc_cHardProblems;

static CChallengeInfo g_aProblemInfo[] =
{
	CChallengeInfo("Fizz Buzz", "https://www.codeeval.com/browse/1/", 1, eDiff_Easy),
	CChallengeInfo("Longest Lines", "https://www.codeeval.com/browse/2/", 2, eDiff_Moderate),
	CChallengeInfo("Prime Palindrome", "https://www.codeeval.com/browse/3/", 3, eDiff_Easy),
	CChallengeInfo("Sum Of Primes", "https://www.codeeval.com/browse/4/", 4, eDiff_Easy),
	CChallengeInfo("Detecting Cycles", "https://www.codeeval.com/browse/5/", 5, eDiff_Moderate),
	CChallengeInfo("Longest Common Subsequence", "https://www.codeeval.com/browse/6/", 6, eDiff_Hard),
	CChallengeInfo("Prefix Expressions", "https://www.codeeval.com/browse/7/", 7, eDiff_Hard),
	CChallengeInfo("Reverse Words", "https://www.codeeval.com/browse/8/", 8, eDiff_Easy),
	CChallengeInfo("Stack Implementation", "https://www.codeeval.com/browse/9/", 9, eDiff_Moderate),
	CChallengeInfo("Mth To Last Element", "https://www.codeeval.com/browse/10/", 10, eDiff_Moderate),
	CChallengeInfo("Lowest Common Ancestor", "https://www.codeeval.com/browse/11/", 11, eDiff_Moderate),
	CChallengeInfo("First Non-Repeated Character", "https://www.codeeval.com/browse/12/", 12, eDiff_Moderate),
	CChallengeInfo("Remove Characters", "https://www.codeeval.com/browse/13/", 13, eDiff_Moderate),
	CChallengeInfo("String Permutations", "https://www.codeeval.com/browse/14/", 14, eDiff_Hard),
	CChallengeInfo("Endianness", "https://www.codeeval.com/browse/15/", 15, eDiff_Moderate),
	CChallengeInfo("Number Of Ones", "https://www.codeeval.com/browse/16/", 16, eDiff_Moderate),
	CChallengeInfo("Sum Of Integers", "https://www.codeeval.com/browse/17/", 17, eDiff_Moderate),
	CChallengeInfo("Multiples Of A Number", "https://www.codeeval.com/browse/18/", 18, eDiff_Easy),
	CChallengeInfo("Bit Positions", "https://www.codeeval.com/browse/19/", 19, eDiff_Easy),
	CChallengeInfo("Lowercase", "https://www.codeeval.com/browse/20/", 20, eDiff_Easy),
	CChallengeInfo("Sum Of Digits", "https://www.codeeval.com/browse/21/", 21, eDiff_Easy),
	CChallengeInfo("Fibonacci Series", "https://www.codeeval.com/browse/22/", 22, eDiff_Easy),
	CChallengeInfo("Multiplication Tables", "https://www.codeeval.com/browse/23/", 23, eDiff_Easy),
	CChallengeInfo("Sum Of Integers From File", "https://www.codeeval.com/browse/24/", 24, eDiff_Easy),
	CChallengeInfo("Odd Numbers", "https://www.codeeval.com/browse/25/", 25, eDiff_Easy),
	CChallengeInfo("File Size", "https://www.codeeval.com/browse/26/", 26, eDiff_Easy),
	CChallengeInfo("Decimal To Binary", "https://www.codeeval.com/browse/27/", 27, eDiff_Moderate),
	CChallengeInfo("String Searching", "https://www.codeeval.com/browse/28/", 28, eDiff_Hard),
	CChallengeInfo("Unique Elements", "https://www.codeeval.com/browse/29/", 29, eDiff_Easy),
	CChallengeInfo("Set Intersection", "https://www.codeeval.com/browse/30/", 30, eDiff_Easy),
	CChallengeInfo("Rightmost Char", "https://www.codeeval.com/browse/31/", 31, eDiff_Easy),
	CChallengeInfo("Trailing String", "https://www.codeeval.com/browse/32/", 32, eDiff_Moderate),
	CChallengeInfo("Double Squares", "https://www.codeeval.com/browse/33/", 33, eDiff_Moderate),
	CChallengeInfo("Number Pairs", "https://www.codeeval.com/browse/34/", 34, eDiff_Moderate),
	CChallengeInfo("Email Validation", "https://www.codeeval.com/browse/35/", 35, eDiff_Moderate),
	CChallengeInfo("Message Decoding", "https://www.codeeval.com/browse/36/", 36, eDiff_Hard),
	CChallengeInfo("Pangrams", "https://www.codeeval.com/browse/37/", 37, eDiff_Moderate),
	CChallengeInfo("String List", "https://www.codeeval.com/browse/38/", 38, eDiff_Hard),
	CChallengeInfo("Happy Numbers", "https://www.codeeval.com/browse/39/", 39, eDiff_Easy),
	CChallengeInfo("Self Describing Numbers", "https://www.codeeval.com/browse/40/", 40, eDiff_Easy),
	CChallengeInfo("Array Absurdity", "https://www.codeeval.com/browse/41/", 41, eDiff_Moderate),
	CChallengeInfo("Ugly Numbers", "https://www.codeeval.com/browse/42/", 42, eDiff_Hard),
	CChallengeInfo("Joly Jumpers", "https://www.codeeval.com/browse/43/", 43, eDiff_Moderate),
	CChallengeInfo("Following Integer", "https://www.codeeval.com/browse/44/", 44, eDiff_Hard),
	CChallengeInfo("Reverse And Add", "https://www.codeeval.com/browse/45/", 45, eDiff_Moderate),
	CChallengeInfo("Prime Numbers", "https://www.codeeval.com/browse/46/", 46, eDiff_Moderate),
	CChallengeInfo("Palindromic Ranges", "https://www.codeeval.com/browse/47/", 47, eDiff_Hard),
	CChallengeInfo("Discount Offers", "https://www.codeeval.com/browse/48/", 48, eDiff_Hard),
	CChallengeInfo("Peak Traffic", "https://www.codeeval.com/browse/49/", 49, eDiff_Hard),
	CChallengeInfo("String Substitution", "https://www.codeeval.com/browse/50/", 50, eDiff_Hard),
	CChallengeInfo("Closest Pair", "https://www.codeeval.com/browse/51/", 51, eDiff_Hard),
	CChallengeInfo("Text Dollar", "https://www.codeeval.com/browse/52/", 52, eDiff_Hard),
	CChallengeInfo("Repeated Substring", "https://www.codeeval.com/browse/53/", 53, eDiff_Hard),
	CChallengeInfo("Cash Register", "https://www.codeeval.com/browse/54/", 54, eDiff_Moderate),
	CChallengeInfo("Type Ahead", "https://www.codeeval.com/browse/55/", 55, eDiff_Hard),
	CChallengeInfo("Robot Movements", "https://www.codeeval.com/browse/56/", 56, eDiff_Hard),
	CChallengeInfo("Spiral Printing", "https://www.codeeval.com/browse/57/", 57, eDiff_Hard),
	CChallengeInfo("Levenshtein Distance", "https://www.codeeval.com/browse/58/", 58, eDiff_Hard),
	CChallengeInfo("Telephone Words", "https://www.codeeval.com/browse/59/", 59, eDiff_Hard),
	CChallengeInfo("Grid Walk", "https://www.codeeval.com/browse/60/", 60, eDiff_Hard),
	CChallengeInfo("Decryption", "https://www.codeeval.com/browse/61/", 61, eDiff_Hard),
	CChallengeInfo("N Mod M", "https://www.codeeval.com/browse/62/", 62, eDiff_Easy),
	CChallengeInfo("Counting Primes", "https://www.codeeval.com/browse/63/", 63, eDiff_Moderate),
	CChallengeInfo("Climbing Stairs", "https://www.codeeval.com/browse/64/", 64, eDiff_Hard),
	CChallengeInfo("Word Search", "https://www.codeeval.com/browse/65/", 65, eDiff_Hard),
	CChallengeInfo("Pascals Triangle", "https://www.codeeval.com/browse/66/", 66, eDiff_Moderate),
	CChallengeInfo("Hex To Decimal", "https://www.codeeval.com/browse/67/", 67, eDiff_Easy),
	CChallengeInfo("Valid Parentheses", "https://www.codeeval.com/browse/68/", 68, eDiff_Moderate),
	CChallengeInfo("Distinct Subsequences", "https://www.codeeval.com/browse/69/", 69, eDiff_Hard),
	CChallengeInfo("Overlapping Rectangles", "https://www.codeeval.com/browse/70/", 70, eDiff_Moderate),
	CChallengeInfo("Reverse Groups", "https://www.codeeval.com/browse/71/", 71, eDiff_Moderate),
	CChallengeInfo("Minimum Path Sum", "https://www.codeeval.com/browse/72/", 72, eDiff_Hard),
	CChallengeInfo("Decode Numbers", "https://www.codeeval.com/browse/73/", 73, eDiff_Moderate),
	CChallengeInfo("Minimum Coins", "https://www.codeeval.com/browse/74/", 74, eDiff_Moderate),
	CChallengeInfo("Flavius Josephus", "https://www.codeeval.com/browse/75/", 75, eDiff_Moderate),
	CChallengeInfo("String Rotation", "https://www.codeeval.com/browse/76/", 76, eDiff_Moderate),
	CChallengeInfo("Da Vyncy", "https://www.codeeval.com/browse/77/", 77, eDiff_Hard),
	CChallengeInfo("Sudoku", "https://www.codeeval.com/browse/78/", 78, eDiff_Moderate),
	CChallengeInfo("Minesweeper", "https://www.codeeval.com/browse/79/", 79, eDiff_Hard),
	CChallengeInfo("URI Comparison", "https://www.codeeval.com/browse/80/", 80, eDiff_Moderate),
	CChallengeInfo("Sum To Zero", "https://www.codeeval.com/browse/81/", 81, eDiff_Moderate),
	CChallengeInfo("Armstrong Numbers", "https://www.codeeval.com/browse/82/", 82, eDiff_Easy),
	CChallengeInfo("Beautiful Strings", "https://www.codeeval.com/browse/83/", 83, eDiff_Easy),
	CChallengeInfo("Balanced Smileys", "https://www.codeeval.com/browse/84/", 84, eDiff_Moderate),
	CChallengeInfo("Find Min", "https://www.codeeval.com/browse/85/", 85, eDiff_Hard),
	CChallengeInfo("Poker Hands", "https://www.codeeval.com/browse/86/", 86, eDiff_Hard),
	CChallengeInfo("Query Board", "https://www.codeeval.com/browse/87/", 87, eDiff_Easy),
	CChallengeInfo("Juggle Fest", "https://www.codeeval.com/browse/88/", 88, eDiff_Hard),
	CChallengeInfo("Pass Triangle", "https://www.codeeval.com/browse/89/", 89, eDiff_Moderate),
	CChallengeInfo("Commuting Engineer", "https://www.codeeval.com/browse/90/", 90, eDiff_Hard),
	CChallengeInfo("Simple Sorting", "https://www.codeeval.com/browse/91/", 91, eDiff_Easy),
	CChallengeInfo("Penultimate Word", "https://www.codeeval.com/browse/92/", 92, eDiff_Easy),
	CChallengeInfo("Capitalize Words", "https://www.codeeval.com/browse/93/", 93, eDiff_Easy),
	CChallengeInfo("Simple Calculator", "https://www.codeeval.com/browse/94/", 94, eDiff_Moderate),
	CChallengeInfo("Advanced Calculator", "https://www.codeeval.com/browse/95/", 95, eDiff_Hard),
	CChallengeInfo("Swap Case", "https://www.codeeval.com/browse/96/", 96, eDiff_Easy),
	CChallengeInfo("Find A Writer", "https://www.codeeval.com/browse/97/", 97, eDiff_Easy),
	CChallengeInfo("Point In Circle", "https://www.codeeval.com/browse/98/", 98, eDiff_Moderate),
	CChallengeInfo("Calculate Distance", "https://www.codeeval.com/browse/99/", 99, eDiff_Easy),
	CChallengeInfo("Even Numbers", "https://www.codeeval.com/browse/100/", 100, eDiff_Easy),
	CChallengeInfo("Find A Square", "https://www.codeeval.com/browse/101/", 101, eDiff_Moderate),
	CChallengeInfo("JSON Menu IDs", "https://www.codeeval.com/browse/102/", 102, eDiff_Easy),
	CChallengeInfo("Lowest Unique Number", "https://www.codeeval.com/browse/103/", 103, eDiff_Easy),
	CChallengeInfo("Word To Digit", "https://www.codeeval.com/browse/104/", 104, eDiff_Easy),
	CChallengeInfo("Largest Sub-Matrix", "https://www.codeeval.com/browse/105/", 105, eDiff_Hard),
	CChallengeInfo("Roman Numerals", "https://www.codeeval.com/browse/106/", 106, eDiff_Easy),
	CChallengeInfo("Shortest Repetition", "https://www.codeeval.com/browse/107/", 107, eDiff_Easy),
	CChallengeInfo("Computer Terminal", "https://www.codeeval.com/browse/108/", 108, eDiff_Hard),
	CChallengeInfo("Bay Bridges", "https://www.codeeval.com/browse/109/", 109, eDiff_Hard),
	CChallengeInfo("Text To Number", "https://www.codeeval.com/browse/110/", 110, eDiff_Hard),
	CChallengeInfo("Longest Word", "https://www.codeeval.com/browse/111/", 111, eDiff_Easy),
	CChallengeInfo("Swap Elements", "https://www.codeeval.com/browse/112/", 112, eDiff_Easy),
	CChallengeInfo("Multiply Lists", "https://www.codeeval.com/browse/113/", 113, eDiff_Easy),
	CChallengeInfo("Package Problem", "https://www.codeeval.com/browse/114/", 114, eDiff_Hard),
	CChallengeInfo("Mixed Content", "https://www.codeeval.com/browse/115/", 115, eDiff_Easy),
	CChallengeInfo("Morse Code", "https://www.codeeval.com/browse/116/", 116, eDiff_Easy),
	CChallengeInfo("A Pile Of Bricks", "https://www.codeeval.com/browse/117/", 117, eDiff_Moderate),
	CChallengeInfo("Seat Your Team Members", "https://www.codeeval.com/browse/118/", 118, eDiff_Hard),
	CChallengeInfo("Chain Inspection", "https://www.codeeval.com/browse/119/", 119, eDiff_Moderate),
	CChallengeInfo("Skyscrapers", "https://www.codeeval.com/browse/120/", 120, eDiff_Hard),
	CChallengeInfo("Lost In Translation", "https://www.codeeval.com/browse/121/", 121, eDiff_Moderate),
	CChallengeInfo("Hidden Digits", "https://www.codeeval.com/browse/122/", 122, eDiff_Easy),
	CChallengeInfo("Efficient Delivery", "https://www.codeeval.com/browse/123/", 123, eDiff_Hard),
	CChallengeInfo("Road Trip", "https://www.codeeval.com/browse/124/", 124, eDiff_Easy),
	CChallengeInfo("Predict The Number", "https://www.codeeval.com/browse/125/", 125, eDiff_Moderate),
	CChallengeInfo("Play With DNA", "https://www.codeeval.com/browse/126/", 126, eDiff_Hard),
	CChallengeInfo("Code Plagiarism", "https://www.codeeval.com/browse/127/", 127, eDiff_Hard),
	CChallengeInfo("Compressed Sequence", "https://www.codeeval.com/browse/128/", 128, eDiff_Easy),
	CChallengeInfo("Routing Problem", "https://www.codeeval.com/browse/129/", 129, eDiff_Hard),
	CChallengeInfo("Sequence Transformation", "https://www.codeeval.com/browse/130/", 130, eDiff_Moderate),
	CChallengeInfo("Split The Number", "https://www.codeeval.com/browse/131/", 131, eDiff_Easy),
	CChallengeInfo("The Major Element", "https://www.codeeval.com/browse/132/", 132, eDiff_Easy),
	CChallengeInfo("City Blocks Flyover", "https://www.codeeval.com/browse/133/", 133, eDiff_Moderate),
	CChallengeInfo("A Bus Network", "https://www.codeeval.com/browse/134/", 134, eDiff_Hard),
	CChallengeInfo("Word Chain", "https://www.codeeval.com/browse/135/", 135, eDiff_Moderate),
	CChallengeInfo("Racing Chars", "https://www.codeeval.com/browse/136/", 136, eDiff_Easy),
	CChallengeInfo("Seek For An Intruder", "https://www.codeeval.com/browse/137/", 137, eDiff_Moderate),
	CChallengeInfo("Car Race", "https://www.codeeval.com/browse/138/", 138, eDiff_Moderate),
	CChallengeInfo("Working Experience", "https://www.codeeval.com/browse/139/", 139, eDiff_Easy),
	CChallengeInfo("Data Recovery", "https://www.codeeval.com/browse/140/", 140, eDiff_Easy),
	CChallengeInfo("Flight 370", "https://www.codeeval.com/browse/141/", 141, eDiff_Hard),
	CChallengeInfo("Visit To The Headquarters", "https://www.codeeval.com/browse/142/", 142, eDiff_Hard),
	CChallengeInfo("The Ministry Of Truth", "https://www.codeeval.com/browse/143/", 143, eDiff_Moderate),
	CChallengeInfo("Digit Statistics", "https://www.codeeval.com/browse/144/", 144, eDiff_Hard),
	CChallengeInfo("Running For President", "https://www.codeeval.com/browse/145/", 145, eDiff_Hard),
	CChallengeInfo("Bats Challenge", "https://www.codeeval.com/browse/146/", 146, eDiff_Moderate),
	CChallengeInfo("Lettercase Percentage Ratio", "https://www.codeeval.com/browse/147/", 147, eDiff_Easy),
	CChallengeInfo("Color Code Converter", "https://www.codeeval.com/browse/148/", 148, eDiff_Moderate),
	CChallengeInfo("Juggling With Zeros", "https://www.codeeval.com/browse/149/", 149, eDiff_Easy),
	CChallengeInfo("Roman And Arabic", "https://www.codeeval.com/browse/150/", 150, eDiff_Moderate),
	CChallengeInfo("Cracking Eggs", "https://www.codeeval.com/browse/151/", 151, eDiff_Hard),
	CChallengeInfo("Age Distribution", "https://www.codeeval.com/browse/152/", 152, eDiff_Easy),
	CChallengeInfo("Locks", "https://www.codeeval.com/browse/153/", 153, eDiff_Moderate),
	CChallengeInfo("IP Package", "https://www.codeeval.com/browse/154/", 154, eDiff_Hard),
	CChallengeInfo("ASCII Decryption", "https://www.codeeval.com/browse/155/", 155, eDiff_Hard),
	CChallengeInfo("Roller Coaster", "https://www.codeeval.com/browse/156/", 156, eDiff_Easy),
	CChallengeInfo("The Labyrinth", "https://www.codeeval.com/browse/157/", 157, eDiff_Hard),
	CChallengeInfo("Interrupted Bubble Sort", "https://www.codeeval.com/browse/158/", 158, eDiff_Moderate),
	CChallengeInfo("Where Is Wi-Fi", "https://www.codeeval.com/browse/159/", 159, eDiff_Hard),
	CChallengeInfo("Nice Angles", "https://www.codeeval.com/browse/160/", 160, eDiff_Easy),
	CChallengeInfo("Game Of Life", "https://www.codeeval.com/browse/161/", 161, eDiff_Moderate),
	CChallengeInfo("Too Unique", "https://www.codeeval.com/browse/162/", 162, eDiff_Hard),
	CChallengeInfo("Big Digits", "https://www.codeeval.com/browse/163/", 163, eDiff_Easy),
	CChallengeInfo("Mars Networks", "https://www.codeeval.com/browse/164/", 164, eDiff_Hard),
	CChallengeInfo("Suggest Groups", "https://www.codeeval.com/browse/165/", 165, eDiff_Moderate),
	CChallengeInfo("Delta Time", "https://www.codeeval.com/browse/166/", 166, eDiff_Easy),
	CChallengeInfo("Read More", "https://www.codeeval.com/browse/167/", 167, eDiff_Easy),
	CChallengeInfo("The Frequency", "https://www.codeeval.com/browse/168/", 168, eDiff_Hard),
	CChallengeInfo("Filename Pattern", "https://www.codeeval.com/browse/169/", 169, eDiff_Moderate),
	CChallengeInfo("Guess The Number", "https://www.codeeval.com/browse/170/", 170, eDiff_Moderate),
	CChallengeInfo("DNA Alignment", "https://www.codeeval.com/browse/171/", 171, eDiff_Hard),
	CChallengeInfo("Card Number Validation", "https://www.codeeval.com/browse/172/", 172, eDiff_Moderate),
	CChallengeInfo("Without Repetitions", "https://www.codeeval.com/browse/173/", 173, eDiff_Easy),
	CChallengeInfo("Slang Flavor", "https://www.codeeval.com/browse/174/", 174, eDiff_Easy),
	CChallengeInfo("The Cubes", "https://www.codeeval.com/browse/175/", 175, eDiff_Hard),
	CChallengeInfo("Ray Of Light", "https://www.codeeval.com/browse/176/", 176, eDiff_Hard),
	CChallengeInfo("Justify The Text", "https://www.codeeval.com/browse/177/", 177, eDiff_Moderate),
	CChallengeInfo("Matrix Rotation", "https://www.codeeval.com/browse/178/", 178, eDiff_Easy),
	CChallengeInfo("Broken LCD", "https://www.codeeval.com/browse/179/", 179, eDiff_Moderate),
	CChallengeInfo("Knight Moves", "https://www.codeeval.com/browse/180/", 180, eDiff_Easy),
	CChallengeInfo("Gronsfeld Cipher", "https://www.codeeval.com/browse/181/", 181, eDiff_Moderate),
	CChallengeInfo("Longest Path", "https://www.codeeval.com/browse/182/", 182, eDiff_Hard),
	CChallengeInfo("Details", "https://www.codeeval.com/browse/183/", 183, eDiff_Easy),
	CChallengeInfo("Burrows-Wheeler Transform", "https://www.codeeval.com/browse/184/", 184, eDiff_Moderate),
	CChallengeInfo("Glue Shredded Pieces", "https://www.codeeval.com/browse/185/", 185, eDiff_Hard),
	CChallengeInfo("Max Range Sum", "https://www.codeeval.com/browse/186/", 186, eDiff_Easy),
	CChallengeInfo("Consecutive Primes", "https://www.codeeval.com/browse/187/", 187, eDiff_Moderate),
	CChallengeInfo("Distinct Triangles", "https://www.codeeval.com/browse/188/", 188, eDiff_Hard),
	CChallengeInfo("Minimum Distance", "https://www.codeeval.com/browse/189/", 189, eDiff_Easy),
	CChallengeInfo("Number Operations", "https://www.codeeval.com/browse/190/", 190, eDiff_Moderate),
	CChallengeInfo("Lights Out", "https://www.codeeval.com/browse/191/", 191, eDiff_Hard),
	CChallengeInfo("Compare Points", "https://www.codeeval.com/browse/192/", 192, eDiff_Easy),
	CChallengeInfo("Magic Numbers", "https://www.codeeval.com/browse/193/", 193, eDiff_Moderate),
	CChallengeInfo("Twenty Forty Eight", "https://www.codeeval.com/browse/194/", 194, eDiff_Moderate),
	CChallengeInfo("Crime House", "https://www.codeeval.com/browse/195/", 195, eDiff_Hard),
	CChallengeInfo("Swap Numbers", "https://www.codeeval.com/browse/196/", 196, eDiff_Easy),
	CChallengeInfo("Column Names", "https://www.codeeval.com/browse/197/", 197, eDiff_Moderate),
	CChallengeInfo("Less Money, More Problems", "https://www.codeeval.com/browse/198/", 198, eDiff_Hard),
	CChallengeInfo("String Mask", "https://www.codeeval.com/browse/199/", 199, eDiff_Easy),
	CChallengeInfo("Sort Matrix Columns", "https://www.codeeval.com/browse/200/", 200, eDiff_Moderate),
	CChallengeInfo("Alphabet Blocks", "https://www.codeeval.com/browse/201/", 201, eDiff_Hard),
	CChallengeInfo("Stepwise Word", "https://www.codeeval.com/browse/202/", 202, eDiff_Easy),
	CChallengeInfo("Strings And Arrows", "https://www.codeeval.com/browse/203/", 203, eDiff_Easy),
	CChallengeInfo("Straight Lines", "https://www.codeeval.com/browse/204/", 204, eDiff_Hard),
	CChallengeInfo("Clean Up The Words", "https://www.codeeval.com/browse/205/", 205, eDiff_Easy),
	CChallengeInfo("Lucky Tickets", "https://www.codeeval.com/browse/206/", 206, eDiff_Moderate),
	CChallengeInfo("Which Way Is Faster?", "https://www.codeeval.com/browse/207/", 207, eDiff_Hard),
	CChallengeInfo("Find The Highest Score", "https://www.codeeval.com/browse/208/", 208, eDiff_Easy),
	CChallengeInfo("Black Or White", "https://www.codeeval.com/browse/209/", 209, eDiff_Moderate),
	CChallengeInfo("BrainF*ck", "https://www.codeeval.com/browse/210/", 210, eDiff_Hard),
	CChallengeInfo("Chardonnay Or Cabernet", "https://www.codeeval.com/browse/211/", 211, eDiff_Easy),
	CChallengeInfo("Robo And Robitta", "https://www.codeeval.com/browse/212/", 212, eDiff_Moderate),
	CChallengeInfo("Lakes, Not Cakes", "https://www.codeeval.com/browse/213/", 213, eDiff_Hard),
	CChallengeInfo("Time To Eat", "https://www.codeeval.com/browse/214/", 214, eDiff_Easy),
	CChallengeInfo("Double Trouble", "https://www.codeeval.com/browse/215/", 215, eDiff_Moderate),
	CChallengeInfo("Everything Or Nothing", "https://www.codeeval.com/browse/216/", 216, eDiff_Hard),
	CChallengeInfo("One Zero, Two Zeros...", "https://www.codeeval.com/browse/217/", 217, eDiff_Easy),
	CChallengeInfo("Builders Team.", "https://www.codeeval.com/browse/218/", 218, eDiff_Moderate),
	CChallengeInfo("The Tourist", "https://www.codeeval.com/browse/219/", 219, eDiff_Hard),
	CChallengeInfo("Trick Or Treat", "https://www.codeeval.com/browse/220/", 220, eDiff_Easy),
	CChallengeInfo("Organizational Hierarchy", "https://www.codeeval.com/browse/221/", 221, eDiff_Moderate),
	CChallengeInfo("Black Card", "https://www.codeeval.com/browse/222/", 222, eDiff_Easy),
	CChallengeInfo("Alternative Reality", "https://www.codeeval.com/browse/223/", 223, eDiff_Moderate),
	CChallengeInfo("Prisoner Or Citizen", "https://www.codeeval.com/browse/224/", 224, eDiff_Hard),
	CChallengeInfo("Testing", "https://www.codeeval.com/browse/225/", 225, eDiff_Easy),
	CChallengeInfo("Try To Solve It", "https://www.codeeval.com/browse/226/", 226, eDiff_Moderate),
	CChallengeInfo("Real Fake", "https://www.codeeval.com/browse/227/", 227, eDiff_Easy),
	CChallengeInfo("To Pi Or Not To Pi", "https://www.codeeval.com/browse/228/", 228, eDiff_Moderate),
	CChallengeInfo("Grinch", "https://www.codeeval.com/browse/229/", 229, eDiff_Hard),
	CChallengeInfo("Football", "https://www.codeeval.com/browse/230/", 230, eDiff_Easy),
	CChallengeInfo("Meet Cocktail Sort", "https://www.codeeval.com/browse/231/", 231, eDiff_Moderate),
	CChallengeInfo("Not So Clever", "https://www.codeeval.com/browse/232/", 232, eDiff_Easy),
	CChallengeInfo("Meet Comb Sort", "https://www.codeeval.com/browse/233/", 233, eDiff_Moderate),
	CChallengeInfo("Code Like Huffman", "https://www.codeeval.com/browse/234/", 234, eDiff_Hard),
	CChallengeInfo("Simple Or Trump", "https://www.codeeval.com/browse/235/", 235, eDiff_Easy),
	CChallengeInfo("Beat Or Bit", "https://www.codeeval.com/browse/236/", 236, eDiff_Moderate),
	CChallengeInfo("Panacea - Truth Or Lie", "https://www.codeeval.com/browse/237/", 237, eDiff_Easy),
};

static bool g_afProblemsSolved[] =
{
	false, // 1
	false, // 2
	false, // 3
	false, // 4
	false, // 5
	false, // 6
	false, // 7
	false, // 8
	false, // 9
	false, // 10
	false, // 11
	false, // 12
	false, // 13
	false, // 14
	false, // 15
	false, // 16
	false, // 17
	false, // 18
	false, // 19
	false, // 10
	false, // 21
	false, // 22
	false, // 23
	false, // 24
	false, // 25
	false, // 26
	false, // 27
	false, // 28
	false, // 29
	false, // 20
	false, // 31
	false, // 32
	false, // 33
	false, // 34
	false, // 35
	false, // 36
	false, // 37
	false, // 38
	false, // 39
	false, // 30
	false, // 41
	false, // 42
	false, // 43
	false, // 44
	false, // 45
	false, // 46
	false, // 47
	false, // 48
	false, // 49
	false, // 40
	false, // 51
	false, // 52
	false, // 53
	false, // 54
	false, // 55
	false, // 56
	false, // 57
	false, // 58
	false, // 59
	false, // 50
	false, // 61
	false, // 62
	false, // 63
	false, // 64
	false, // 65
	false, // 66
	false, // 67
	false, // 68
	false, // 69
	false, // 60
	false, // 71
	false, // 72
	false, // 73
	false, // 74
	false, // 75
	false, // 76
	false, // 77
	false, // 78
	false, // 79
	false, // 70
	false, // 81
	false, // 82
	false, // 83
	false, // 84
	false, // 85
	false, // 86
	false, // 87
	false, // 88
	false, // 89
	false, // 80
	false, // 91
	false, // 92
	false, // 93
	false, // 94
	false, // 95
	false, // 96
	false, // 97
	false, // 98
	false, // 99
	false, // 100
	false, // 101
	false, // 102
	false, // 103
	false, // 104
	false, // 105
	false, // 106
	false, // 107
	false, // 108
	false, // 109
	false, // 110
	false, // 111
	false, // 112
	false, // 113
	false, // 114
	false, // 115
	false, // 116
	false, // 117
	false, // 118
	false, // 119
	false, // 120
	false, // 121
	false, // 122
	false, // 123
	false, // 124
	false, // 125
	false, // 126
	false, // 127
	false, // 128
	false, // 129
	false, // 130
	false, // 131
	false, // 132
	false, // 133
	false, // 134
	false, // 135
	false, // 136
	false, // 137
	false, // 138
	false, // 139
	false, // 140
	false, // 141
	false, // 142
	false, // 143
	false, // 144
	false, // 145
	false, // 146
	false, // 147
	false, // 148
	false, // 149
	false, // 150
	false, // 151
	false, // 152
	false, // 153
	false, // 154
	false, // 155
	false, // 156
	false, // 157
	false, // 158
	false, // 159
	false, // 160
	false, // 161
	false, // 162
	false, // 163
	false, // 164
	false, // 165
	false, // 166
	false, // 167
	false, // 168
	false, // 169
	false, // 170
	false, // 171
	false, // 172
	false, // 173
	false, // 174
	false, // 175
	false, // 176
	false, // 177
	false, // 178
	false, // 179
	false, // 180
	false, // 181
	false, // 182
	false, // 183
	false, // 184
	false, // 185
	false, // 186
	false, // 187
	false, // 188
	false, // 189
	false, // 190
	false, // 191
	false, // 192
	false, // 193
	false, // 194
	false, // 195
	false, // 196
	false, // 197
	false, // 198
	false, // 199
	false, // 200
	false, // 201
	false, // 202
	false, // 203
	false, // 204
	false, // 205
	false, // 206
	false, // 207
	false, // 208
	false, // 209
	false, // 210
	false, // 211
	false, // 212
	false, // 213
	false, // 214
	false, // 215
	false, // 216
	false, // 217
	false, // 218
	false, // 219
	false, // 220
	false, // 221
	false, // 222
	false, // 223
	false, // 224
	false, // 225
	false, // 226
	false, // 227
	false, // 228
	false, // 229
	false, // 230
	false, // 231
	false, // 232
	false, // 233
	false, // 234
	false, // 235
	false, // 236
	false, // 237
};

static CChallenge* g_apProblems[] =
{
	new C1(), // 1
	new C2(), // 2
	new C3(), // 3
	new C4(), // 4
	new C5(), // 5
	new C6(), // 6
	new C7(), // 7
	new C8(), // 8
	new C9(), // 9
	new C10(), // 10
	new C11(), // 11
	new C12(), // 12
	new C13(), // 13
	new C14(), // 14
	new C15(), // 15
	new C16(), // 16
	new C17(), // 17
	new C18(), // 18
	new C19(), // 19
	new C20(), // 20
	new C21(), // 21
	new C22(), // 22
	new C23(), // 23
	new C24(), // 24
	new C25(), // 25
	new C26(), // 26
	new C27(), // 27
	new C28(), // 28
	new C29(), // 29
	new C30(), // 30
	new C31(), // 31
	new C32(), // 32
	NULL, // 33
	new C34(), // 34
	NULL, // 35
	NULL, // 36
	new C37(), // 37
	NULL, // 38
	new C39(), // 39
	new C40(), // 40
	new C41(), // 41
	NULL, // 42
	new C43(), // 43
	new C44(), // 44
	new C45(), // 45
	new C46(), // 46
	new C47(), // 47
	NULL, // 48
	NULL, // 49
	new C50(), // 50
	NULL, // 51
	new C52(), // 52
	NULL, // 53
	new C54(), // 54
	NULL, // 55
	NULL, // 56
	new C57(), // 57
	NULL, // 58
	new C59(), // 59
	NULL, // 60
	NULL, // 61
	new C62(), // 62
	new C63(), // 63
	NULL, // 64
	NULL, // 65
	new C66(), // 66
	new C67(), // 67
	new C68(), // 68
	NULL, // 69
	new C70(), // 70
	new C71(), // 71
	NULL, // 72
	new C73(), // 73
	new C74(), // 74
	new C75(), // 75
	new C76(), // 76
	NULL, // 77
	new C78(), // 78
	new C79(), // 79
	NULL, // 80
	NULL, // 81
	new C82(), // 82
	new C83(), // 83
	NULL, // 84
	NULL, // 85
	NULL, // 86
	new C87(), // 87
	NULL, // 88
	NULL, // 89
	NULL, // 90
	new C91(), // 91
	new C92(), // 92
	new C93(), // 93
	NULL, // 94
	NULL, // 95
	new C96(), // 96
	new C97(), // 97
	new C98(), // 98
	new C99(), // 99
	new C100(), // 100
	new C101(), // 101
	new C102(), // 102
	new C103(), // 103
	new C104(), // 104
	NULL, // 105
	new C106(), // 106
	new C107(), // 107
	new C108(), // 108
	NULL, // 109
	new C110(), // 110
	new C111(), // 111
	new C112(), // 112
	new C113(), // 113
	NULL, // 114
	new C115(), // 115
	new C116(), // 116
	NULL, // 117
	NULL, // 118
	NULL, // 119
	NULL, // 120
	new C121(), // 121
	new C122(), // 122
	NULL, // 123
	new C124(), // 124
	NULL, // 125
	NULL, // 126
	NULL, // 127
	new C128(), // 128
	NULL, // 129
	NULL, // 130
	new C131(), // 131
	new C132(), // 132
	NULL, // 133
	NULL, // 134
	NULL, // 135
	new C136(), // 136
	NULL, // 137
	NULL, // 138
	new C139(), // 139
	new C140(), // 140
	NULL, // 141
	NULL, // 142
	NULL, // 143
	new C144(), // 144
	NULL, // 145
	new C146(), // 146
	new C147(), // 147
	new C148(), // 148
	new C149(), // 149
	NULL, // 150
	NULL, // 151
	new C152(), // 152
	new C153(), // 153
	NULL, // 154
	NULL, // 155
	new C156(), // 156
	NULL, // 157
	new C158(), // 158
	NULL, // 159
	new C160(), // 160
	new C161(), // 161
	NULL, // 162
	new C163(), // 163
	NULL, // 164
	NULL, // 165
	new C166(), // 166
	new C167(), // 167
	NULL, // 168
	NULL, // 169
	new C170(), // 170
	NULL, // 171
	new C172(), // 172
	new C173(), // 173
	new C174(), // 174
	NULL, // 175
	NULL, // 176
	NULL, // 177
	new C178(), // 178
	new C179(), // 179
	new C180(), // 180
	new C181(), // 181
	NULL, // 182
	new C183(), // 183
	new C184(), // 184
	NULL, // 185
	new C186(), // 186
	NULL, // 187
	NULL, // 188
	new C189(), // 189
	NULL, // 190
	new C191(), // 191
	new C192(), // 192
	new C193(), // 193
	NULL, // 194
	NULL, // 195
	new C196(), // 196
	new C197(), // 197
	NULL, // 198
	new C199(), // 199
	NULL, // 200
	NULL, // 201
	new C202(), // 202
	new C203(), // 203
	NULL, // 204
	new C205(), // 205
	NULL, // 206
	NULL, // 207
	new C208(), // 208
	NULL, // 209
	NULL, // 210
	new C211(), // 211
	NULL, // 212
	NULL, // 213
	new C214(), // 214
	NULL, // 215
	NULL, // 216
	new C217(), // 217
	NULL, // 218
	NULL, // 219
	new C220(), // 220
	NULL, // 221
	new C222(), // 222
	NULL, // 223
	NULL, // 224
	new C225(), // 225
	NULL, // 226
	new C227(), // 227
	NULL, // 228
	NULL, // 229
	new C230(), // 230
	NULL, // 231
	new C232(), // 232
	NULL, // 233
	NULL, // 234
	new C235(), // 235
	NULL, // 236
	NULL, // 237
};
