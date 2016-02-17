@echo off
setlocal enableextensions disabledelayedexpansion

set /p problem="Problem: "
set /p difficulty="Difficulty: "
set /p name="Problem name: "

copy /y .\template.cpp .\problems\src\%problem%.cpp
copy /y .\template.h .\problems\include\%problem%.h
echo. 2>problems\in\%problem%_in.txt
echo. 2>problems\out\%problem%_out.txt

call TextReplace .\problems\src\%problem%.cpp PROBLEM_NUMBER %problem% PROBLEM_NAME "%name%" PROBLEM_DIFFICULTY %difficulty%
call TextReplace .\problems\include\%problem%.h PROBLEM_NUMBER %problem%
