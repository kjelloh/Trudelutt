//
// Created by kjell-olovhogdahl on 7/25/2016.
//

#ifndef TRUDELUTT_FRONTEND_H
#define TRUDELUTT_FRONTEND_H

#include "Active.h"
#include "Core.h"
#include <type_traits>

struct Console {}; // Console tag

template <typename Tag>
class FrontEnd { // Primary template class never used
    static_assert(true,"Provided Frontend tag not supported");
};

template <>
class FrontEnd<Console>  { // The Console Fronend
public:
    FrontEnd() = default;
    ~FrontEnd() = default;
    FrontEnd(const FrontEnd&) = delete;
    FrontEnd& operator=(const FrontEnd&)= delete;

    int run();

private:
    Core m_core;
};

#endif //TRUDELUTT_FRONTEND_H
