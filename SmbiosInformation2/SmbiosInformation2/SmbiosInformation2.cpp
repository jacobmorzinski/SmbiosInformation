// SmbiosInformation2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <stdio.h> // Horrors! Mixing C and C++!

class CCoInitialize {
public:
	CCoInitialize() : m_hr(CoInitialize(NULL)) { }
	~CCoInitialize() { if (SUCCEEDED(m_hr)) CoUninitialize(); }
	operator HRESULT() const { return m_hr; }
	HRESULT m_hr;
};

[Platform::STAThread]
int __cdecl wmain(int, wchar_t**)
{
	CCoInitialize init;

	auto serialNumber = Windows::System::Profile::SystemManufacturers::
		SmbiosInformation::SerialNumber;
	wprintf(L"Serial number = %ls\n", serialNumber->Data());

	return 0;
}
