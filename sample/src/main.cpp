#include <Windows.h>
#include <werapi.h>
#include <stdexcept>

#include <filesystem>
#include <iostream>

int main()
{
    const auto path = std::filesystem::current_path();
    const auto dllHandler = path.wstring() + L"\\weriety_plugin.dll";

    const auto result = WerRegisterRuntimeExceptionModule(dllHandler.c_str(), NULL);
    std::cout << (result == S_OK) << std::endl;
    RaiseException(0xABCD1234, EXCEPTION_NONCONTINUABLE, 0, NULL);
}
