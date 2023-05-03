@echo off

cls

msbuild "CrazyU.sln" /p:Configuration=Debug /p:Platform=x64
msbuild "CrazyU.sln" /p:Configuration=Release /p:Platform=x64

cd Exe
call Separity.exe
