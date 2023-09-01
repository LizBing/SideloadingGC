/*
 * Copyright (c) 2023, Team Relight. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software, LICENSED UNDER BSD 3-Clause License.
 *
 * Contact with Team Relight via email: lizbing@relight.team
 */

#ifndef SHARE_GC_EPSILON_SIDELOADING_SIDELOADINGARGUMENTS_
#define SHARE_GC_EPSILON_SIDELOADING_SIDELOADINGARGUMENTS_

#include "gc/shared/gcArguments.hpp"

class SideloadingArguments : public GCArguments {
    friend class EpsilonArguments;

private:
    virtual void initialize_alignments();

    virtual size_t conservative_max_heap_alignment();
    virtual CollectedHeap* create_heap();
};


#endif // SHARE_GC_EPSILON_SIDELOADING_SIDELOADINGARGUMENTS_
