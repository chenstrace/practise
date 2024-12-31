param (
    [string]$inputPath
)

if (-not $inputPath) {
    Write-Error "No input path provided."
    exit 1
}

if ($inputPath.StartsWith("'") -and $inputPath.EndsWith("'")) {
    $inputPath = $inputPath.Substring(1, $inputPath.Length - 2)
}

$normalizedPath = $inputPath -replace '\\', '/'

$driveLetter = $normalizedPath.Substring(0, 1).ToLower()
$pathWithoutDrive = $normalizedPath.Substring(2)
$linuxPath = "/mnt/$driveLetter$pathWithoutDrive"

Set-Clipboard -Value $linuxPath

#powershell -NoProfile -ExecutionPolicy Bypass -WindowStyle Hidden -File "C:\Users\cjili\project\practise\windows\CopyLinuxPath.ps1" '%1'
