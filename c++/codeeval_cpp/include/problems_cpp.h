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
static const int fsc_cProblems = fsc_cEasyProblems + fsc_cModerateProblems + fsc_cHardProblems;

static CProblemInfo g_aProblemInfo[] =
{
	CProblemInfo("Fizz Buzz", "https://www.codeeval.com/browse/1/", 1, eDiff_Easy),
	CProblemInfo("Longest Lines", "https://www.codeeval.com/browse/2/", 2, eDiff_Moderate),
	CProblemInfo("Prime Palindrome", "https://www.codeeval.com/browse/3/", 3, eDiff_Easy),
	CProblemInfo("Sum Of Primes", "https://www.codeeval.com/browse/4/", 4, eDiff_Easy),
	CProblemInfo("Detecting Cycles", "https://www.codeeval.com/browse/5/", 5, eDiff_Moderate),
	CProblemInfo("Longest Common Subsequence", "https://www.codeeval.com/browse/6/", 6, eDiff_Hard),
	CProblemInfo("Prefix Expressions", "https://www.codeeval.com/browse/7/", 7, eDiff_Hard),
	CProblemInfo("Reverse Words", "https://www.codeeval.com/browse/8/", 8, eDiff_Easy),
	CProblemInfo("Stack Implementation", "https://www.codeeval.com/browse/9/", 9, eDiff_Moderate),
	CProblemInfo("Mth To Last Element", "https://www.codeeval.com/browse/10/", 10, eDiff_Moderate),
	CProblemInfo("Lowest Common Ancestor", "https://www.codeeval.com/browse/11/", 11, eDiff_Moderate),
	CProblemInfo("First Non-Repeated Character", "https://www.codeeval.com/browse/12/", 12, eDiff_Moderate),
	CProblemInfo("Remove Characters", "https://www.codeeval.com/browse/13/", 13, eDiff_Moderate),
	CProblemInfo("String Permutations", "https://www.codeeval.com/browse/14/", 14, eDiff_Hard),
	CProblemInfo("Endianness", "https://www.codeeval.com/browse/15/", 15, eDiff_Moderate),
	CProblemInfo("Number Of Ones", "https://www.codeeval.com/browse/16/", 16, eDiff_Moderate),
	CProblemInfo("Sum Of Integers", "https://www.codeeval.com/browse/17/", 17, eDiff_Moderate),
	CProblemInfo("Multiples Of A Number", "https://www.codeeval.com/browse/18/", 18, eDiff_Easy),
	CProblemInfo("Bit Positions", "https://www.codeeval.com/browse/19/", 19, eDiff_Easy),
	CProblemInfo("Lowercase", "https://www.codeeval.com/browse/20/", 20, eDiff_Easy),
	CProblemInfo("Sum Of Digits", "https://www.codeeval.com/browse/21/", 21, eDiff_Easy),
	CProblemInfo("Fibonacci Series", "https://www.codeeval.com/browse/22/", 22, eDiff_Easy),
	CProblemInfo("Multiplication Tables", "https://www.codeeval.com/browse/23/", 23, eDiff_Easy),
	CProblemInfo("Sum Of Integers From File", "https://www.codeeval.com/browse/24/", 24, eDiff_Easy),
	CProblemInfo("Odd Numbers", "https://www.codeeval.com/browse/25/", 25, eDiff_Easy),
	CProblemInfo("File Size", "https://www.codeeval.com/browse/26/", 26, eDiff_Easy),
	CProblemInfo("Decimal To Binary", "https://www.codeeval.com/browse/27/", 27, eDiff_Moderate),
	CProblemInfo("String Searching", "https://www.codeeval.com/browse/28/", 28, eDiff_Hard),
	CProblemInfo("Unique Elements", "https://www.codeeval.com/browse/29/", 29, eDiff_Easy),
	CProblemInfo("Set Intersection", "https://www.codeeval.com/browse/30/", 30, eDiff_Easy),
	CProblemInfo("Rightmost Char", "https://www.codeeval.com/browse/31/", 31, eDiff_Easy),
	CProblemInfo("Trailing String", "https://www.codeeval.com/browse/32/", 32, eDiff_Moderate),
	CProblemInfo("Double Squares", "https://www.codeeval.com/browse/33/", 33, eDiff_Moderate),
	CProblemInfo("Number Pairs", "https://www.codeeval.com/browse/34/", 34, eDiff_Moderate),
	CProblemInfo("Email Validation", "https://www.codeeval.com/browse/35/", 35, eDiff_Moderate),
	CProblemInfo("Message Decoding", "https://www.codeeval.com/browse/36/", 36, eDiff_Hard),
	CProblemInfo("Pangrams", "https://www.codeeval.com/browse/37/", 37, eDiff_Moderate),
	CProblemInfo("String List", "https://www.codeeval.com/browse/38/", 38, eDiff_Hard),
	CProblemInfo("Happy Numbers", "https://www.codeeval.com/browse/39/", 39, eDiff_Easy),
	CProblemInfo("Self Describing Numbers", "https://www.codeeval.com/browse/40/", 40, eDiff_Easy),
	CProblemInfo("Array Absurdity", "https://www.codeeval.com/browse/41/", 41, eDiff_Moderate),
	CProblemInfo("Ugly Numbers", "https://www.codeeval.com/browse/42/", 42, eDiff_Hard),
	CProblemInfo("Joly Jumpers", "https://www.codeeval.com/browse/43/", 43, eDiff_Moderate),
	CProblemInfo("Following Integer", "https://www.codeeval.com/browse/44/", 44, eDiff_Hard),
	CProblemInfo("Reverse And Add", "https://www.codeeval.com/browse/45/", 45, eDiff_Moderate),
	CProblemInfo("Prime Numbers", "https://www.codeeval.com/browse/46/", 46, eDiff_Moderate),
	CProblemInfo("Palindromic Ranges", "https://www.codeeval.com/browse/47/", 47, eDiff_Hard),
	CProblemInfo("Discount Offers", "https://www.codeeval.com/browse/48/", 48, eDiff_Hard),
	CProblemInfo("Peak Traffic", "https://www.codeeval.com/browse/49/", 49, eDiff_Hard),
	CProblemInfo("String Substitution", "https://www.codeeval.com/browse/50/", 50, eDiff_Hard),
	CProblemInfo("Closest Pair", "https://www.codeeval.com/browse/51/", 51, eDiff_Hard),
	CProblemInfo("Text Dollar", "https://www.codeeval.com/browse/52/", 52, eDiff_Hard),
	CProblemInfo("Repeated Substring", "https://www.codeeval.com/browse/53/", 53, eDiff_Hard),
	CProblemInfo("Cash Register", "https://www.codeeval.com/browse/54/", 54, eDiff_Moderate),
	CProblemInfo("Type Ahead", "https://www.codeeval.com/browse/55/", 55, eDiff_Hard),
	CProblemInfo("Robot Movements", "https://www.codeeval.com/browse/56/", 56, eDiff_Hard),
	CProblemInfo("Spiral Printing", "https://www.codeeval.com/browse/57/", 57, eDiff_Hard),
	CProblemInfo("Levenshtein Distance", "https://www.codeeval.com/browse/58/", 58, eDiff_Hard),
	CProblemInfo("Telephone Words", "https://www.codeeval.com/browse/59/", 59, eDiff_Hard),
	CProblemInfo("Grid Walk", "https://www.codeeval.com/browse/60/", 60, eDiff_Hard),
	CProblemInfo("Decryption", "https://www.codeeval.com/browse/61/", 61, eDiff_Hard),
	CProblemInfo("N Mod M", "https://www.codeeval.com/browse/62/", 62, eDiff_Easy),
	CProblemInfo("Counting Primes", "https://www.codeeval.com/browse/63/", 63, eDiff_Moderate),
	CProblemInfo("Climbing Stairs", "https://www.codeeval.com/browse/64/", 64, eDiff_Hard),
	CProblemInfo("Word Search", "https://www.codeeval.com/browse/65/", 65, eDiff_Hard),
	CProblemInfo("Pascals Triangle", "https://www.codeeval.com/browse/66/", 66, eDiff_Moderate),
	CProblemInfo("Hex To Decimal", "https://www.codeeval.com/browse/67/", 67, eDiff_Easy),
	CProblemInfo("Valid Parentheses", "https://www.codeeval.com/browse/68/", 68, eDiff_Moderate),
	CProblemInfo("Distinct Subsequences", "https://www.codeeval.com/browse/69/", 69, eDiff_Hard),
	CProblemInfo("Overlapping Rectangles", "https://www.codeeval.com/browse/70/", 70, eDiff_Moderate),
	CProblemInfo("Reverse Groups", "https://www.codeeval.com/browse/71/", 71, eDiff_Moderate),
	CProblemInfo("Minimum Path Sum", "https://www.codeeval.com/browse/72/", 72, eDiff_Hard),
	CProblemInfo("Decode Numbers", "https://www.codeeval.com/browse/73/", 73, eDiff_Moderate),
	CProblemInfo("Minimum Coins", "https://www.codeeval.com/browse/74/", 74, eDiff_Moderate),
	CProblemInfo("Flavius Josephus", "https://www.codeeval.com/browse/75/", 75, eDiff_Moderate),
	CProblemInfo("String Rotation", "https://www.codeeval.com/browse/76/", 76, eDiff_Moderate),
	CProblemInfo("Da Vyncy", "https://www.codeeval.com/browse/77/", 77, eDiff_Hard),
	CProblemInfo("Sudoku", "https://www.codeeval.com/browse/78/", 78, eDiff_Moderate),
	CProblemInfo("Minesweeper", "https://www.codeeval.com/browse/79/", 79, eDiff_Hard),
	CProblemInfo("URI Comparison", "https://www.codeeval.com/browse/80/", 80, eDiff_Moderate),
	CProblemInfo("Sum To Zero", "https://www.codeeval.com/browse/81/", 81, eDiff_Moderate),
	CProblemInfo("Armstrong Numbers", "https://www.codeeval.com/browse/82/", 82, eDiff_Easy),
	CProblemInfo("Beautiful Strings", "https://www.codeeval.com/browse/83/", 83, eDiff_Easy),
	CProblemInfo("Balanced Smileys", "https://www.codeeval.com/browse/84/", 84, eDiff_Moderate),
	CProblemInfo("Find Min", "https://www.codeeval.com/browse/85/", 85, eDiff_Hard),
	CProblemInfo("Poker Hands", "https://www.codeeval.com/browse/86/", 86, eDiff_Hard),
	CProblemInfo("Query Board", "https://www.codeeval.com/browse/87/", 87, eDiff_Easy),
	CProblemInfo("Juggle Fest", "https://www.codeeval.com/browse/88/", 88, eDiff_Hard),
	CProblemInfo("Pass Triangle", "https://www.codeeval.com/browse/89/", 89, eDiff_Moderate),
	CProblemInfo("Commuting Engineer", "https://www.codeeval.com/browse/90/", 90, eDiff_Hard),
	CProblemInfo("Simple Sorting", "https://www.codeeval.com/browse/91/", 91, eDiff_Easy),
	CProblemInfo("Penultimate Word", "https://www.codeeval.com/browse/92/", 92, eDiff_Easy),
	CProblemInfo("Capitalize Words", "https://www.codeeval.com/browse/93/", 93, eDiff_Easy),
	CProblemInfo("Simple Calculator", "https://www.codeeval.com/browse/94/", 94, eDiff_Moderate),
	CProblemInfo("Advanced Calculator", "https://www.codeeval.com/browse/95/", 95, eDiff_Hard),
	CProblemInfo("Swap Case", "https://www.codeeval.com/browse/96/", 96, eDiff_Easy),
	CProblemInfo("Find A Writer", "https://www.codeeval.com/browse/97/", 97, eDiff_Easy),
	CProblemInfo("Point In Circle", "https://www.codeeval.com/browse/98/", 98, eDiff_Moderate),
	CProblemInfo("Calculate Distance", "https://www.codeeval.com/browse/99/", 99, eDiff_Easy),
	CProblemInfo("Even Numbers", "https://www.codeeval.com/browse/100/", 100, eDiff_Easy),
	CProblemInfo("Find A Square", "https://www.codeeval.com/browse/101/", 101, eDiff_Moderate),
	CProblemInfo("JSON Menu IDs", "https://www.codeeval.com/browse/102/", 102, eDiff_Easy),
	CProblemInfo("Lowest Unique Number", "https://www.codeeval.com/browse/103/", 103, eDiff_Easy),
	CProblemInfo("Word To Digit", "https://www.codeeval.com/browse/104/", 104, eDiff_Easy),
	CProblemInfo("Largest Sub-Matrix", "https://www.codeeval.com/browse/105/", 105, eDiff_Hard),
	CProblemInfo("Roman Numerals", "https://www.codeeval.com/browse/106/", 106, eDiff_Easy),
	CProblemInfo("Shortest Repetition", "https://www.codeeval.com/browse/107/", 107, eDiff_Easy),
	CProblemInfo("Computer Terminal", "https://www.codeeval.com/browse/108/", 108, eDiff_Hard),
	CProblemInfo("Bay Bridges", "https://www.codeeval.com/browse/109/", 109, eDiff_Hard),
	CProblemInfo("Text To Number", "https://www.codeeval.com/browse/110/", 110, eDiff_Hard),
	CProblemInfo("Longest Word", "https://www.codeeval.com/browse/111/", 111, eDiff_Easy),
	CProblemInfo("Swap Elements", "https://www.codeeval.com/browse/112/", 112, eDiff_Easy),
	CProblemInfo("Multiply Lists", "https://www.codeeval.com/browse/113/", 113, eDiff_Easy),
	CProblemInfo("Package Problem", "https://www.codeeval.com/browse/114/", 114, eDiff_Hard),
	CProblemInfo("Mixed Content", "https://www.codeeval.com/browse/115/", 115, eDiff_Easy),
	CProblemInfo("Morse Code", "https://www.codeeval.com/browse/116/", 116, eDiff_Easy),
	CProblemInfo("A Pile Of Bricks", "https://www.codeeval.com/browse/117/", 117, eDiff_Moderate),
	CProblemInfo("Seat Your Team Members", "https://www.codeeval.com/browse/118/", 118, eDiff_Hard),
	CProblemInfo("Chain Inspection", "https://www.codeeval.com/browse/119/", 119, eDiff_Moderate),
	CProblemInfo("Skyscrapers", "https://www.codeeval.com/browse/120/", 120, eDiff_Hard),
	CProblemInfo("Lost In Translation", "https://www.codeeval.com/browse/121/", 121, eDiff_Moderate),
	CProblemInfo("Hidden Digits", "https://www.codeeval.com/browse/122/", 122, eDiff_Easy),
	CProblemInfo("Efficient Delivery", "https://www.codeeval.com/browse/123/", 123, eDiff_Hard),
	CProblemInfo("Road Trip", "https://www.codeeval.com/browse/124/", 124, eDiff_Easy),
	CProblemInfo("Predict The Number", "https://www.codeeval.com/browse/125/", 125, eDiff_Moderate),
	CProblemInfo("Play With DNA", "https://www.codeeval.com/browse/126/", 126, eDiff_Hard),
	CProblemInfo("Code Plagiarism", "https://www.codeeval.com/browse/127/", 127, eDiff_Hard),
	CProblemInfo("Compressed Sequence", "https://www.codeeval.com/browse/128/", 128, eDiff_Easy),
	CProblemInfo("Routing Problem", "https://www.codeeval.com/browse/129/", 129, eDiff_Hard),
	CProblemInfo("Sequence Transformation", "https://www.codeeval.com/browse/130/", 130, eDiff_Moderate),
	CProblemInfo("Split The Number", "https://www.codeeval.com/browse/131/", 131, eDiff_Easy),
	CProblemInfo("The Major Element", "https://www.codeeval.com/browse/132/", 132, eDiff_Easy),
	CProblemInfo("City Blocks Flyover", "https://www.codeeval.com/browse/133/", 133, eDiff_Moderate),
	CProblemInfo("A Bus Network", "https://www.codeeval.com/browse/134/", 134, eDiff_Hard),
	CProblemInfo("Word Chain", "https://www.codeeval.com/browse/135/", 135, eDiff_Moderate),
	CProblemInfo("Racing Chars", "https://www.codeeval.com/browse/136/", 136, eDiff_Easy),
	CProblemInfo("Seek For An Intruder", "https://www.codeeval.com/browse/137/", 137, eDiff_Moderate),
	CProblemInfo("Car Race", "https://www.codeeval.com/browse/138/", 138, eDiff_Moderate),
	CProblemInfo("Working Experience", "https://www.codeeval.com/browse/139/", 139, eDiff_Easy),
	CProblemInfo("Data Recovery", "https://www.codeeval.com/browse/140/", 140, eDiff_Easy),
	CProblemInfo("Flight 370", "https://www.codeeval.com/browse/141/", 141, eDiff_Hard),
	CProblemInfo("Visit To The Headquarters", "https://www.codeeval.com/browse/142/", 142, eDiff_Hard),
	CProblemInfo("The Ministry Of Truth", "https://www.codeeval.com/browse/143/", 143, eDiff_Moderate),
	CProblemInfo("Digit Statistics", "https://www.codeeval.com/browse/144/", 144, eDiff_Hard),
	CProblemInfo("Running For President", "https://www.codeeval.com/browse/145/", 145, eDiff_Hard),
	CProblemInfo("Bats Challenge", "https://www.codeeval.com/browse/146/", 146, eDiff_Moderate),
	CProblemInfo("Lettercase Percentage Ratio", "https://www.codeeval.com/browse/147/", 147, eDiff_Easy),
	CProblemInfo("Color Code Converter", "https://www.codeeval.com/browse/148/", 148, eDiff_Moderate),
	CProblemInfo("Juggling With Zeros", "https://www.codeeval.com/browse/149/", 149, eDiff_Easy),
	CProblemInfo("Roman And Arabic", "https://www.codeeval.com/browse/150/", 150, eDiff_Moderate),
	CProblemInfo("Cracking Eggs", "https://www.codeeval.com/browse/151/", 151, eDiff_Hard),
	CProblemInfo("Age Distribution", "https://www.codeeval.com/browse/152/", 152, eDiff_Easy),
	CProblemInfo("Locks", "https://www.codeeval.com/browse/153/", 153, eDiff_Moderate),
	CProblemInfo("IP Package", "https://www.codeeval.com/browse/154/", 154, eDiff_Hard),
	CProblemInfo("ASCII Decryption", "https://www.codeeval.com/browse/155/", 155, eDiff_Hard),
	CProblemInfo("Roller Coaster", "https://www.codeeval.com/browse/156/", 156, eDiff_Easy),
	CProblemInfo("The Labyrinth", "https://www.codeeval.com/browse/157/", 157, eDiff_Hard),
	CProblemInfo("Interrupted Bubble Sort", "https://www.codeeval.com/browse/158/", 158, eDiff_Moderate),
	CProblemInfo("Where Is Wi-Fi", "https://www.codeeval.com/browse/159/", 159, eDiff_Hard),
	CProblemInfo("Nice Angles", "https://www.codeeval.com/browse/160/", 160, eDiff_Easy),
	CProblemInfo("Game Of Life", "https://www.codeeval.com/browse/161/", 161, eDiff_Moderate),
	CProblemInfo("Too Unique", "https://www.codeeval.com/browse/162/", 162, eDiff_Hard),
	CProblemInfo("Big Digits", "https://www.codeeval.com/browse/163/", 163, eDiff_Easy),
	CProblemInfo("Mars Networks", "https://www.codeeval.com/browse/164/", 164, eDiff_Hard),
	CProblemInfo("Suggest Groups", "https://www.codeeval.com/browse/165/", 165, eDiff_Moderate),
	CProblemInfo("Delta Time", "https://www.codeeval.com/browse/166/", 166, eDiff_Easy),
	CProblemInfo("Read More", "https://www.codeeval.com/browse/167/", 167, eDiff_Easy),
	CProblemInfo("The Frequency", "https://www.codeeval.com/browse/168/", 168, eDiff_Hard),
	CProblemInfo("Filename Pattern", "https://www.codeeval.com/browse/169/", 169, eDiff_Moderate),
	CProblemInfo("Guess The Number", "https://www.codeeval.com/browse/170/", 170, eDiff_Moderate),
	CProblemInfo("DNA Alignment", "https://www.codeeval.com/browse/171/", 171, eDiff_Hard),
	CProblemInfo("Card Number Validation", "https://www.codeeval.com/browse/172/", 172, eDiff_Moderate),
	CProblemInfo("Without Repetitions", "https://www.codeeval.com/browse/173/", 173, eDiff_Easy),
	CProblemInfo("Slang Flavor", "https://www.codeeval.com/browse/174/", 174, eDiff_Easy),
	CProblemInfo("The Cubes", "https://www.codeeval.com/browse/175/", 175, eDiff_Hard),
	CProblemInfo("Ray Of Light", "https://www.codeeval.com/browse/176/", 176, eDiff_Hard),
	CProblemInfo("Justify The Text", "https://www.codeeval.com/browse/177/", 177, eDiff_Moderate),
	CProblemInfo("Matrix Rotation", "https://www.codeeval.com/browse/178/", 178, eDiff_Easy),
	CProblemInfo("Broken LCD", "https://www.codeeval.com/browse/179/", 179, eDiff_Moderate),
	CProblemInfo("Knight Moves", "https://www.codeeval.com/browse/180/", 180, eDiff_Easy),
	CProblemInfo("Gronsfeld Cipher", "https://www.codeeval.com/browse/181/", 181, eDiff_Moderate),
	CProblemInfo("Longest Path", "https://www.codeeval.com/browse/182/", 182, eDiff_Hard),
	CProblemInfo("Details", "https://www.codeeval.com/browse/183/", 183, eDiff_Easy),
	CProblemInfo("Burrows-Wheeler Transform", "https://www.codeeval.com/browse/184/", 184, eDiff_Moderate),
	CProblemInfo("Glue Shredded Pieces", "https://www.codeeval.com/browse/185/", 185, eDiff_Hard),
	CProblemInfo("Max Range Sum", "https://www.codeeval.com/browse/186/", 186, eDiff_Easy),
	CProblemInfo("Consecutive Primes", "https://www.codeeval.com/browse/187/", 187, eDiff_Moderate),
	CProblemInfo("Distinct Triangles", "https://www.codeeval.com/browse/188/", 188, eDiff_Hard),
	CProblemInfo("Minimum Distance", "https://www.codeeval.com/browse/189/", 189, eDiff_Easy),
	CProblemInfo("Number Operations", "https://www.codeeval.com/browse/190/", 190, eDiff_Moderate),
	CProblemInfo("Lights Out", "https://www.codeeval.com/browse/191/", 191, eDiff_Hard),
	CProblemInfo("Compare Points", "https://www.codeeval.com/browse/192/", 192, eDiff_Easy),
	CProblemInfo("Magic Numbers", "https://www.codeeval.com/browse/193/", 193, eDiff_Moderate),
	CProblemInfo("Twenty Forty Eight", "https://www.codeeval.com/browse/194/", 194, eDiff_Moderate),
	CProblemInfo("Crime House", "https://www.codeeval.com/browse/195/", 195, eDiff_Hard),
	CProblemInfo("Swap Numbers", "https://www.codeeval.com/browse/196/", 196, eDiff_Easy),
	CProblemInfo("Column Names", "https://www.codeeval.com/browse/197/", 197, eDiff_Moderate),
	CProblemInfo("Less Money, More Problems", "https://www.codeeval.com/browse/198/", 198, eDiff_Hard),
	CProblemInfo("String Mask", "https://www.codeeval.com/browse/199/", 199, eDiff_Easy),
	CProblemInfo("Sort Matrix Columns", "https://www.codeeval.com/browse/200/", 200, eDiff_Moderate),
	CProblemInfo("Alphabet Blocks", "https://www.codeeval.com/browse/201/", 201, eDiff_Hard),
	CProblemInfo("Stepwise Word", "https://www.codeeval.com/browse/202/", 202, eDiff_Easy),
	CProblemInfo("Strings And Arrows", "https://www.codeeval.com/browse/203/", 203, eDiff_Easy),
	CProblemInfo("Straight Lines", "https://www.codeeval.com/browse/204/", 204, eDiff_Hard),
	CProblemInfo("Clean Up The Words", "https://www.codeeval.com/browse/205/", 205, eDiff_Easy),
	CProblemInfo("Lucky Tickets", "https://www.codeeval.com/browse/206/", 206, eDiff_Moderate),
	CProblemInfo("Which Way Is Faster?", "https://www.codeeval.com/browse/207/", 207, eDiff_Hard),
	CProblemInfo("Find The Highest Score", "https://www.codeeval.com/browse/208/", 208, eDiff_Easy),
	CProblemInfo("Black Or White", "https://www.codeeval.com/browse/209/", 209, eDiff_Moderate),
	CProblemInfo("BrainF*ck", "https://www.codeeval.com/browse/210/", 210, eDiff_Hard),
	CProblemInfo("Chardonnay Or Cabernet", "https://www.codeeval.com/browse/211/", 211, eDiff_Easy),
	CProblemInfo("Robo And Robitta", "https://www.codeeval.com/browse/212/", 212, eDiff_Moderate),
	CProblemInfo("Lakes, Not Cakes", "https://www.codeeval.com/browse/213/", 213, eDiff_Hard),
	CProblemInfo("Time To Eat", "https://www.codeeval.com/browse/214/", 214, eDiff_Easy),
	CProblemInfo("Double Trouble", "https://www.codeeval.com/browse/215/", 215, eDiff_Moderate),
	CProblemInfo("Everything Or Nothing", "https://www.codeeval.com/browse/216/", 216, eDiff_Hard),
	CProblemInfo("One Zero, Two Zeros...", "https://www.codeeval.com/browse/217/", 217, eDiff_Easy),
	CProblemInfo("Builders Team.", "https://www.codeeval.com/browse/218/", 218, eDiff_Moderate),
	CProblemInfo("The Tourist", "https://www.codeeval.com/browse/219/", 219, eDiff_Hard),
	CProblemInfo("Trick Or Treat", "https://www.codeeval.com/browse/220/", 220, eDiff_Easy),
	CProblemInfo("Organizational Hierarchy", "https://www.codeeval.com/browse/221/", 221, eDiff_Moderate),
	CProblemInfo("Black Card", "https://www.codeeval.com/browse/222/", 222, eDiff_Easy),
	CProblemInfo("Alternative Reality", "https://www.codeeval.com/browse/223/", 223, eDiff_Moderate),
	CProblemInfo("Prisoner Or Citizen", "https://www.codeeval.com/browse/224/", 224, eDiff_Hard),
	CProblemInfo("Testing", "https://www.codeeval.com/browse/225/", 225, eDiff_Easy),
	CProblemInfo("Try To Solve It", "https://www.codeeval.com/browse/226/", 226, eDiff_Moderate),
	CProblemInfo("Real Fake", "https://www.codeeval.com/browse/227/", 227, eDiff_Easy),
	CProblemInfo("To Pi Or Not To Pi", "https://www.codeeval.com/browse/228/", 228, eDiff_Moderate),
	CProblemInfo("Grinch", "https://www.codeeval.com/browse/229/", 229, eDiff_Hard),
	CProblemInfo("Football", "https://www.codeeval.com/browse/230/", 230, eDiff_Easy),
	CProblemInfo("Meet Cocktail Sort", "https://www.codeeval.com/browse/231/", 231, eDiff_Moderate),
	CProblemInfo("Not So Clever", "https://www.codeeval.com/browse/232/", 232, eDiff_Easy),
	CProblemInfo("Meet Comb Sort", "https://www.codeeval.com/browse/233/", 233, eDiff_Moderate),
	CProblemInfo("Code Like Huffman", "https://www.codeeval.com/browse/234/", 234, eDiff_Hard),
	CProblemInfo("Simple Or Trump", "https://www.codeeval.com/browse/235/", 235, eDiff_Easy),
	CProblemInfo("Beat Or Bit", "https://www.codeeval.com/browse/236/", 236, eDiff_Moderate),
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
};

static CProblem* g_apProblems[] =
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
	new CP57(), // 57
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
	NULL, // 226
	new CP227(), // 227
	NULL, // 228
	NULL, // 229
	new CP230(), // 230
	NULL, // 231
	new CP232(), // 232
	NULL, // 233
	NULL, // 234
	new CP235(), // 235
	NULL, // 236
};
