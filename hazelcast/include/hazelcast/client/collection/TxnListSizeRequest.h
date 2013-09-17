//
// Created by sancar koyunlu on 8/5/13.
// Copyright (c) 2013 hazelcast. All rights reserved.



#ifndef HAZELCAST_TxnListSizeRequest
#define HAZELCAST_TxnListSizeRequest

#include "TxnCollectionRequest.h"

namespace hazelcast {
    namespace client {
        namespace collection {
            class TxnListSizeRequest : public TxnCollectionRequest {
            public:
                TxnListSizeRequest(const std::string& name);

                int getClassId() const;

            };
        }
    }
}
#endif //HAZELCAST_TxnListSizeRequest