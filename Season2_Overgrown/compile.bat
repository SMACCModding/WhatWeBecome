@echo off

set serverName=WhatWeBecome
set modName=Overgrown
set seasonName=Season2_Overgrown

set pathToAddonBuilder=D:\Other Games\steamapps\common\DayZ Tools\Bin\AddonBuilder\
set pathToUncompiled=P:\workspace\%serverName%\%seasonName%\Mod\
set pathToTemp=P:\%modName%\
set pathToCompiled=P:\workspace\packedPBOs\@%modName%\Addons\

echo "Compiling %seasonName%!!"
if not exist P:\ (
echo Mount ya P Drive ya daft bastard!
exit
)
RD /S /Q %pathToTemp%
xcopy /s /i %pathToUncompiled% %pathToTemp%

"%pathToAddonBuilder%AddonBuilder.exe" %pathToTemp% %pathToCompiled% -packonly -clear -sign

echo "Compiled Mod to here: %pathToCompiled%!!"