//
// Created by sancar koyunlu on 6/25/13.
// Copyright (c) 2013 hazelcast. All rights reserved.



#ifndef HAZELCAST_IndexOfRequest
#define HAZELCAST_IndexOfRequest


#include "CollectionKeyBasedRequest.h"
#include "CollectionProxyId.h"
#include "../serialization/Data.h"

namespace hazelcast {
    namespace client {
        namespace collection {
            class IndexOfRequest : public CollectionKeyBasedRequest {
            public:
                IndexOfRequest(const CollectionProxyId& id, const serialization::Data& key, const serialization::Data& value, bool last)
                : CollectionKeyBasedRequest(id, key)
                , value(value)
                , last(last) {

                };

                int getClassId() const {
                    return CollectionPortableHook::INDEX_OF;
                };

                template<typename HzWriter>
                void writePortable(HzWriter& writer) const {
                    writer["l"] << last;
                    writer << value;
                    CollectionRequest::writePortable(writer);
                };

                template<typename HzReader>
                void readPortable(HzReader& reader) {
                    reader["l"] >> last;
                    reader >> value;
                    CollectionRequest::readPortable(reader);
                };

            private:
                const serialization::Data& value;
                bool last;
            };
        }
    }
}

#endif //HAZELCAST_IndexOfRequest