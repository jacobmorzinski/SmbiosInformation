// SmbiosInformation1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <wrl/client.h>
#include <wrl/wrappers/corewrappers.h>
#include <windows.system.profile.systemmanufacturers.h>
#include <roapi.h>
#include <stdio.h> // Horrors! Mixing C and C++!

namespace WRL = Microsoft::WRL;
namespace spsm = ABI::Windows::System::Profile::SystemManufacturers;

using Microsoft::WRL::Wrappers::HString;
using Microsoft::WRL::Wrappers::HStringReference;

class CCoInitialize {
public:
	CCoInitialize() : m_hr(CoInitialize(NULL)) { }
	~CCoInitialize() { if (SUCCEEDED(m_hr)) CoUninitialize(); }
	operator HRESULT() const { return m_hr; }
	HRESULT m_hr;
};

int __cdecl wmain(int, wchar_t**)
{
	CCoInitialize init;

	WRL::ComPtr<spsm::ISmbiosInformationStatics> statics;
	HString serialNumber;
	RoGetActivationFactory(HStringReference(
		RuntimeClass_Windows_System_Profile_SystemManufacturers_SmbiosInformation)
		.Get(), IID_PPV_ARGS(&statics));
	statics->get_SerialNumber(serialNumber.GetAddressOf());
	wprintf(L"Serial number = %ls\n", serialNumber.GetRawBuffer(nullptr));

	return 0;
}

