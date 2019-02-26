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

#include "nakama-cpp/data/NLeaderboardRecord.h"
#include <vector>
#include <string>
#include <memory>

namespace Nakama {

    /// A set of leaderboard records, may be part of a leaderboard records page or a batch of individual records.
    struct NAKAMA_API NLeaderboardRecordList
    {
        std::vector<NLeaderboardRecord> records;           ///< A list of leaderboard records.
        std::vector<NLeaderboardRecord> owner_records;     ///< A batched set of leaderobard records belonging to specified owners.
        std::string next_cursor;                           ///< The cursor to send when retireving the next page, if any.
        std::string prev_cursor;                           ///< The cursor to send when retrieving the previous page, if any.
    };

    using NLeaderboardRecordListPtr = std::shared_ptr<NLeaderboardRecordList>;
}