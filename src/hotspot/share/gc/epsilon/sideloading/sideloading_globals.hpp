/*
 * Copyright (c) 2023, Team Relight. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software, LICENSED UNDER BSD 3-Clause License.
 *
 * Contact with Team Relight via email: lizbing@relight.team
 *
 */

#ifndef SHARE_GC_EPSILON_SIDELOADING_SIDELOADING_GLOBALS_
#define SHARE_GC_EPSILON_SIDELOADING_SIDELOADING_GLOBALS_

#define GC_EPSILON_SIDELOADING_FLAGS(develop,                                           \
                                     develop_pd,                                        \
                                     product,                                           \
                                     product_pd,                                        \
                                     notproduct,                                        \
                                     range,                                             \
                                     constraint) \
                                      \
    product(bool, EpsilonSideloading, true, EXPERIMENTAL, \
            "Sideload your own GC onto Epsilon. Team Relight extension.") \


#endif // SHARE_GC_EPSILON_SIDELOADING_SIDELOADING_GLOBALS_