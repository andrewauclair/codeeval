@echo off
setlocal enableextensions disabledelayedexpansion

set /p problem="Problem: "
set /p difficulty="Difficulty: "
set /p name="Problem name: "

copy /y .\template.cs .\codeeval\src\CP%problem%.cs
echo. 2>codeeval\in\%problem%_in.txt
echo. 2>codeeval\out\%problem%_out.txt

set "search=%%"
set "replace=%problem%"

set "search=%%"
set "replace=%problem%"

set "textFile=codeeval\src\CP%problem%.cs"

for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	set "line=%%i"
	setlocal enabledelayedexpansion
	set "line=!line:%search%=%replace%!"
	>>"%textFile%" echo(!line!
	endlocal
)

set "search=PROBLEM_NAME"
set "replace=%name%"

set "textFile=codeeval\src\CP%problem%.cs"

for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	set "line=%%i"
	setlocal enabledelayedexpansion
	set "line=!line:%search%=%replace%!"
	>>"%textFile%" echo(!line!
	endlocal
)

set "search=PROBLEM_DIFFICULTY"
set "replace=%difficulty%"

set "textFile=codeeval\src\CP%problem%.cs"

for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	set "line=%%i"
	setlocal enabledelayedexpansion
	set "line=!line:%search%=%replace%!"
	>>"%textFile%" echo(!line!
	endlocal
)
