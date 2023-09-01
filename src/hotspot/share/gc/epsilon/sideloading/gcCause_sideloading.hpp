/*
 * Copyright (c) 2023, Team Relight. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software, LICENSED UNDER BSD 3-Clause License.
 *
 * Contact with Team Relight via email: lizbing@relight.team
 *
 */

#ifndef SHARE_GC_EPSILON_SIDELOADING_GCCAUSE_SIDELOADING_
#define SHARE_GC_EPSILON_SIDELOADING_GCCAUSE_SIDELOADING_

#define SIDELOADING_GCCAUSE_ENUM(enum_name, ...) enum_name ,
#define SIDELOADING_GCCAUSE_RET_CSTR(enum_name, cstr) \
    case enum_name: \
        return cstr;

// add your specific GCCauses enums here
// @f: f(enum_name, c_string)
// example: f(_foo_cause_gc_for_fun, "Foo Cause GC for Fun")
#define SIDELOADING_GCCAUSES_DO(f) \


#endif // SHARE_GC_EPSILON_SIDELOADING_GCCAUSE_SIDELOADING_