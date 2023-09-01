/*
 * Copyright (c) 2023, Team Relight. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software, LICENSED UNDER BSD 3-Clause License.
 *
 * Contact with Team Relight via email: lizbing@relight.team
 */

#ifndef SHARE_GC_EPSILON_SIDELOADING_SIDELOADINGBARRIERSET_
#define SHARE_GC_EPSILON_SIDELOADING_SIDELOADINGBARRIERSET_

#include "gc/shared/barrierSet.hpp"

class SideloadingBarrierSet : public BarrierSet {
public:
    template <DecoratorSet decorators, typename BarrierSetT = SideloadingBarrierSet>
    class AccessBarrier: public BarrierSet::AccessBarrier<decorators, BarrierSetT> {
        using Raw = BarrierSet::AccessBarrier<decorators, BarrierSetT>;
    };
};

template<>
struct BarrierSet::GetName<SideloadingBarrierSet> {
    static const BarrierSet::Name value = BarrierSet::SideloadingBarrierSet;
};

template<>
struct BarrierSet::GetType<BarrierSet::SideloadingBarrierSet> {
    using type = ::SideloadingBarrierSet;
};


#endif // SHARE_GC_EPSILON_SIDELOADING_SIDELOADINGBARRIERSET_