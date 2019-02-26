/*
 * Copyright 2019 The Nakama Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "nakama-cpp/NTypes.h"
#include <string>

namespace Nakama {

    /// A tournament on the server.
    struct NAKAMA_API NTournament
    {
        std::string id;                ///< The ID of the tournament.
        std::string title;             ///< The title for the tournament.
        std::string description;       ///< The description of the tournament. May be blank.
        uint32_t category = 0;         ///< The category of the tournament. e.g. "vip" could be category 1.
        uint32_t sort_order = 0;       ///< ASC or DESC sort mode of scores in the tournament.
        uint32_t size = 0;             ///< The current number of players in the tournament.
        uint32_t max_size = 0;         ///< The maximum number of players for the tournament.
        uint32_t max_num_score = 0;    ///< The maximum score updates allowed per player for the current tournament.
        bool can_enter = false;        ///< True if the tournament is active and can enter. A computed value.
        NTimestamp create_time = 0;    ///< The UNIX time when the tournament was created.
        NTimestamp start_time = 0;     ///< The UNIX time when the tournament will start.
        NTimestamp end_time = 0;       ///< The UNIX time when the tournament will be stopped.
        uint32_t end_active = 0;       ///< The UNIX timestamp when the tournament stops being active until next reset. A computed value.
        uint32_t next_reset = 0;       ///< The UNIX timestamp when the tournament is next playable. A computed value.
        uint32_t duration = 0;         ///< The UNIX timestamp for duration of a tournament.
        std::string metadata;          ///< Additional information stored as a JSON object.
    };

}