/* Copyright (c) 2017 Kewin Rausch
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Empower Agent simulator master header.
 */

#ifndef __EM_SIM_H
#define __EM_SIM_H

#include "err.h"
#include "iface.h"
#include "log.h"
#include "msg.h"
#include "neigh.h"
#include "phy.h"
#include "ran.h"
#include "ue.h"
#include "wrap.h"
#include "x2.h"

/******************************************************************************
 * Globals used all around the simulator:                                     *
 ******************************************************************************/

/* Id of the agent associated with the simulator. */
extern u32 sim_ID;

#endif
