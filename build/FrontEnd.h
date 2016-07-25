//
// Created by kjell-olovhogdahl on 7/25/2016.
//

#ifndef TRUDELUTT_FRONTEND_H
#define TRUDELUTT_FRONTEND_H

#include "Active.h"
#include "Core.h"

class FrontEnd : public Active {
public:
    FrontEnd() = default;
    ~FrontEnd() = default;
    FrontEnd(const FrontEnd&) = delete;
    FrontEnd& operator=(const FrontEnd&)= delete;

private:
    Core m_core;
};

#endif //TRUDELUTT_FRONTEND_H
