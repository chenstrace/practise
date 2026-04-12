param(
    [Parameter(Mandatory=$true)]
    [string]$FilePath
)

# 支持算法
$algos = 'MD5','SHA1','SHA256','SHA512'

# 检查文件是否存在
if (-not (Test-Path $FilePath)) {
    Write-Host "File does not exist: $FilePath" -ForegroundColor Red
    exit
}

# 生成输出
$output = ""
foreach ($algo in $algos) {
    try {
        $hash = Get-FileHash -Path $FilePath -Algorithm $algo
        $output += "{0,-8}: {1}`n" -f $hash.Algorithm, $hash.Hash.ToLower()
    } catch {
        $output += "$algo : Not supported or error`n"
    }
}

# 输出到 PowerShell 控制台
Write-Host $output
