// SmbiosInformation3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <stdio.h> // Horrors! Mixing C and C++!

#include "winrt/Windows.System.Profile.SystemManufacturers.h"

int __cdecl wmain(int, char**)
{
	winrt::init_apartment();
	{
		auto serialNumber = winrt::Windows::System::Profile::
			SystemManufacturers::SmbiosInformation::SerialNumber();
		wprintf(L"Serial number = %ls\n", serialNumber.c_str());
	}

	// The last thread cleans up before uninitializing for good.
	winrt::clear_factory_cache();
	winrt::uninit_apartment();

	return 0;
}
