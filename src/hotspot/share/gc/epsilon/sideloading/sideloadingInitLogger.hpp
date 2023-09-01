/*
 * Copyright (c) 2023, Team Relight. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software, LICENSED UNDER BSD 3-Clause License.
 *
 * Contact with Team Relight via email: lizbing@relight.team
 */

#ifndef SHARE_GC_EPSILON_SIDELOADING_SIDELOADINGINITLOGGER_
#define SHARE_GC_EPSILON_SIDELOADING_SIDELOADINGINITLOGGER_

#include "gc/shared/gcInitLogger.hpp"

class SideloadingInitLogger : public GCInitLogger {
public:
    static void print();
};


#endif // SHARE_GC_EPSILON_SIDELOADING_SIDELOADINGINITLOGGER_