//
// Created by kjell-olovhogdahl on 7/25/2016.
//

#ifndef TRUDELUTT_CORE_H
#define TRUDELUTT_CORE_H

#include "Active.h"
#include "BackEnd.h"

class Core : public Active {
public:
    Core() = default;
    ~Core() = default;
    Core(const Core&) = delete;
    Core& operator=(const Core&)= delete;
private:
    BackEnd m_back_end;
};

#endif //TRUDELUTT_CORE_H
