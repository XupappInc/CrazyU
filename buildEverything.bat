@echo off

#build engine and dependencies
cd Separity
call buildEverything.bat
cd ..

set EXES=Separity\Exes\
set EXE=Exe

XCOPY /y /s "%EXES%\*.exe" %EXE%
XCOPY /y /s "%EXES%\*.cfg" %EXE%
XCOPY /y /s "%EXES%\*.dll" %EXE%
XCOPY /y /s "%EXES%\*.log" %EXE%
XCOPY /y /s "%EXES%\*.txt" %EXE%

del "%EXES%\*.exe"
del "%EXES%\*.txt"
del "%EXES%\*.dll"
del "%EXES%\*.lib"
del "%EXES%\*.pdb"
del "%EXES%\*.exp"

#build game
call buildGame.bat
