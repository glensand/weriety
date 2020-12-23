#include "exception_handler.h"

#include <fstream>
namespace wr {

    void exception_handler::handle_exception(PWER_RUNTIME_EXCEPTION_INFORMATION exception)
    {
        std::ofstream out("out.txt");
        out << exception->exceptionRecord.ExceptionCode;
        out.close();
    }

}
