@echo off

mkdir Separity\Exes\Assets

set EXES=Separity\Exes

cd Separity
call buildSeparity.bat

cd ..

msbuild "CrazyU.sln" /p:Configuration=Debug /p:Platform=x64
msbuild "CrazyU.sln" /p:Configuration=Release /p:Platform=x64

XCOPY /y /s lib\Debug\SeparityGame_d.dll %EXES%
XCOPY /y /s lib\Release\SeparityGame.dll %EXES%
XCOPY /y /s Separity\lib\x64\Debug\SeparityExports_d.dll %EXES%
XCOPY /y /s Separity\lib\x64\Release\SeparityExports.dll %EXES%
XCOPY /y /s Exe\Assets\ %EXES%\Assets
