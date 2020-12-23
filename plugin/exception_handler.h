/* Copyright (C) 2020 Gleb Bezborodov - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/weriety
 */

#pragma once

#include <Windows.h>
#include <werapi.h>

namespace wr {

    class exception_handler final {
    public:
        exception_handler() = default;

        void handle_exception(PWER_RUNTIME_EXCEPTION_INFORMATION exception);

    };

}