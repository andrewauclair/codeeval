@echo off
setlocal enableextensions
::disabledelayedexpansion

set /p problem="Problem: "
set /p difficulty="Difficulty: "
set /p name="Problem name: "
set percent="%"

copy /y .\template.cs .\codeeval\src\CP%problem%.cs
echo. 2>codeeval\in\%problem%_in.txt
echo. 2>codeeval\out\%problem%_out.txt

call TextReplace .\codeeval\src\CP%problem%.cs PROBLEM_NUMBER %problem% PROBLEM_NAME "%name%" PROBLEM_DIFFICULTY %difficulty%

REM set "search=%%"
REM set "replace=%problem%"

REM set "search=%%"
REM set "replace=%problem%"

REM set "textFile=codeeval\src\CP%problem%.cs"

REM for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	REM set "line=%%i"
	REM setlocal enabledelayedexpansion
	REM set "line=!line:%search%=%replace%!"
	REM >>"%textFile%" echo(!line!
	REM endlocal
REM )

REM set "search=PROBLEM_NAME"
REM set "replace=%name%"

REM set "textFile=codeeval\src\CP%problem%.cs"

REM for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	REM set "line=%%i"
	REM setlocal enabledelayedexpansion
	REM set "line=!line:%search%=%replace%!"
	REM >>"%textFile%" echo(!line!
	REM endlocal
REM )

REM set "search=PROBLEM_DIFFICULTY"
REM set "replace=%difficulty%"

REM set "textFile=codeeval\src\CP%problem%.cs"

REM for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	REM set "line=%%i"
	REM setlocal enabledelayedexpansion
	REM set "line=!line:%search%=%replace%!"
	REM >>"%textFile%" echo(!line!
	REM endlocal
REM )
