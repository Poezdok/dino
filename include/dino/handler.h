//
// Created by alex on 19.11.2021.
//

#ifndef DINO_HANDLER_H
#define DINO_HANDLER_H


#include "dino/headers.h"


bool getDino(dino::make_dino::Request &req, dino::make_dino::Response &res);
void initHandlers(void);


#endif //DINO_HANDLER_H
