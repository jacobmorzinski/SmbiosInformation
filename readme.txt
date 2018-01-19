
Following along with five days of the "The Old New Thing" blog.

General notes:
* Windows 10
* Visual Studio Community 2017, version 15.5.4
* All three major workloads are installed:
** Universal Windows Platform development
** .NET desktop development
** Desktop development with C++

https://blogs.msdn.microsoft.com/oldnewthing/20180104-00/?p=97715
How do I get the computer’s serial number? Consuming Windows Runtime classes in desktop apps, part 1: Raw C++

 Notes: windowsapp.lib is in a Windows 10 SDK
 The class CCoInitialize is at
  https://blogs.msdn.microsoft.com/oldnewthing/20040520-00/?p=39243

https://blogs.msdn.microsoft.com/oldnewthing/20180105-00/?p=97725
How do I get the computer’s serial number? Consuming Windows Runtime classes in desktop apps, part 2: C++/CX

 Notes: in my case, platform.winmd was in 
  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\lib\store\references
 and windows.winmd was in
  C:\Program Files (x86)\Windows Kits\10\UnionMetadata\10.0.16299.0
 The error about "warning C4199: two-phase name lookup is not supported"
  was resolved by Properties > C/C++ > Language > Conformance mode "No"
  https://blogs.msdn.microsoft.com/vcblog/2016/11/16/permissive-switch/

https://blogs.msdn.microsoft.com/oldnewthing/20180108-00/?p=97735
How do I get the computer’s serial number? Consuming Windows Runtime classes in desktop apps, part 3: C++/WinRT

 Notes: "ISO C++17 Standard (/std:c++17)" requires Visual Studio 2017

https://blogs.msdn.microsoft.com/oldnewthing/20180109-00/?p=97745
How do I get the computer’s serial number? Consuming Windows Runtime classes in desktop apps, part 4: C#

 Notes: "Windows.System" requires a ".NET Framework" app, not ".NET Core"

https://blogs.msdn.microsoft.com/oldnewthing/20180110-00/?p=97755
How do I get the computer’s serial number? Consuming Windows Runtime classes in desktop apps, part 5: PowerShell
