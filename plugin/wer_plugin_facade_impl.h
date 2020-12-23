/* Copyright (C) 2020 Gleb Bezborodov - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the MIT license.
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: bezborodoff.gleb@gmail.com, or visit : https://github.com/glensand/weriety
 */

#pragma once

#include "wer_plugin_facade.h"
#include "exception_handler.h"
#include <string>

namespace wr {

    class wer_plugin_facade_impl : public wer_plugin_facade {
    public:
        wer_plugin_facade_impl() = default;
        virtual ~wer_plugin_facade_impl() = default;

        void configure(std::wstring_view path);

        virtual void handle_exception(PWER_RUNTIME_EXCEPTION_INFORMATION exception) override;

        virtual void handle_signature() override;

        virtual void handle_debug_execute() override;

    private:
        exception_handler m_exception_handler;
    };

}
