#include "wer_plugin_facade_impl.h"

namespace wr {

    void wer_plugin_facade_impl::configure(std::wstring_view path) {
    }

    void wer_plugin_facade_impl::handle_exception(PWER_RUNTIME_EXCEPTION_INFORMATION exception) {
        m_exception_handler.handle_exception(exception);
    }

    void wer_plugin_facade_impl::handle_signature() {
    }

    void wer_plugin_facade_impl::handle_debug_execute() {
    }

}
