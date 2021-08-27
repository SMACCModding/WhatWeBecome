@echo off


set pathToAddonBuilder=D:\Other Games\steamapps\common\DayZ Tools\Bin\AddonBuilder\
set pathToUncompiled=P:\workspace\WhatWeBecome\Season1 - Deserted\Deserted\
set pathToCompiled=P:\workspace\WhatWeBecome\Season1 - Deserted\Finished\@Deserted\Addons\

ECHO "Compiling Mod from here: %pathToUncompiled%!!"

"%pathToAddonBuilder%AddonBuilder.exe" "%pathToUncompiled%" "%pathToCompiled%" -packonly -clear

ECHO "Compiled Mod to here: %pathToCompiled%!!"