@echo off
echo Compilando Super Trunfo - ORIGIN RPG...
gcc main.c cartas.c jogo.c -o trunfo.exe -Wl,--subsystem,console
if errorlevel 1 (
    echo ERRO na compilacao.
    pause
    exit /b 1
)
echo.
echo ==== EXECUTANDO ====
trunfo.exe
echo.
pause