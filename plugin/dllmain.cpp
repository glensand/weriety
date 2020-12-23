/* Copyright (C) 2020 Gleb Bezborodov - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/weriety
 */

#include "Windows.h"
#include "wer_plugin_facade_impl.h"

namespace wr {
    wer_plugin_facade* facade = nullptr;
}

BOOL APIENTRY DllMain(HMODULE, DWORD, LPVOID)
{
    wr::wer_plugin_facade_impl facade_impl;
    facade_impl.configure(L"");
    wr::facade = &facade_impl;
    return TRUE;
}
