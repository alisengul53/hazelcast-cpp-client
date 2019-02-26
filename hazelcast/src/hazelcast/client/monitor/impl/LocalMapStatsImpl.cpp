/*
 * Copyright (c) 2008-2019, Hazelcast, Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "hazelcast/client/monitor/impl/LocalMapStatsImpl.h"
#include "hazelcast/client/monitor/NearCacheStats.h"

namespace hazelcast {
    namespace client {
        namespace monitor {
            namespace impl {
                LocalMapStatsImpl::LocalMapStatsImpl() : nearCacheStats(NULL) {}

                NearCacheStats *LocalMapStatsImpl::getNearCacheStats() {
                    return nearCacheStats;
                }

                void LocalMapStatsImpl::setNearCacheStats(NearCacheStats &stats) {
                    this->nearCacheStats = &stats;
                }
            }
        }
    }
}

