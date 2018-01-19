# https://blogs.msdn.microsoft.com/oldnewthing/20180110-00/?p=97755

# Make sure to glue them together into one long line.
# (The continuation character doesn't work here.)
[Windows.System.Profile.SystemManufacturers.SmbiosInformation, Windows.System.Profile.SystemManufacturers, ContentType=WindowsRuntime] | Out-Null

[Windows.System.Profile.SystemManufacturers.SmbiosInformation]::SerialNumber
