@echo off

cls

msbuild "CrazyU.sln" /p:Configuration=Debug /p:Platform=x64
msbuild "CrazyU.sln" /p:Configuration=Release /p:Platform=x64

XCOPY /y /s lib\Debug\SeparityGame_d.dll Exe
XCOPY /y /s lib\Release\SeparityGame.dll Exe

cd Exe
call Separity.exe
