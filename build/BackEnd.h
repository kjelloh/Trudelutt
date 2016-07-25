//
// Created by kjell-olovhogdahl on 7/25/2016.
//

#ifndef TRUDELUTT_BACKEND_H
#define TRUDELUTT_BACKEND_H

#include "Active.h"

class BackEnd : public Active {
public:
    BackEnd() = default;
    ~BackEnd() = default;
    BackEnd(const BackEnd&) = delete;
    BackEnd& operator=(const BackEnd&)= delete;
};


#endif //TRUDELUTT_BACKEND_H
