@echo off

mkdir Separity\Exes\Assets

set EXES=Separity\Exes

cd Separity

call buildSeparity.bat

cd ..

call buildGame.bat

XCOPY /y /s lib\x64\Debug\SeparityGame_d.dll %EXES%
XCOPY /y /s lib\x64\Release\SeparityGame.dll %EXES%
XCOPY /y /s Separity\lib\x64\Debug\SeparityExports_d.dll %EXES%
XCOPY /y /s Separity\lib\x64\Release\SeparityExports.dll %EXES%
XCOPY /y /s Assets\ %EXES%\Assets

cd Separity\Exes

call Separity.exe