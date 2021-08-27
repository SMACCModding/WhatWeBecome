@echo off
echo ^<?xml version="1.0" encoding="UTF-8" standalone="yes"?^>> test_types.xml
echo ^<types^>>> test_types.xml
for /R %%f in (config.cpp) do (
for /f "tokens=*" %%a in ('findstr "ARPC_" %%f') do (
for /f "tokens=1 delims=:" %%b in ('echo %%a') do (
for /f "tokens=2 delims= " %%c in ('echo %%b') do (
(
echo     ^<type name="%%c%"^>
echo         ^<lifetime^>14400^</lifetime^>
echo     ^</type^>
) >> test_types.xml
)
)
)
)
echo ^</types^>>> test_types.xml