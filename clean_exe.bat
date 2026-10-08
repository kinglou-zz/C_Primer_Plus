@echo off
setlocal enabledelayedexpansion
cd /d "%~dp0"

echo ==========================================
echo   编译产物清理工具  -  *.exe
echo   目标目录: %cd%
echo ==========================================
echo.
echo 注意: 此脚本会删除该目录下的 .exe 文件,
echo       请确认这里没有需要保留的可执行文件。
echo.

set /p sub=是否连同子文件夹一起清理? [y/N] 

set count=0
if /i "!sub!"=="y" (
    for /r %%f in (*.exe) do set /a count+=1
) else (
    for %%f in (*.exe) do set /a count+=1
)

if !count!==0 (
    echo.
    echo 没有找到 .exe 文件,无需清理。
    goto :done
)

echo.
echo 共找到 !count! 个文件:
echo.
if /i "!sub!"=="y" (
    for /r %%f in (*.exe) do echo   %%f
) else (
    for %%f in (*.exe) do echo   %%f
)

echo.
set /p confirm=确认全部删除? [y/N] 
if /i not "!confirm!"=="y" (
    echo.
    echo 已取消,未删除任何文件。
    goto :done
)

echo.
if /i "!sub!"=="y" (
    for /r %%f in (*.exe) do (
        del /f /q "%%f" >nul 2>&1 && echo   已删除: %%f
    )
) else (
    for %%f in (*.exe) do (
        del /f /q "%%f" >nul 2>&1 && echo   已删除: %%f
    )
)

echo.
echo 清理完成。

:done
echo.
pause
