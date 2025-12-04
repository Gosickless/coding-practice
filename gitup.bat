@echo off
chcp 65001 >nul
title Git一键提交
color 0A

echo.
echo [1/3] 添加所有更改...
git add . >nul 2>&1 && echo   完成 ✓

echo.
echo [2/3] 提交更改
echo.
set /p commit_msg="提交消息（直接回车用"daily update"）: "
if "%commit_msg%"=="" set commit_msg=daily update
git commit -m "%commit_msg%" >nul 2>&1 && echo   完成 ✓

echo.
echo [3/3] 推送到远程...
git push origin HEAD >nul 2>&1 && echo   完成 ✓

echo.
echo [完成] 所有操作已执行！
echo 提交消息: %commit_msg%
timeout /t 3 >nul