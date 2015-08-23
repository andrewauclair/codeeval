@echo off
setlocal enableextensions disabledelayedexpansion

set /p problem="Problem: "
set /p difficulty="Difficulty: "
set /p name="Problem name: "

copy /y .\template.cpp .\codeeval\src\%problem%.cpp
copy /y .\template.h .\codeeval\include\%problem%.h
echo. 2>codeeval\in\%problem%_in.txt
echo. 2>codeeval\out\%problem%_out.txt

call TextReplace .\codeeval\src\%problem%.cpp PROBLEM_NUMBER %problem% PROBLEM_NAME "%name%" PROBLEM_DIFFICULTY %difficulty%
call TextReplace .\codeeval\include\%problem%.h PROBLEM_NUMBER %problem%

REM set "search=%%"
REM set "replace=%problem%"

REM set "textFile=codeeval\include\%problem%.h"

REM for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	REM set "line=%%i"
	REM setlocal enabledelayedexpansion
	REM set "line=!line:%search%=%replace%!"
	REM >>"%textFile%" echo(!line!
	REM endlocal
REM )

REM set "search=%%"
REM set "replace=%problem%"

REM set "textFile=codeeval\src\%problem%.cpp"

REM for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	REM set "line=%%i"
	REM setlocal enabledelayedexpansion
	REM set "line=!line:%search%=%replace%!"
	REM >>"%textFile%" echo(!line!
	REM endlocal
REM )

REM set "search=PROBLEM_NAME"
REM set "replace=%name%"

REM set "textFile=codeeval\src\%problem%.cpp"

REM for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	REM set "line=%%i"
	REM setlocal enabledelayedexpansion
	REM set "line=!line:%search%=%replace%!"
	REM >>"%textFile%" echo(!line!
	REM endlocal
REM )

REM set "search=PROBLEM_DIFFICULTY"
REM set "replace=%difficulty%"

REM set "textFile=codeeval\src\%problem%.cpp"

REM for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	REM set "line=%%i"
	REM setlocal enabledelayedexpansion
	REM set "line=!line:%search%=%replace%!"
	REM >>"%textFile%" echo(!line!
	REM endlocal
REM )
