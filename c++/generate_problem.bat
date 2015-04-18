@echo off
setlocal enableextensions disabledelayedexpansion

set /p problem="Problem: "
set /p name="Problem name: "

copy /y .\template.cpp .\codeeval\%problem%.cpp
copy /y .\template.h .\codeeval\%problem%.h

set "search=%%"
set "replace=%problem%"

set "textFile=codeeval\%problem%.h"

for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	set "line=%%i"
	setlocal enabledelayedexpansion
	set "line=!line:%search%=%replace%!"
	>>"%textFile%" echo(!line!
	endlocal
)

set "search=%%"
set "replace=%problem%"

set "textFile=codeeval\%problem%.cpp"

for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	set "line=%%i"
	setlocal enabledelayedexpansion
	set "line=!line:%search%=%replace%!"
	>>"%textFile%" echo(!line!
	endlocal
)

set "search=PROBLEM_NAME"
set "replace=%name%"

set "textFile=codeeval\%problem%.cpp"

for /f "delims=" %%i in ('type "%textFile%" ^& break ^> "%textFile%" ') do (
	set "line=%%i"
	setlocal enabledelayedexpansion
	set "line=!line:%search%=%replace%!"
	>>"%textFile%" echo(!line!
	endlocal
)

echo. 2>codeeval\%problem%.txt
echo. 2>codeeval\%problem%_out.txt