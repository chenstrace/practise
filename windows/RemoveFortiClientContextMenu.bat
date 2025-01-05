@echo off
setlocal enabledelayedexpansion

REM Define target registry path
set "RegPath=HKEY_CLASSES_ROOT\*\shellex\ContextMenuHandlers\FortiClient"

REM Maximum retry count to avoid infinite loop
set "MaxRetries=30"
set "RetryCount=0"

:retry
echo Attempting to delete registry key: %RegPath%
reg delete "%RegPath%" /f >nul 2>&1

REM Check if the registry key exists
reg query "%RegPath%" >nul 2>&1
if %errorlevel%==0 (
    REM Registry key still exists
    set /a RetryCount+=1
    echo Deletion failed, retrying... Attempt #!RetryCount!
    if !RetryCount! geq %MaxRetries% (
        echo Maximum retry count reached. Exiting script.
        exit /b 1
    )
    REM Wait 1 second before retrying
    timeout /t 1 >nul
    goto retry
)

REM Successful deletion
echo Registry key successfully deleted!
exit /b 0
